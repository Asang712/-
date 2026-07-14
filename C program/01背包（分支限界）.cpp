#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

// 物品结构体
struct Item {
    int w;     // 重量
    int v;     // 价值
    double r;  // 单位重量价值 v/w
} items[100];

// 活结点结构体
struct Node {
    int level;          // 当前处理物品层数
    int curW;           // 当前总重量
    int curV;           // 当前总价值
    int path[100];      // 记录物品选取状态 0不选 1选
};

int n, C;               // 物品数量、背包容量
int bestV = 0;          // 全局最优价值
int bestPath[100];      // 最优物品选择方案

// 按单位价值降序排序
bool cmp(Item a, Item b) {
    return a.r > b.r;
}

// 限界函数：计算当前结点价值上界
int bound(Node node) {
    // 超重直接返回当前价值
    if (node.curW >= C)
        return node.curV;
    int restW = C - node.curW;
    int upV = node.curV;
    int i = node.level + 1;
    // 依次拿剩余物品
    while (i < n && items[i].w <= restW) {
        upV += items[i].v;
        restW -= items[i].w;
        i++;
    }
    // 剩余空间装部分物品
    if (i < n)
        upV += restW * items[i].r;
    return upV;
}

// 队列式分支限界主函数
void queueBranchBound() {
    queue<Node> q;
    // 初始化根结点
    Node root;
    root.level = -1;
    root.curW = 0;
    root.curV = 0;
    memset(root.path, 0, sizeof(root.path));
    q.push(root);

    while (!q.empty()) {
        Node cur = q.front();
        q.pop();
        // 所有物品处理完毕，跳过
        if (cur.level == n - 1)
            continue;

        int nextLv = cur.level + 1;
        // ========== 左分支：选取第nextLv件物品 ==========
        Node left = cur;
        left.level = nextLv;
        left.curW += items[nextLv].w;
        left.curV += items[nextLv].v;
        left.path[nextLv] = 1;
        // 不超重才判断
        if (left.curW <= C) {
            // 更新最优解
            if (left.curV > bestV) {
                bestV = left.curV;
                memcpy(bestPath, left.path, sizeof(left.path));
            }
            // 上界大于当前最优，入队拓展
            if (bound(left) > bestV) {
                q.push(left);
            }
        }

        // ========== 右分支：不选第nextLv件物品 ==========
        Node right = cur;
        right.level = nextLv;
        right.path[nextLv] = 0;
        if (bound(right) > bestV) {
            q.push(right);
        }
    }
}

int main() {
    cout << "请输入物品数量n：";
    cin >> n;
    cout << "请输入背包容量C：";
    cin >> C;
    cout << "依次输入每件物品 重量 价值：" << endl;
    for (int i = 0; i < n; i++) {
        cin >> items[i].w >> items[i].v;
        items[i].r = 1.0 * items[i].v / items[i].w;
    }
    // 物品排序
    sort(items, items + n, cmp);
    // 分支限界求解
    queueBranchBound();

    // 输出结果
    cout << "\n========= 求解结果 =========" << endl;
    cout << "背包最大价值：" << bestV << endl;
    cout << "选取物品编号（从0开始）：";
    for (int i = 0; i < n; i++) {
        if (bestPath[i] == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}