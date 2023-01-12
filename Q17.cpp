//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int> mpp;
        int i;
        for(i=0;i<n;i++)
        {
            mpp.insert(make_pair(a[i],0));
            mpp[a[i]]=mpp[a[i]]+1;
            for( auto it=mpp.begin();it!=mpp.end();++it)
            {
            if(it->second==k)
            return it->first;
            }
        }
        
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends