class Solution {
public:
    int mySqrt(int x) {
        if (x==0)
            return 0;
        if (x==1 || x==2)
            return 1;
        
        long int sqrt=1,start=1,end=x,mid=0;
       
        for(;;){
            mid = start + (end - start)/2;

            if(mid*mid == x){
                sqrt = mid;
                break;
            }else if(mid*mid > x){
                if((mid-1)*(mid-1) < x){
                    sqrt = mid-1;
                    break;
                }
                end = mid-1;
            }else{
                if((mid+1)*(mid+1)>x){
                    sqrt = mid;
                    break;
                }
                start = mid+1;
            }
        }
        return sqrt;
    }
};
