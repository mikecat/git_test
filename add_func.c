/**
 * �����̑����Z�����܂��B
 * @param a ������鐔
 * @param b ������
 * @return a+b
 */
int add(int a,int b) {
	return a+b;
}

/**
 * �����̑����Z�̌��Z�����܂��B
 * @param a ������鐔
 * @param b ������
 * @param sum a+b
 * @return ���������Ȃ�^�A�Ԉ���Ă���Ȃ�U
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
