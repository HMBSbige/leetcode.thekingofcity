class Solution {
public:
    string longestPalindrome(string s) {
	string ans = s.substr(0, 1);
	int i, j, l = s.length(), tmp1, tmp2;
	if (l == 1) return s;
	for (i = 0; i < l; i++) {
		//if ((i + 1) < l && s.at(i) == s.at(i + 1)) {
		//}
		//else {
		//}
		for (j = 1; j < (l / 2) + 1; j++) {
			tmp1 = i - j + 1;
			tmp2 = i + j;
			if (tmp1 >= 0 && tmp2 < l) {
				if (s.at(tmp1) == s.at(tmp2)) {
					if ((2 * j) > ans.length()) {
						ans = s.substr(tmp1, 2 * j);
					}
				}
				else {
					break;
				}
			}
			else {
				break;
			}
		}
		for (j = 1; j < (l / 2) + 1; j++) {
			tmp1 = i - j;
			tmp2 = i + j;
			if (tmp1 >= 0 && tmp2 < l) {
				if (s.at(tmp1) == s.at(tmp2)) {
					if ((2 * j + 1) > ans.length()) {
						ans = s.substr(tmp1, 2 * j + 1);
					}
				}
				else {
					break;
				}
			}
			else {
				break;
			}
		}
	}
	return ans;
    }
};
//Runtime: 22 ms