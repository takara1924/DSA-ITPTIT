#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

ull hashF(string s){
    ull hash = 0;
            for(int i = 0; i < s.size(); i++){
                hash += (s[i] -'a' +1) * pow(3, s[i] - 'a'); 
            }
        return hash;
}

int main(){
    ios_base::sync_with_stdio(false);
    
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int arr[n+1];
        for(int i = 0; i < n; i++) cin >> arr[i];

        int cnt = 1;

        for(int i = 0; i < n- 1;i++){
            int M = arr[i], m = arr[i];
            for(int j = i+ 1; j < n; j++){
                M = max(M, arr[j]); m = min(m, arr[j]);
                if(M-m <= k) cnt = max(cnt, j-i+1);
                else break;
            }
        }

        cout << cnt << endl;
    }


}