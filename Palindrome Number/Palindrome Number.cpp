/*Given an integer x, return true if x is a 
palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1*/

#include<vector>
#include<iostream>
using namespace std;

class Solution{
public:
    bool isPalindrome(int x){
        vector<int> digits;
        if(x<0) return false;
        else if(x==0) return true;

        do{
            digits.emplace_back(x%10);
        }while(x/=10);

        int size = digits.size();
        for(int i=0; i<size/2; i++){
            if(digits[i] != digits[size-1-i]) return false;
        }
        return true;
    }

    bool isPalindrome2(int x){
        if(x<0) return false;
        if(x==0) return true;
        
        int reversed = 0;
        int temp = x;
        while(temp!=0){
            reversed = reversed*10 + temp%10;
            temp/=10;
        }
        if (reversed == x) return true;
        
        return false;
    }
};

int main(){
    Solution sol;
    int num = 12321;
    bool ans = sol.isPalindrome2(num);
    cout << num << " is " << (ans?"a palindrome":"not a plaindrome") << endl;
    ;
    cout << num;
    return 0;
}