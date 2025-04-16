#include <iostream>
#include <vector>
using namespace std;

vector<long long> d(100001, 100001); 

int main()
{
    long long int n;
    cin >> n;

    d[2] = 1;
    d[4] = 2;
    d[5] = 1;

    
    for (long long int i = 6; i <= n; i++)
    {
        d[i] = min(d[i - 2], d[i - 5]) + 1;
    }

    if (d[n] >= 100001) 
        cout << -1 << endl;
    else
        cout << d[n] << endl;

    return 0;
}