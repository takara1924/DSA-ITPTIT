#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    
    int m,n; cin >> m;
    map<int, int> mp;

    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        mp[a] += b;
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        mp[a] += b;
    }

    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

}