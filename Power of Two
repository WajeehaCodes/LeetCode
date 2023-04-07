//using hamming weight function
bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return (hamming(n) == 1);
    }
    int hamming(uint32_t n) {
        int count = 0;
        while(n) {
            n = n & (n-1);
            count++;
        }
        return count;
    }
    
//it can be more precised 
bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return ((n&(n-1))==0);
}
