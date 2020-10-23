class Solution {
public:
    
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 0) {
            return "";
        }
        string result = "";
        sort(strs.begin(), strs.end());// sort the array
        string first = strs[0]; // first word
        string last = strs[n-1];// last word
        int limit = min(first.length(), last.length());
        for(int i = 0; i < limit; i++) {// find out the longest common prefix between first and last word
            if(first[i] == last[i]) {
                result += first[i];
            }    
            else {
                break;
            }
        }
        return result; 
    }
};