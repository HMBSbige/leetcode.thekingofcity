class Solution {
public:
    bool isPalindrome(int x) {
        if (x == INT_MIN) return false;
        if (x < 0) return false;
        stringstream ss;
        ss << x;
        string s = ss.str();
        string s_ = s;
        int i=0,j = s.length(),k=j/2;
        reverse(s.begin(), s.end());
        if (s == s_) {
            return true;
        }
        else {
            return false;
        }
    }
};
//Runtime: 328 ms