#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long LL;
inline int read() {
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}
const int maxn = 1e6 + 7;
const int inf = 0x3f3f3f3f;

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        printf("Yes\n");
    }
}