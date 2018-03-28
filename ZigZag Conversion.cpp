class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> temp;
        string ans;
        if (numRows == 1) return s;
        int i, j, k = 2 * numRows - 2, l = s.length() / k, t;
        for (i = 0; i < numRows; i++) {
            temp.push_back("");
        }
        for (i = 0; i < l; i++) {
            for (j = 0, t = 0; j < numRows; j++, t++) {
                temp[j].push_back(s.at(i*k + t));
            }
            j -= 2;
            for (; j > 0; j--, t++) {
                temp.at(j).push_back(s.at(i * k + t));
            }
        }
        l = s.size() - l * k;
        if (l >= numRows) {
            for (j = 0, t = 0; t < numRows; j++, t++) {
                temp[j].push_back(s.at(i*k + t));
            }
            j -= 2;
            for (; t < l; j--, t++) {
                temp.at(j).push_back(s.at(i * k + t));
            }
        }
        else {
            for (j = 0, t = 0; t < l; j++, t++) {
                temp[j].push_back(s.at(i*k + t));
            }
        }
        for (i = 0; i < numRows; i++) {
            ans.append(temp[i]);
        }
        return ans;
    }
};
//Runtime: 36 ms