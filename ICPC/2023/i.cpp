#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

typedef pair<int,int> pi;
bool cmp(pi a,pi b){
    return a.first * b.second < b.first * a.second; 
}
vector<pi> a;
std::random_device rd;
int check(int n,int k){
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, n);   
    
}



int main(){
    int n,k;cin>>n>>k;
    a.emplace_back(0,0);
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
           if(gcd(i,j)==1) a.emplace_back(j,i);
        }
    }
    a.emplace_back(1,1);
    // sort(a.begin(),a.end(),cmp);



}