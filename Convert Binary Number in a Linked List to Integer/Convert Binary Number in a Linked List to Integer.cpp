/*Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.

The most significant bit is at the head of the linked list.



Example 1:


Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10
Example 2:

Input: head = [0]
Output: 0


Constraints:

The Linked List is not empty.
Number of nodes will not exceed 30.
Each node's value is either 0 or 1.*/

#include <iostream>
#include <vector>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{
public:
    int getDecimalValue(ListNode *head){
        int ans = 0;
        vector<int> digits;
        
        while(head->next!=nullptr){
            digits.emplace_back(head->val);
            head = head->next;
        }

        int size = digits.size();
        for(int i=0; i<size; i++){
            ans += digits[size-1-i]*pow(2,i);
        }
        return ans;
    }
};

int main(){
    Solution sol;

    return 0;
}