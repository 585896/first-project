#include<math.h>
#include<iostream>
int main()
{	
	int totaldays,a,b,c;
	scanf("%d",&totaldays);
	a=totaldays%23;
	b=totaldays%28;
	c=totaldays%33;
	if(a<=11)
		printf("��������������ʢ�ڣ����鹤���˶���\n");
	else
		printf("���������Ƚϵ��ԣ��������Ϣ��\n");
	if(b<=14)
		printf("���������Ƚϸ��ǣ�������ѧϰ��\n");
	else
		printf("���������Ƚϵ��ԣ���������������ַ��ɣ�\n");
	if(c<=16)
		printf("��Ŀǰ���������ڻƽ�ʱ�ڣ��������ȥѧϰ��\n");
	else
	printf("���������Ƚϵ��ԣ���������ɷ��ɣ�\n");
	system("pause");
}