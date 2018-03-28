class Solution {
public:
    int charToNum(char c) {
        switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        }
    }

    int romanToInt(string s) {
        int i = 0, j = s.length(), ans = 0;
        int v[20];
        for (; i < j; i++) {
            v[i] = charToNum(s[i]);
        }
        i = 0;
        while (i < j) {
            if (i + 1 < j && (v[i] < v[i + 1])) {
                ans = ans + v[i + 1] - v[i];
                i += 2;
            }
            else {
                ans = ans + v[i];
                i++;
            }
        }
        return ans;
    }
};
//Runtime: 130 ms