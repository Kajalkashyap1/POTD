class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        vector<int> v;
        for(auto it=nums1.begin(); it!=nums1.end(); ++it)
        {
            for(auto j=nums2.begin(); j!=nums2.end(); ++j)
            {
                if((*it)==(*j))
                s.insert(*it);
            }
        }
        for(auto i: s)
        {
            v.push_back(i);
        }
        return v;
    }
};