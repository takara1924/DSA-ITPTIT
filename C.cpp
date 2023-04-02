#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    std::ios::sync_with_stdio(false);
    
    int n; cin >> n;
    map<int, int> mp;
    int cnt = 0;

    while(n--){
        int a; cin >> a;
        mp[a]++;
        cnt = max(cnt, mp[a]);
    }

    cout << cnt << "\n";
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " ";
    }
}