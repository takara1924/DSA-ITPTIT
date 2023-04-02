#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    
    int t; cin >> t;
        map<int, string>mp;
        mp[1] = "I";
        mp[5] = "V";
        mp[10] = "X";
        mp[50] = "L";
        mp[100] = "C";
        mp[500] = "D";
        mp[1000] = "M";
        mp[4] = "IV";
        mp[9] = "IX";
        mp[40] = "XL"; mp[90] = "XC"; mp[400] = "CD"; mp[900] = "CM";
    while(t--){
        int n; cin >> n;
        for(auto it = mp.rbegin(); it != mp.rend(); it++){
            int k = n / it->first;
            while(k--) cout << it->second;
            n %= it->first;
        }
        cout << endl;
    }


}