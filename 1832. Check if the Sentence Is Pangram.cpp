class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size() < 26)
            return false;
        bool arr[26] = {0};
        for(int i=0; i<sentence.size(); i++){
            arr[sentence[i]-'a'] = 1;
        }
        for(int i=0; i<26; i++){
            if(arr[i] == 0)
                return false;
        } 
        return true;
    }
};
