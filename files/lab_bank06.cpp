#include <bits/stdc++.h>
using namespace std;

// Симуляція алгоритму Евкліда (відніманням), перевірка чи з'явиться (c, d)
bool check(long long a, long long b, long long c, long long d) {
    while (true) {
        if (a == c && b == d) return true;
        if (b == c && a == d) return true;
        if (b == 0 || a == 0) return false;
        if (a < b) swap(a, b);
        if (a == c && b == d) return true;
        // На цьому кроці a >= b, a -= b
        // Якщо шукаємо (c, d), то можемо потрапити на нього лише якщо:
        // - c <= a і d == b, причому a - k*b == c для деякого k >= 0
        if (b == d && a >= c && (a - c) % b == 0) return true;
        a %= b;
    }
}

int check_six() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k;
    cin >> k;
    while (k--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if (check(a, b, c, d)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}