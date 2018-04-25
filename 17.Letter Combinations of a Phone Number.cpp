class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.empty()) return ans;
        string temp;
        char c[10][4] = { {},{},{ 'a','b','c' },{ 'd','e','f' },{ 'g','h','i' },{ 'j','k','l' },{ 'm','n','o' },{ 'p','q','r','s' },{ 't','u','v' },{ 'w','x','y','z' } };
        int i = 0, j = 0, ldigits = digits.size(), m = 0, jm = 3, t, lans;
        t = digits[i] - 48;
        if (t == 7 || t == 9) { jm = 4; }
        else { jm = 3; }
        for (; m < jm; m++) {
            temp = c[t][m];
            ans.push_back(temp);
        }
        i++;
        for (; i < ldigits; i++) {
            lans = ans.size();
            for (j = 0; j < lans; j++) {
                temp = ans[0];
                t = digits[i] - 48;
                if (t == 7 || t == 9) { jm = 4; }
                else { jm = 3; }
                for (m = 0; m < jm; m++) {
                    ans.push_back(temp + c[t][m]);
                }
                ans.erase(ans.begin());
            }
        }
        return ans;
    }
};