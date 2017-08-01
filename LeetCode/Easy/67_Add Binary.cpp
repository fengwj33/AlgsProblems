string addBinary(string a, string b) {
	string* l, *s;
	l = &a;s = &b;
	if (a.length() < b.length())
		swap(l, s);
	int pl = l->length(),ps=s->length(),c=0;
	for (;pl >= 0;pl--,ps--)
	{
		ps >= 0 ? (*l)[pl] = (*l)[pl] + (*s)[ps] - '0' + c: (*l)[pl] = (*l)[pl]+c;
		if ((*l)[pl] == '2'|| (*l)[pl] == '3')
		{
			(*l)[pl]-=2;
			c = 1;
		}
		else
		{
			c = 0;
			if (ps < 0) break;
		}
			
	}
	return (c != 0)?(string)((char)(c + '0') + *l): *l;
}