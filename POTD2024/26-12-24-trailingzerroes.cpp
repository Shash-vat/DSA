#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        ans += n / i;
    }
    cout << ans;
    return 0;
}
//time complexity = O(log5(n))
//space complexity = O(1)
