//leetcode 1910. Remove All Occurrences of a Substring

class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t pos = s.find(part);
        while(pos!=string::npos){
            s.replace(pos,part.size(),"");
            pos = s.find(part);
        }
        return s;
    }
};