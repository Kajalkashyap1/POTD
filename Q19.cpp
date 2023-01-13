class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count=0,i;
        
        sort(costs.begin(),costs.end());
        for(i=0;i<costs.size();++i)
        {
            if(coins==0)
            break;
            if(coins>=costs[i])
            {
                coins=coins-costs[i];
                count++;
            }
        }
        
        return count;
    }
};