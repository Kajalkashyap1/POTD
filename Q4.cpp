//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int ans=0,i=0;
    if(n==0)
    return 5;
    else
    while(n>0)
    {
        int r=n%10;
        if(r!=0)
        ans=ans+r*pow(10,i);
        else
        ans=ans+5*pow(10,i);
        n=n/10;
        i++;