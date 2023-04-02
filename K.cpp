#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;


int main(){
    ios_base::sync_with_stdio(false);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> st;
        while(n--){
            int a; cin >> a;
            st.insert(a);
        }
        int check = 1;
        auto it = st.begin(); it++;
        for(;it != st.end(); it++){
            auto jt = it;
            jt--;
            if(*it -*jt > 1){
                check = 0;
                break;
            }
        }
        (check) ? cout << "YES\n" : cout << "NO\n";
    }
}