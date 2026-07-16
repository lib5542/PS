#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int Answer;

int main(int argc, char** argv)
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

	int T, test_case;
	
	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{
		Answer = 0;

        int N;
        cin >> N;

        vector<ll> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        vector<ll> keyIndex;

        bool up;

        if (A[0] <= A[1]) {
            up = true;
        } else {
            up = false;
        }
        
        for (int i = 1; i < N-1; i++) {
            if (up && A[i] > A[i+1]) {
                up = false;
                keyIndex.push_back(i);
            } else if (!up && A[i] < A[i+1]) {
                up = true;
                keyIndex.push_back(i);
            }
        }

        vector<vector<ll>> sep(keyIndex.size()+1);
        ll keyIndexCounter = 0;
        ll keyIndexCounter2 = 0;

        if (keyIndex.size() == 0) {
            sep[0] = A;
        } else {
            for (int i = 0; i < N; i++) {
                if (i == keyIndex[keyIndexCounter]) {
                    keyIndexCounter += 1;
                    keyIndexCounter2 += 1;
                    if (keyIndexCounter == keyIndex.size()) keyIndexCounter -= 1;
                } else {
                    sep[keyIndexCounter2].push_back(A[i]);
                }
            }
        }

        if (keyIndex.size() != 0) {
            if (A[keyIndex[0]] > A[keyIndex[1]]) {
                up = true;
            }
            for (int i = 0; i < keyIndex.size(); i++) {
                if (up) {
                    if (A[keyIndex[i]] - A[keyIndex[i]-1] > A[keyIndex[i]] - A[keyIndex[i]+1]) {
                        sep[i].push_back(A[keyIndex[i]]);
                    } else {
                        sep[i+1].insert(sep[i+1].begin(), A[keyIndex[i]]);
                    }
                    up = false;
                } else {
                    if (A[keyIndex[i]-1] - A[keyIndex[i]] > A[keyIndex[i]+1] - A[keyIndex[i]]) {
                        sep[i].push_back(A[keyIndex[i]]);
                    } else {
                        sep[i+1].insert(sep[i+1].begin(), A[keyIndex[i]]);
                    }
                    up = true;
                }
            }
        }

        ll result = 0;
        if (keyIndex.size() == 0) {
            result = *max_element(sep[0].begin(), sep[0].end()) - *min_element(sep[0].begin(), sep[0].end());
        } else {
            for (int i = 0; i < sep.size(); i++) {
                result += *max_element(sep[i].begin(), sep[i].end()) - *min_element(sep[i].begin(), sep[i].end());
            }
        }

        Answer = result;

		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;
}