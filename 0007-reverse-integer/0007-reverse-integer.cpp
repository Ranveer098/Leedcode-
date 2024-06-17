#include <limits.h>

class Solution {
public:
    int reverse(int x) {
        long long rev = 0;  
        int n = x;  

        while (n) {  
            rev = rev * 10 + (n % 10);  
            n = n / 10; 
        }

        
        if (rev > INT_MAX || rev < INT_MIN) {
            return 0;  
        }

       
        return static_cast<int>(rev);
    }
};
