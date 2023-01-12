class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int i,j,flag=1,count=0;
        for(i=0;i<words.size();++i)
        {
            flag=1;
            if(words[i].size()<=s.size())
            {
                for(j=0;j<words[i].size();++j)
                {
                    if(words[i][j]!=s[j])
                    flag=0;
                }
                if(flag!=0)
                count++;
            }
            
        }
        return count;
    }
};