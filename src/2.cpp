// by icelter, 2022-08-15
// [NOT ORIGINAL]

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *result = nullptr, *root = nullptr;
        int a, b, sum, carry = 0;

        while(!(l1 == nullptr && l2 == nullptr)) {
            a = (l1 == nullptr) ? 0 : l1->val;
            b = (l2 == nullptr) ? 0 : l2->val;
            sum = a+b+carry;

            if(result == nullptr) {
                result = root = new ListNode(sum % 10);           
            } else {
                root->next = new ListNode(sum % 10);
                root = root->next;
            }

            carry = sum / 10;

            if(l1 != nullptr) {
                l1 = l1->next;
            }

            if(l2 != nullptr) {
                l2 = l2->next;
            }
        }

        if(carry != 0) {
            root->next = new ListNode(carry);
        }

        return result;
    }
};
