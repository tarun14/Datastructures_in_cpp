class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(int i=0;i<stones.length();i++){
            char c = stones[i];
            int found = jewels.find(c);
            if(found != string::npos){
                count++;
            }
        }

        return count;
    }
};
