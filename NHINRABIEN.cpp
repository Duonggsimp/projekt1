//problem 22: http://csloj.ddns.net/problem/22


#include <bits/stdc++.h>
using namespace std;
int n, m, a[1000][1000], dem;
bool kt;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ;
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> a[i][j];
    kt = false;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            kt = false;
            for (int z = 0; z <= i - 1; z++)
                if (a[i][j] < a[z][j])
                    break;
                else if (z == i - 1 && a[i][j] >= a[z][j]) {
                    dem++;
                    kt = true;
                }
            if (kt == false)
                for (int z = i + 1; z <= n + 1; z++)
                    if (a[i][j] < a[z][j])
                        break;
                    else if (z == n + 1 && a[i][j] >= a[z][j]) {
                        dem++;
                        kt = true;
                    }
            if (kt == false)
                for (int z = 0; z <= j - 1; z++)
                    if (a[i][j] < a[i][z])
                        break;
                    else if (z == j - 1 && a[i][j] >= a[i][z]) {
                        dem++;
                        kt = true;
                    }
            if (kt == false)
                for (int z = j + 1; z <= m + 1; z++)
                    if (a[i][j] < a[i][z])
                        break;
                    else if (z == m + 1 && a[i][j] >= a[i][z]) {
                        dem++;
                        kt = true;
                    }
        }
    cout << dem;
}

