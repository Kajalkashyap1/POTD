//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code End
//User function template for C++
class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	    int i=0;
	    while(S[i])
	    {
	        if(S[i]!='a'&&S[i]!='e'&&S[i]!='o'&&S[i]!='i'&&S[i]!='u')
	        cout<<S[i];
	        i++;
	        
	    }
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s, ch; 

	    getline(cin, s);  
   		
       
   		Solution ob;
   		cout << ob.removeVowels(s) << "\n";
   		
   	}

    return 0;
}