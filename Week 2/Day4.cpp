Question 1 : Reverse words in a string III
class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        
        for (int end = 0; end <= s.size(); end++) {
            if (end == s.size() || s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }
        
        return s;
    }
};

Question 2 : Decode String

class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> strStack;

        string curr = "";
        int num = 0;

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }
            else if (c == '[') {
                countStack.push(num);
                strStack.push(curr);

                num = 0;
                curr = "";
            }
            else if (c == ']') {
                int repeat = countStack.top();
                countStack.pop();

                string temp = curr;
                curr = strStack.top();
                strStack.pop();

                while (repeat--) {
                    curr += temp;
                }
            }
            else {
                curr += c;
            }
        }

        return curr;
    }
};

Question 3 : Generate Paranthesis 

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr;

        backtrack(ans, curr, 0, 0, n);

        return ans;
    }

private:
    void backtrack(vector<string>& ans, string& curr,
                   int open, int close, int n) {
        if (curr.size() == 2 * n) {
            ans.push_back(curr);
            return;
        }

        if (open < n) {
            curr.push_back('(');
            backtrack(ans, curr, open + 1, close, n);
            curr.pop_back();
        }

        if (close < open) {
            curr.push_back(')');
            backtrack(ans, curr, open, close + 1, n);
            curr.pop_back();
        }
    }
};
