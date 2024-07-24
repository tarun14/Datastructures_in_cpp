class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(),strs.end());

        string first = strs[0];
        string last = strs[strs.size()-1];

        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i])
                return ans;
            else
                ans = ans + first[i];
        }

        return ans;
    }
};
