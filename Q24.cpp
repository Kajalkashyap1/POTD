class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans=letters[0];
        for(auto it=letters.begin();it!=letters.end();++it)
        {
            if((*it)>target)
            {
                ans=(*it);
                break;
            }
        }
        return ans;
    }
};