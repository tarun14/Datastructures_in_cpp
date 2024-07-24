class Solution {
public:
    bool isVowel(char c)
    {
        switch(c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
              return true;
            default:
              return false;
        };
    }
    bool halvesAreAlike(string s) {
        int vowelCount1=0,vowelCount2=0;

        for(int i=0;i<s.length()/2;i++){
            if(isVowel(s[i])){
                vowelCount1++;
            }
        }
        for(int i=s.length()/2;i<s.length();i++){
            if(isVowel(s[i])){
                vowelCount2++;
            }
        }

        if(vowelCount1 == vowelCount2){
            return true;
        }else{
            return false;
        }
    }
};
