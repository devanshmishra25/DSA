class Solution {
public:
    string reverseWords(string s) {
        // Use stringstream to split the input string into words
        stringstream ss(s);
        string word;
        vector<string> words;
        
        // Extract words from the stringstream
        while (ss >> word) {
            words.push_back(word);
        }
        
        // Reverse the order of words
        reverse(words.begin(), words.end());
        
        // Concatenate the reversed words with a single space in between
        string result;
        for (const string& w : words) {
            if (!result.empty()) {
                result += " ";
            }
            result += w;
        }
        
        return result;
    }
};