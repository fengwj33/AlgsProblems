float sqr(float i,int q)
{
	float r = (i + (float)q/i)/2;
	if (r - i > -0.00000001 && r - i < 0.00000001)
		return r;
	else
		return sqr(r, q);
}
int mySqrt(int x) {
	return x==0?0:(int)sqr(x,x);
}