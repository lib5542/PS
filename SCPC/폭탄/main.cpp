/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

ll Answer;

int main(int argc, char** argv)
{
	int T, test_case;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using cin function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */	

	// freopen("input.txt", "r", stdin);

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 0;
		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
		   Implement your algorithm here.
		   The answer to the case will be stored in variable Answer.
		 */
		/////////////////////////////////////////////////////////////////////////////////////////////
		
        int N, L;
        cin >> N >> L;

        vector<ll> pos(N);
        for (auto& x : pos) cin >> x;

        ll case1 = 0;
        ll case2 = 0;
        ll case3 = 0;
        ll expensive = -1;

        for (int i = 0; i < N; i++) {
            case1 += pos[i]*2;
            if (i == 0) {
                case2 += L;
            } else {
                case2 += (L-pos[i])*2;
            }
            case3 += min(pos[i], L-pos[i])*2;
            expensive = max(expensive, min(pos[i], L-pos[i])*2);
        }
        case3 = case3 - expensive + L;

        Answer = min(min(case1, case2), case3);

		// Print the answer to standard output(screen).
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}