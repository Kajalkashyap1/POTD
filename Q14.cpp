//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverse( string temp)
    {
         int start=0,end=temp.length()-1;
                while(start<=end)
                {
                    swap(temp[start++],temp[end--]);
                }
                return temp;
        
    }
    string reverseWords(string s) 
    { 
        // code here 
        int i;
        string temp="",ans="";
        for(i=s.length()-1;i>=0;i--)
        {
            if(i==0)
            {
                temp+=s[i];
                if(ans!="")
                ans=ans+'.'+reverse(temp);
                else
                ans=ans+reverse(temp);
            }
            if(s[i]=='.')
            {
                if(ans!="")
                ans=ans+'.'+reverse(temp);
                else
                ans=ans+reverse(temp);
                temp="";
            }
            else
            temp=temp+s[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends