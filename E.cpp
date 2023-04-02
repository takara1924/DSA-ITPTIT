#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    
    multiset<string> st;
    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        st.insert(s);
    }

    for(auto it = st.begin(); it != st.end(); it++){
        cout << *it << endl;
    }

}