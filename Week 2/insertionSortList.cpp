/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
  ListNode *insertionSortList(ListNode *head) {
        if(head==NULL||head->next==NULL)
 	        return head;
        
        ListNode *sorted = NULL;
        ListNode *list = head;
        while(list)
        {
			ListNode *curr=list;
			list=list->next;

			//std::cout<<"curr->val="<<curr->val<<std::endl;
            if(sorted == NULL || sorted->val > curr->val) //first lookup
            {
                curr->next = sorted; //this indicates the end of sorted list
                sorted = curr;
            }
            else
            {
                // insert somewhere after the first of sorted
                ListNode *tmp = sorted;
                while(tmp)
                {
					ListNode *s=tmp;
					tmp=tmp->next;

                    if( s->next == NULL || s->next->val > curr->val)
                    {
                        s->next=curr;
                        curr->next=tmp;
                        break;
                    }
                }
            }
        }
        return sorted;
    }
};

