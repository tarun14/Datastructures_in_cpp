class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0;i<(s.size()/2);i++){
            char temp = s[i];
            //cout<<"size:"<<s.size()<<" i:"<<i<<" ith element:"<<s[i]<<" n-ith:"<<s[s.size()-1-i]<<endl;
            s[i] = s[s.size()-1-i];
            s[s.size()-1-i] = temp;
        }
    }
};
