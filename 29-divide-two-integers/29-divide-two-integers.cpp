class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN and divisor==-1) return INT_MAX;
        int q = dividend/divisor;
        if(q>INT_MAX) return INT_MAX;
        else if(q<INT_MIN) return INT_MIN;
        return q;
    }
};