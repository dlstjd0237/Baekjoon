#include <iostream>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll x;
    cin >> x;
    if (x <= 2) cout << 1;
    else if (x <= 5) cout << 2;
    else cout << 3;
}
