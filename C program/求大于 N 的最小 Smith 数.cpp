#include <iostream>
#include <cmath>
using namespace std;

// 求数字各位之和
int sumDigit(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// 判断是否为质数
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

// 求质因数各位之和
int sumPrimeFactor(int n) {
    int sum = 0;
    int tmp = n;
    for (int i = 2; i <= tmp; i++) {
        while (n % i == 0) {
            sum += sumDigit(i);
            n /= i;
        }
    }
    return sum;
}

// 判断是否是Smith数
bool isSmith(int n) {
    if (isPrime(n)) return false; // 必须是合数
    return sumDigit(n) == sumPrimeFactor(n);
}

// 找大于N的最小Smith数
int findMinSmith(int N) {
    int num = N + 1;
    while (true) {
        if (isSmith(num)) return num;
        num++;
    }
}

int main() {
    int N;
    cout << "请输入正整数 N：";
    cin >> N;
    cout << "大于 " << N << " 的最小Smith数是：" << findMinSmith(N) << endl;
    return 0;
}