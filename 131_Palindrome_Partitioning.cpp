class Solution {
private:
    bool isPalindrome(string s, int start, int end) {
        while (start <= end) {
            if (s[start++] != s[end--])
                return false;
        }
        return true;
    }
    
    void backTrack(int index, string s, vector<string>& holder, vector<vector<string>>& ans) {
        if (index == s.length()) {
            ans.push_back(holder);
        } else {
            for (int i = index; i < s.length(); i++) {
                if (isPalindrome(s, index, i)) {
                    holder.push_back(s.substr(index, i - index + 1));
                    backTrack(i + 1, s, holder, ans);
                    holder.pop_back();
                }
            }
        }
    }
    
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> answer;
        if (s.empty())
            return answer;
        vector<string> holder;
        backTrack(0, s, holder, answer);
        return answer;
    }
};
