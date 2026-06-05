Question 1 : Valid Palindrome
class Solution {
public:
char lowert(int ch){
    char temp;
    if(ch>='a' && ch<='z'){
       return ch;
    }
    else{
        temp= ch-'A'+'a';
        return temp;
    }
    return ch;
}
    bool isPalindrome(string s) {
        int n=s.size();
        int st=0;
        int e=n-1;
        while(st<e){
            if(!isalnum(s[st])){
                st++;
                continue;
            }
            if(!isalnum(s[e])){
                e--;
                continue;
            }

            if(lowert(s[st])!=lowert(s[e])){
                return 0;
            }
                st++;
                e--;
            
        }
        return 1;
    }
};

Question 2 : Reverse String 
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n= s.size();
        int st=0;
        int e=n-1;
        while(st<e){
            swap(s[st++],s[e--]);
        }
    }
};

Question 3 : Longest common Prefix
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix.pop_back();
                if (prefix.empty()) return "";
            }
        }

        return prefix;
    }
};



















