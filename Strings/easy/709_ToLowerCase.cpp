class Solution {
public:
    string toLowerCase(string s) {
        int i=0;
        for(i=0;i<s.length();i++){
            char temp = s[i];

            if((int(temp)>=0x41)&&(int(temp)<=0x5a)){
                s[i] = char(int(temp)-0x41+0x61);
            }
        }
        return s;
    }
};
