ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	ListNode* head=NULL;
	ListNode* p = NULL;
	ListNode* t;
	while (l1 != NULL && l2 != NULL)
	{
		if (l1->val < l2->val)
		{
			if (head == NULL)
			{
				head = l1;
				p = l1;
				l1 = l1->next;
			}
			else
			{
				p->next = l1;
				p = l1;
				l1 = l1->next;
			}
		}
		else
		{
			if (head == NULL)
			{
				head = l2;
				p = l2;
				l2 = l2->next;
			}
			else
			{
				p->next = l2;
				p = l2;
				l2 = l2->next;
			}
		}
	}
	if (l1 == NULL && l2 == NULL)
	{
		if(p!=NULL)
			p->next = NULL;
	}
	else
	{
		if(p!=NULL)
			p->next = (l1 == NULL ? l2 : l1);
		else
			head = (l1 == NULL ? l2 : l1);
	}	
	return head;
}