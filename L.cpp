#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

#define M 1000000007

int main(){
    ios_base::sync_with_stdio(false);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> st;
        while(n--){
            int a; cin >> a; if(a % 2 == 0)st.insert(a);
        }
        int cnt = 0;
        for(auto it = st.rbegin(); it != st.rend(); it++){
            if(*it % 4 == 0){
                st.insert(*it/2);
            }
            cnt++;
        }
        cout << cnt << endl;
    }


}