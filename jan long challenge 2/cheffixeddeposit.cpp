#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (T;T > 0;T--) {
        int n, x;
        int maximum = 0;
        int answer = 0;
        cin >> n >> x;
        int arr[n];
        for (int i = 0;i < n;i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n, greater<int>());


        for (int i = 0; i < n; i++) {
            maximum += myarr[i];
            if (maximum >= x) {
                answer = i + 1;
                break;
            }
        }

        if (maximum < x) {
            answer = -1;
        }
        cout << answer << endl;
    }
}


// 1 7 5 9
// 1 5 7 9 ----  25