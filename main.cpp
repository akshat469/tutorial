#include <bits/stdc++.h>
using namespace std;
// adding main comment '

 // this is a comment 

 int lcsRec(string &s1, string &s2,int m,int n) {
    
    if (m == 0 || n == 0)
        return 0;

    if (s1[m - 1] == s2[n - 1])
      
        return 1 + lcsRec(s1, s2, m - 1, n - 1);

    else
        return max(lcsRec(s1, s2, m, n - 1), lcsRec(s1, s2, m - 1, n));
}
int lcs(string &s1,string &s2){
    
    int m = s1.size(), n = s2.size();
    return lcsRec(s1,s2,m,n);
}

void solve(){
        string s1,s2;
    cin>>s1;
    cin>>s2;
    int m = s1.size();
    int n = s2.size();

    cout << lcs(s1, s2) << endl;


}
int main() {
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
