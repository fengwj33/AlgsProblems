ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode *it1=l1, *it2=l2,*rval=NULL,*temp,*rhead=NULL;
	int t, c = 0;
	while (it1 != NULL)
	{
		if(it2!=NULL)
			t = it1->val+it2->val+c;
		else
			t = it1->val + c;
		if (t >= 10)
		{
			c = 1;
			t -= 10;
		}
		else
			c = 0;
		temp = (ListNode*)malloc(sizeof(ListNode));
		temp->val = t;
		temp->next = NULL;
		if (rval != NULL)
		{
			rval->next = temp;
			rval = temp;
		}	
		else
		{
			rval = temp;
			rhead = temp;
		}
		it1 = it1->next;
		if(it2!=NULL)
			it2 = it2->next;
		if (it1 == NULL)
			swap(it2, it1);
	}
	if (c != 0)
	{
		temp = (ListNode*)malloc(sizeof(ListNode));
		temp->val = c;
		temp->next = NULL;
		rval->next = temp;
	}
	return rhead;
}