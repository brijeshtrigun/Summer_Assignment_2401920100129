question 1 : 
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == m) return i;
        }

        return -1;
    }
};

Question 2 
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }

        return i == s.size();
    }
};


Question 3 
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        return doubled.substr(1, doubled.size() - 2).find(s) != string::npos;
    }
};
