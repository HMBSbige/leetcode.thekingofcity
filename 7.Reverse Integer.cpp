class Solution {
public:
    int reverse(int x) {
        stringstream stream;
        string temp;
        int ans;

        if (x < 0) {
            stream << -x;
        }
        else {
            stream << x;
        }

        temp = stream.str();
        //reverse(temp.begin(), temp.end());
        int len = temp.length();
        for (int i = 0; i<len/2; i++)
        {
            //前后交换
            char temp_ = temp[i];
            temp[i] = temp[len - i - 1];
            temp[len - i - 1] = temp_;
        }

        stream.str("");
        stream << temp;
        int64_t check;
        int64_t temp__ = 2147483648;
        stream >> check;
        if ((check >= temp__)) {
            return 0;
        }


        //stream >> ans;
        ans = check;
        if (x < 0) {
            return -ans;
        }
        else {
            return ans;
        }
    }
};
//Runtime: 33 ms