class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> mymap;
        set<char>::iterator it;
	    int i = 0, j = 0, l = s.length(), Maxlength = 0;
        while (i < l && j < l) {
            it = mymap.find(s.at(j));
            if (it != mymap.end()) {
                mymap.erase(s.at(i++));
                //Maxlength_ = j - i;
            }
            else {
                mymap.insert(s.at(j++));
                Maxlength = max(Maxlength, j - i);
            }
        }
        return Maxlength;
    }
};
//Runtime: 73 ms