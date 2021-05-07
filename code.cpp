class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int>A;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            A.push_back(temp->val);
            temp=temp->next;
        }
        sort(A.begin(),A.end());
        ListNode *headd=NULL;
        ListNode *tempp;
        for(int i=0;i<A.size();i++)
        {
            if(headd==NULL)
            {
                headd=new ListNode(A[i]);
                tempp=headd;
            }
            else
            {
                tempp->next=new ListNode(A[i]);
                tempp=tempp->next;
            }
            
        }
        return headd;
    }
};
