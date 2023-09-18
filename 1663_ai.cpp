#include <iostream>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    int n, temp;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        ans ^= temp;
    }
    cout << ans;
    return 0;
}