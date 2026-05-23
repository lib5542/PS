#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    int a_arr[n];

    for (int i = 0; i < n; i++) {
        cin >> a_arr[i];
    }

    sort(a_arr, a_arr + n);

    int max_distance = -1;
    for (int i = 0; i < n-1; i++) {
        if ((a_arr[i+1] - a_arr[i]) > max_distance) {
            max_distance = a_arr[i+1] - a_arr[i];
        }
    }

    cout << fixed;
    cout.precision(10);

    cout << max<double>(max_distance/2.0, max(a_arr[0], l - a_arr[n-1])) << endl;

    return 0;
}