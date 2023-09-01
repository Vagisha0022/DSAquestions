class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        string s1="";
        string s2 ="";
        int count=0;
        for(int i=0; i <flips.size(); i++){
            s1+= '0';
            s2+= '0';
        }
        for(int i=0; i <flips.size(); i++){
            s1[flips[i]-1] ='1';
            s2[i]= '1';
            if(s1 == s2){
              count++;
            }
        }
        return count;
        
    }
};
