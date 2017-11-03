struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};
ListNode* removeNthFromEnd(ListNode* head, int n) {
	if (head == NULL) return NULL;
	vector<ListNode*> addr;
	ListNode* p = head;
	while (p != NULL)
	{
		addr.push_back(p);
		p = p->next;
	}
	int rp = addr.size() - n;
	if (rp != 0)
	{
		addr[rp - 1]->next = addr[rp]->next;
	}
	else
		head = head->next;
	return head;
}