class Solution {
public:
    int count(string s)
    {
        int c=1,i;
        for(i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            c++;
        }
        return c;
    }
    int mostWordsFound(vector<string>& sentences) {
        int ans;
        ans=count(sentences[0]);
        for(int i=1;i<sentences.size();i++)
        {
            ans=max(ans,count(sentences[i]));
        }
        return ans; 
    }
};