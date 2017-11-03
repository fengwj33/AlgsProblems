struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
ListNode* swapPairs(ListNode* head) {
	if (head == NULL) return NULL;
	ListNode* A, *B,*F;
	F = NULL;
	A = head;
	while (true)
	{
		B = A->next;
		if (B == NULL) break;
		if (A == head)
			head = B;
		A->next = B->next;
		B->next = A;
		if (F != NULL)
			F->next = B;
		F = A;
		A = F->next;
		if (A == NULL)
			break;
	}
	return head;
}