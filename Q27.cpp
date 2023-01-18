class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int,int> m;
        for(int i:bills)
        {
            if(i==5)
            m[5]++;
            else if(i==10)
            {
                if(m[5]>0)
                {
                    m[5]--;
                    m[10]++;
                }
                else
                return false;
            }
            else
            {
                if(m[5]>=3 && m[10]<=0)
                m[5]=m[5]-3;
                else if(m[5]>0 && m[10]>0)
                {
                    m[5]--;
                    m[10]--;
                }
                else
                return false;
            }
    
        }
        return true;
    }
};