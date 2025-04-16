#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
    
    int N;
    vector<int> data(8001, 0);
    vector<int> sorted{};
    
    cin >> N;
    int maxFrequency{0};
    int Max{-4000}, Min{4000};
    double sum{0};
    for (int i{0}; i < N; ++i) {
        int idx;
        cin >> idx;
        ++data[idx+4000];
        sorted.push_back(idx);
        
        if (Max < idx)
            Max = idx;
        
        if (Min > idx)
            Min = idx;
        
        sum += idx;
        
        if (data[idx+4000] > maxFrequency)
            maxFrequency = data[idx+4000];
    }
    
    cout << lround(sum/N) << '\n';
    
    sort(sorted.begin(), sorted.end());
    cout << sorted[N/2] << '\n';
    
    int skip;
    if (count(data.begin(), data.end(), maxFrequency) > 1)
        skip = 1;
    else
        skip = 0;

    for (int i{0}; i < 8001; ++i) {
        if (data[i] == maxFrequency) {
            if (skip) {
                skip = 0;
                continue;
            }
            
            cout << i-4000 << '\n';
            break;
        }
    }
    
    cout << Max-Min;
    return 0;
}