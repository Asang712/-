#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int k;
    cout << "请输入数字：";
    cin >> s;
    cout << "请输入要删除的数字个数k：";
    cin >> k;

    // 贪心删除k个数字
    while (k > 0)
    {
        bool flag = false;
        // 从左往右找第一个前大于后的位置
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] > s[i + 1])
            {
                s.erase(i, 1); // 删除第i位
                k--;
                flag = true;
                break;
            }
        }
        // 整个序列递增，删除末尾k位
        if (!flag)
        {
            s = s.substr(0, s.size() - k);
            k = 0;
        }
    }

    // 去除前导0
    int pos = 0;
    while (pos < s.size() && s[pos] == '0')
        pos++;
    string res = s.substr(pos);

    // 处理全0情况
    if (res.empty())
        cout << "最小数字：0" << endl;
    else
        cout << "最小数字：" << res << endl;

    return 0;
}