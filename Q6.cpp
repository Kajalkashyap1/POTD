//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int i;
        vector<int> v;
        set<int> s1;
        for(i=0;i<n;i++)
        s1.insert(arr1[i]);
        for(i=0;i<m;i++)
        s1.insert(arr2[i]);
        for(auto it=s1.begin(); it!=s1.end(); ++it)
        v.emplace_back(*it);
        return v;
        
    }
};

//{ Driver Code Starts.
