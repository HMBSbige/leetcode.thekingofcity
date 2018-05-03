class Solution {
public:
    string intToRoman(int num) {
        char * s[4][10]={{"","I","II","III","IV","V","VI","VII","VIII","IX"},
                         {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
                         {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
                         {"","M","MM","MMM"}};
        string ans = "";
        ans.append(s[3][num/1000%10]);
        ans.append(s[2][num/100%10]);
        ans.append(s[1][num/10%10]);
        ans.append(s[0][num%10]);
        return ans;
    }
};
//Runtime: 117 ms