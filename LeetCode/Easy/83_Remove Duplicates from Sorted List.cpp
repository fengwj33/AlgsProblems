ListNode* deleteDuplicates(ListNode* head) {
	ListNode *p, *cu;
	if (head == NULL) return NULL;
	int l = head->val;
	cu = p = head;
	p = p->next;
	while (p != NULL)
	{
		if (l != p->val)
		{
			l = p->val;
			cu->next = p;
			cu = cu->next;
		}
		p = p->next;
	}
	cu->next = NULL;
	return head;
}