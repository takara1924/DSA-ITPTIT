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
        int a[n+4], b[n+4];
        set<int> st;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            st.insert(a[i]);
        }

        ll ans = 0;
        for(int i = 0; i < n; i++){
            cin >> b[i];
            ans += abs(a[i] - b[i]) % M; ans %= M;
        }
        ll cnt = ans;

        for(int i = 0; i < n; i++){
            auto lb = st.lower_bound(b[i]);
            auto ub = lb; if(ub != st.begin()) ub--;
            int k = (abs(b[i] - *lb) < abs(b[i] - *ub)) ? *lb : *ub;
            cnt = min(cnt, ans + abs(b[i] - k) -abs(a[i] -b[i])) % M ;
        }

        cout << cnt <<endl;
    }


}