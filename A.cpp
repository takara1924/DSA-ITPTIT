#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n; cin >> n;

    int cnt = 1;

    map<int,int> mp;

    while(n--){
        int a; cin >> a;
        mp[a]++;
    }

    for(auto it = mp.begin(); it != mp.end(); it++) cnt = max(cnt, it->second);

    cout << cnt;
}