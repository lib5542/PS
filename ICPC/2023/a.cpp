 #include <bits/stdc++.h>
 using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio();
    cin.tie();

    string s;
    cin >> s;

    int len = s.length();
    int sum = 0;
    int j = 1;
    string v;

    while(len >= j){
        if(j == len){
            int i = 0;
            for(i; i <= (len - 1) / 2; i++){
                int x = s[i] - '0';
                if(i == 0){
                    if(i == (len - 1) / 2){
                        sum += x - 1;
                        // cout << sum << "\n";
                    }else{
                        sum += (x - 1) * pow(10, ((len - 1) / 2) - i);
                        // cout << sum << "\n";
                    }
                }else{
                    if(i == (len - 1) / 2){
                        sum += x;
                        // cout << sum << "\n";
                    }else{
                        sum += (x) * pow(10, ((len - 1) / 2) - i);
                        // cout << sum << "\n";
                    }
                }
                
            }
            
            for(int x = 0; x < len; x++){
                if(x <= (len - 1) / 2) v += s[x];
                else v += s[len - 1 - x];
            }

            ll s_ll = stoll(s);
            ll v_ll = stoll(v);

            if(s_ll >= v_ll) sum ++;
            
        }else{
            sum += 9 * pow(10,(int)((j - 1) / 2));
        }
        j++;
    }

    cout << sum << "\n";

    return 0;
 }