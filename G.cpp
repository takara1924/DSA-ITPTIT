#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main(){
    ios_base::sync_with_stdio(false);
    
        int n; cin >> n;
        unordered_map<string, vector<string>> mp;

        vector<string> vt;
        //aa
        while(n--){
            string s; cin >> s;
            string temp = s;
            sort(temp.begin(), temp.end()); 
            if(mp.find(temp) == mp.end()) {
                vt.push_back(s);
            }
            mp[temp].push_back(s);
        }

        sort(vt.begin(), vt.end());

        for(string s : vt){
            string temp = s;
            sort(temp.begin(), temp.end());
            for(string st : mp[temp]){
                cout << st << " ";
            }
            cout << endl;
        }
    


}