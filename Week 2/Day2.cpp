Question 1 : Longest Substring Without repeating character
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set< char> seen;
        int left=0;
        int maxLen = 0;
        for(int right =0; right < s.length(); right++){
            while(seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }
        seen.insert(s[right]);
        maxLen =  max(maxLen, right-left +1);
        
        }
     return maxLen;
    }
};

Question 2 : Permutation in string

class Solution {
private:
    bool checkEqual( int a[26], int b[26]){
    for(int i =0; i<26; i++){
        if(a[i]!= b[i])
            return 0;
    }
        return 1;
    }
    public:
     bool checkInclusion(string s1, string s2) {
    int count1[26] = {0};
    for(int i=0; i < s1.size(); i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }
     int i=0;
     int windowSize = s1.length();
     int count2[26] ={0};
     while(i < windowSize && i< s2.length()){
        int index =s2[i] - 'a';
        count2[index]++;
        i++;
     }
    if(checkEqual(count1 , count2))
        return 1;
        while(i<s2.length()){
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;
             char oldChar = s2[i - windowSize];
             index =oldChar - 'a';
             count2[index]--;
             i++;

             if(checkEqual( count1, count2))
             return 1;
        }
        return 0;
    
    }
};

Question 3 : Find All Anagrams in string 
class Solution {
public:
    bool allZeros(vector<int>& counter) {
        for (int x : counter) {
            if (x != 0)
                return false;
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int k = p.size();

        vector<int> counter(26, 0);

        for (char ch : p) {
            counter[ch - 'a']++;
        }

        vector<int> result;
        int i = 0, j = 0;

        while (j < n) {
            counter[s[j] - 'a']--;

            if (j - i + 1 == k) {
                if (allZeros(counter)) {
                    result.push_back(i);
                }

                
                counter[s[i] - 'a']++;
                i++;
            }

            j++;
        }

        return result;
    }
};
