/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode* s;
        ListNode* p;
        if(A->next==NULL)
        return A;
       
        while(B>0)
        { s=A;
            p=s->next;
            while(s->next->next!=NULL)
            {
                s=s->next;
                p=s->next;
                
            }
            p->next=A;
            s->next=NULL;
            A=p;
            B--;
        
        }
    return A;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
