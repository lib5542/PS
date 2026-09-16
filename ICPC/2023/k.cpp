#include <bits/stdc++.h>
using namespace std;
 
unordered_map<pair<int,int>,int> cnt;
int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n; cin>>n; 
    vector<pair<int,int>> a(n);
    vector<int> X;
    vector<int> Y;
    for(auto &i : a){
        cin>>i.first>>i.second;
        // X.emplace_back(i.first);
        // Y.emplace_back(i.second);
    }
    
    // cout<<sizeof(cnt.size());    
    int mx = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mx = max(mx,++cnt[{(a[i].first+a[j].first),(a[i].second+a[j].second)}]);
        }
    }

    

    cout<<mx<<endl;

    return 0;
 }