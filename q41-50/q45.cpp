#include <iostream>

class Solution {
  public:
    int getDecimalValue(ListNode* head) {
      int value = 0;
      ListNode* temp = head;
      while (temp != nullptr) {
        value = (value << 1) | temp->val;
        temp = temp->next;
      }

      return value;
    }
};

int main() {}
