/**
 * Definition for singly-linked list.
 * struct ListNode {
 *	 int val;
 *	 ListNode *next;
 *	 ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode *ln,*lnRet,*lnTmp,*lnHead;
		lnRet = new ListNode(l1->val+l2->val);
		lnHead = lnRet;
		bool carry=false;
		char tmp;
		while(l1!=NULL && l2!=NULL){
			tmp = l1->val+l2->val;
			if(carry){
				tmp+=1;
			}
			carry=false;
			if(tmp>=10){
				carry=true;
				tmp-=10;
			}else{
				carry=false;
			}
			lnTmp = new ListNode(tmp);
			lnRet->next = lnTmp;
			lnRet = lnRet->next;
			l1=l1->next;
			l2=l2->next;
		}
		if(l1!=NULL){
			while(l1!=NULL){
				tmp = l1->val;
				if(carry){
					tmp+=1;
				}
				carry=false;
				if(tmp>=10){
					carry=true;
					tmp-=10;
				}else{
					carry=false;
				}
				lnTmp = new ListNode(tmp);
				lnRet->next = lnTmp;
				lnRet = lnRet->next;
				l1=l1->next;
			}
		}else{
			while(l2!=NULL){
				tmp = l2->val;
				if(carry){
					tmp+=1;
				}
				carry=false;
				if(tmp>=10){
					carry=true;
					tmp-=10;
				}else{
					carry=false;
				}
				lnTmp = new ListNode(tmp);
				lnRet->next = lnTmp;
				lnRet = lnRet->next;
				l2=l2->next;
			}
		}
		if(carry){
			lnTmp = new ListNode(1);
			lnRet->next = lnTmp;
		}
		return lnHead->next;
	}
};
//Runtime: 61 ms