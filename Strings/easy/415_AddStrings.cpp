class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carrier=0;

        string res = "";

        while(i>=0 || j>=0 || carrier){
            long sum=0;

            if(i>=0){sum += (num1[i] - '0');i--;}
            if(j>=0){sum += (num2[j] - '0');j--;}
            sum += carrier;

            carrier = sum/10;
            sum = sum%10;

            res = res + to_string(sum);
        }

        reverse(res.begin(),res.end());
        return res;
    }
};
