//The below Commented Code is for the LeetCode
/*class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x!=0){
            if(rev > INT_MAX /10 || rev < INT_MIN / 10){
                return 0;
            }
            rev = (rev*10)+(x%10);
            x = x / 10;
        }
        return rev;
        
    }
};*/

//Complete Code of Reverse Integer

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10) {
                return 0;
            }
            rev = (rev * 10) + (x % 10);
            x /= 10;
        }
        return rev;
    }
};

int main() {
    Solution sol;
    int x = 123;
    cout << "Original: " << x << endl;
    cout << "Reversed: " << sol.reverse(x) << endl;

    x = -321;
    cout << "Original: " << x << endl;
    cout << "Reversed: " << sol.reverse(x) << endl;

    x = 1534236469;
    cout << "Original: " << x << endl;
    cout << "Reversed: " << sol.reverse(x) << endl;

    return 0;
}
