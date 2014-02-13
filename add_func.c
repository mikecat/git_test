/**
 * ®”‚Ì‘«‚µZ‚ğ‚µ‚Ü‚·B
 * @param a ‘«‚³‚ê‚é”
 * @param b ‘«‚·”
 * @return a+b
 */
int add(int a,int b) {
	return a+b;
}

/**
 * ®”‚Ì‘«‚µZ‚ÌŒŸZ‚ğ‚µ‚Ü‚·B
 * @param a ‘«‚³‚ê‚é”
 * @param b ‘«‚·”
 * @param sum a+b
 * @return ³‚µ‚»‚¤‚È‚ç^AŠÔˆá‚Á‚Ä‚¢‚é‚È‚ç‹U
 */
int add_check(int a,int b,int sum) {
	if(a+b!=sum || sum-a!=b || sum-b!=a)return 0;
	if(b==0 && a!=sum)return 0;
	if(a==0 && b!=sum)return 0;
	if(b>0 && a>=sum)return 0;
	if(b<0 && a<=sum)return 0;
	if(a>0 && b>=sum)return 0;
	if(a<0 && b<=sum)return 0;
	return 1;
}
