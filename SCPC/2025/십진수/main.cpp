/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

using ll = long long;
using llv = vector<ll>;

int Answer;
ll divider = 1000000007;

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
		
        string N;
        cin >> N;

        int NN = N.size();

        llv dp3(NN+1, 1);

        for (int i = 1; i <= NN; i++) {
            dp3[i] = dp3[i-1]*3;
            dp3[i] %= divider;
        }

        ll result = (dp3[NN] - 1 + divider) % divider;

        bool b = false;

        for (int i = 0; i < NN; i++) {
            int num = N[i] - '0';

            if (num == 1) result = (result - dp3[NN-i-1] + divider) % divider;
            else if (num == 0) result = (result- 2*dp3[NN-i-1] + divider) % divider;
            else if (num >= 3) {
                b = true;
                break;
            }
        }

        Answer = result;
        if (b) result = (result - 1 + divider) % divider;

		// Print the answer to standard output(screen).
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}