/**
 * 整数の足し算をします。
 * @param a 足される数
 * @param b 足す数
 * @return a+b
 */
int add(int a,int b) {
	return a+b;
}

/**
 * 整数の足し算の検算をします。
 * @param a 足される数
 * @param b 足す数
 * @param sum a+b
 * @return 正しそうなら真、間違っているなら偽
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
