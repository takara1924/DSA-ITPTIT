#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    int n,k; cin >> n >> k;

    unordered_set<int> st;

    while(n--){
        int a; cin >> a;
        st.insert(a);
    }

    (st.size() == k) ? cout << "Perfect" : cout << "Bad";
}