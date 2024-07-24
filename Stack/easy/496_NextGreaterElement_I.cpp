class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        vector<int>ans(nums1.size(),-1);
        stack<int>st;
        unordered_map<int, int>umap;

        for(int i=0;i<nums2.size();i++){
            while(!st.empty() && nums2[i]>st.top()){
                umap[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }

        for(int i=0; i<nums1.size(); i++){
            if(umap.find(nums1[i]) != umap.end()){
                ans[i] = umap[nums1[i]];
            }
        }

        return ans;
    }
};
