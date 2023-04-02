#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    map<int, int> mp;
    while(n--){
        int a; cin >> a;
        mp[a] ++;
    }

    multimap<int, int> mp2;

    for(auto it = mp.rbegin(); it != mp.rend(); it++){
        mp2.insert(pair<int, int>(it->second, it->first));
    }

    for(auto it =mp2.rbegin(); it!= mp2.rend(); it++){
        for(int i = 0; i < it-> first; i++) cout << it->second << " ";
    }
}