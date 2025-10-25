class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        //reverse the string
        reverse(s.begin(), s.end());

string word;
        //take each word and reverse them
        stringstream ss(s);
        while(ss>>word){
            reverse(word.begin(), word.end());
            ans=ans+" "+word;
        }
        return ans.substr(1);
    }
};