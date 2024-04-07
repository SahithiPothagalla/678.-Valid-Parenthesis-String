class Solution {
public:
    bool checkValidString(string s) {
        int cnt=0, spent=0, left=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;  
            }else if(s[i]==')'){
                if(cnt) cnt--; 
                else if(spent){
                    spent--; left++; 
                }else if(left){
                    left--;  
                }else return false;  
            }else{
                if(cnt){
                    cnt--; spent++; 
                }else left++;  
            }
        }
        return cnt==0;
    }
};
