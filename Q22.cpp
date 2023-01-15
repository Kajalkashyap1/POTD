class Solution {
public:
    int mySqrt(int x) {
        long long s=0,e=x,mid,temp;
        if(x==1)
        return 1;
        while(s<=e)
        {
            mid=(s+e)/2;
            if((mid*mid)==x)
            {
            temp=mid;
            break;
            }
            else if((mid*mid)<x)
            {
                temp=mid;
                s=mid+1;
            }
            else
            {
                e=mid-1;
                
            }
    
        }
        return temp;
    }
};