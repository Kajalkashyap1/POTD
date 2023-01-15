// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long s=1,e=n,mid,temp;
        while(e>=s)
        {
            mid=(s+e)/2;
            if(isBadVersion(mid)==true)
            {
                temp=mid;
                e=mid-1;
            }
            else
            s=mid+1;
        }
        return temp;
    }
};