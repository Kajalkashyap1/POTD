class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> v;
        
        for(auto it=arr.begin();it!=arr.end();++it)
        {
            v.push_back(*it);
            if((*it)==0)
            v.push_back(0);
        }

        for(int i=0;i<arr.size();++i)
        arr[i]=v[i];
        
    }