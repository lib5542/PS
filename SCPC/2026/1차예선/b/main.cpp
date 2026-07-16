#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int Answer;

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

	int T, test_case;
	
	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{
		Answer = 0;

        int N;
        cin >> N;

        vector<ll> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        ll maxA = 0;
        ll minA = LLONG_MAX;

        for (int i = 0; i < N-2; i++) {

            ll first = A[i];
            ll second = A[i+1];
            ll third = A[i+2];

            if (i == 0 || i == N-3) {
                maxA = max(third-first, maxA);
            }

            if (N >= 4 && i+3 < N-2) {
                ll fourth = A[i+3];
                maxA = max(fourth-(first+fourth)/2, maxA);
            }
            maxA = max(third-(third+first)/2, maxA);
            minA = min(third-(first+third)/2, minA);
        }

		cout << "Case #" << test_case+1 << endl;
		cout << maxA << " " << minA << endl;
	}

	return 0;
}