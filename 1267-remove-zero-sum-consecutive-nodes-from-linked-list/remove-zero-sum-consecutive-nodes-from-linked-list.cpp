/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,ListNode*> umap;
        int sum=0;
        ListNode* curr=head;
        ListNode* prevNode=new ListNode(0,head);
        umap[0]=prevNode;
        while(curr!=NULL){
            sum=curr->val+sum;
            if(umap.find(sum)!=umap.end()){
                int prev=sum;
                ListNode* node=umap[sum]->next;
                while(node!=curr){
                    prev+=node->val;
                    umap.erase(prev);
                    node=node->next;
                }
                umap[sum]->next=curr->next;
            }
            else{
                umap[sum]=curr;
            }
            curr=curr->next;
        }
        return prevNode->next;
    }
};