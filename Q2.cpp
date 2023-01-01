//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int arr[], int n) {
    vector<int> v;
    if(n == 1){
        v.push_back(-1);
        v.push_back(-1);
        return v;
    }
    int first , second;
    first = second = INT_MAX;
    for(int i = 0 ; i < n ; ++i){
        if(arr[i] < first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] < second && arr[i] != first){
            second = arr[i];
        }
    }
    if(second == INT_MAX){
        v.push_back(-1);
        v.push_back(-1);
        return v;
    }
    else{
        v.push_back(first);
        v.push_back(second);
        return v;
    }
    
}