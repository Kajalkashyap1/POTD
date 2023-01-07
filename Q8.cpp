//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
    // Your code goes here
    int i,count=1;
    set<int> st;
    for(i=0;i<N-1;i++)
    {
        st.insert(A[i]); 
    }
    for (auto it=st.begin(); it!=st.end(); ++it)
    {
        if(*it==count)
        count++;
        else
        return count;
    }
    return count;
}