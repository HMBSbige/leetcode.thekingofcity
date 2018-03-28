class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return ""; 
        int i = 0, j = 0, l = strs.size();
        string ans = ""; char c;
        vector<int> strsL;
        for (; i < l; i++) {
            strsL.push_back(strs[i].size());
        }
        i = 0;
        while (1) {
            if (j < strsL[0]) {
                c = strs[0][j];
            }
            else {
                return ans;
            }
            i++;
            for (; i < l; i++) {
                if (j < strsL[i]) {
                    if (c != strs[i][j]) {
                        return ans;
                    }
                }
                else {
                    return ans;
                }
            }
            ans.push_back(c);
            j++;
            i=0;
        }
    }
};
//Runtime: 8 ms