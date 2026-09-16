 #include <bits/stdc++.h>
 using namespace std;

typedef long long ll;
typedef pair<int,int> pp;

int main(){
    ios::sync_with_stdio();
    cin.tie();
    
    int n;
    cin >> n;

    vector<pp> v(n + 1);
    vector<pp> time(n + 1);
    vector<pp> ans(n + 1);
    vector<bool> visited(n + 1, false);

    for(int i = 1; i <= n ;i++){
        int x, y;
        cin >> x >> y;
        v[i] = make_pair(x, y);
    }

    for(int i = 1; i <= n ;i++){
        int x, y;
        cin >> x >> y;
        time[i] = make_pair(x, y);
    }

    // 시간 최소값, 대상 노드
    pp minn = make_pair(INT_MAX, 0);
    for(int i = 1; i <= n; i++){
        int dis = v[i].first + v[i].second;
        int maxTime = max(dis, time[i].second);
        int gold = (dis < time[i].second) ? 

        ans[i] = make_pair(time, )
        if(minn.first > )
    }

}
/*
int n, k;
cin >> n >> k;
vector<pair<int,int>> v;

v.push_back(make_pair(0,1));
v.push_back(make_pair(1,1));

for(int i = 1; i <= n; i++){
    for(int j = 2; i <= n; i++){
        if(i == 1) v.push_back(make_pair(i, j));
        else{
            if(j % i == 0) v.push_back(make_pair)
        }
    }
}

return 0;
}
*/