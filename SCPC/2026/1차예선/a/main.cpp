#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll Answer;

ll calc_remain(ll n, ll m, ll t) {
	return (n - t + t/m);
}

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

	int T, test_case;
	
	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{
		Answer = 0;

        ll N, M;
        cin >> N >> M;

		ll t = N;

		while (calc_remain(N, M, t) != 0) {
			t += calc_remain(N, M, t);
		}

        Answer = t+1;

		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;
}