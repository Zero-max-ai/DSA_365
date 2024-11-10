#include <iostream>

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
  public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
      if (!headA || !headB) {
        return nullptr;
      }

      ListNode* ptrA = headA;
      ListNode* ptrB = headB;
      while (ptrA != ptrB) {
        ptrA = ptrA ? ptrA->next : ptrB;
        ptrB = ptrB ? ptrB->next : ptrA;
      }

      return ptrA;
    }
};

int main() {
  return 0;
}
