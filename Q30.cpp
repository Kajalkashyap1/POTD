class Solution {
public:
    bool isPalindrome(string s) {
        //string s2="";
        for(int i=0;i<s.length();++i)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]=s[i]+32;
                
            }
            else if((s[i]>=97 && s[i]<=122)||(s[i]>=48 && s[i]<=57))
                continue;
            else
            {
                s.erase(i,1);
                i--;
            }
        }
        for(int i=0,j=s.length()-1;i<=j;i++,j--)
        {
            if(s[i]!=s[j])
            return false;
        }
        return true;
    }
};