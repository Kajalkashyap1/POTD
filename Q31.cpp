class Solution {
public:
    int countone(int n)
    {
        int cnt=0;
        while(n>0)
        {
            int x=n%2;
            if(x==1)
                cnt++;
            n=n/2;

        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> v;
        int count=0;
        for(int i=0;i<=n;i++)
        {
            int x=countone(i);
            v.push_back(x);
        } 
        return v;
    }
};