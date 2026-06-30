class Solution {
public:
    double myPow(double x, int n) {
        double result = 1;
        for(int i = 0; i < abs(n); i++){
            result = result * x;
        }
        if(n < - 0){
            return 1/result;
        }
        return result;
    }
};
