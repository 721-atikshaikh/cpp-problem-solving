//{ Driver Code Starts
#include <bits/stdc++.h> 

using namespace std;

// } Driver Code Ends
class Solution {
public:
    int sumOfDigits(int N) {
        int sum = 0;
        while (N > 0) {
            sum += N % 10;
            N = N / 10;
        }
        return sum;
    }

    int addDigits(int N) {
        // 38 --> 3+8 = 11
        // 11 --> 1+1 = 2
        // 2 --> return 2

        //int sum1 = sumOfDigits(N); //11
        //int sum2 = sumOfDigits(sum1); //2
        //sum=11

        while (N >= 10) {
            N = sumOfDigits(N);
        }
        return N;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.addDigits(N) << endl;
    }
    return 0;
}
// } Driver Code Ends