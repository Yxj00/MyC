//#include <stdio.h>
//main(){
//	int a=3,b,*p;//���壬�����*��ָ��˵���� 
//	p=&a;//��ֵ 
//	b=*p+2;//���ã�*��ȡ��������� 
//	printf("%d,%d",a,b);
//	return 0;
//} 
//int a=3,*p=&a; == int a=3,*p;p=&a;������� p=&a == *p=a 
//#include<stdio.h>
//main(){
//	int i,*j,**k;//**k����ָ�룬ָ���ָ�루��ַ�� 
//	i=12;j=&i;k=&j;
//	printf("%d,%d,%d",i,*j,**k);
//	return 0;
//}
//#include<stdio.h>
//void fun(int *x,int *y){//��һ�� 
//	*x+=*y;
//	*y+=*x;
//}       //��ַ������˫���  �з��� 
//void prtv(int *z)//�ڶ��� 
//{
//	printf("%d\n",++*z);
// } 
//main(){
//	int a=3,b=5,c=25;
//	fun(&a,&b);
//	prtv(&c);
//	printf("%d,%d\n",a,b);
//	return 0;
//}
//#include <stdio.h>
//void fun(int x,int y,int *z,int *v){
//	*z=x+y;
//	*v=x-y;
//}
//main(){
//	int a=30,b=50,c,d;
//	fun(a,b,&c,&d);//a,b��ֵ���ݣ�c d�ǵ�ַ���� 
//	printf("%d,%d\n",c,d);
//	return 0;
//}
//#include <stdio.h>
//main(){
//	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
//	int (*p)[4];//����ָ��
//	int sum=0,i,j;
//	p=a;
//	for(i=0;i<3;i++)
//	for(j=0;j<2;j++)
//	sum+=*(*(p+i)+j);//�൱��sum+=p[i][j] 
//	printf("%d\n",sum); 
//	return 0;
//}
//#include <stdio.h>
//main(){
//	char a[]="ABCDEFGH";
//	char b[]="aBCdefGh";
//	char *p,*q;
//	int k;
//	p=a;q=b;
//	for(k=0;k<=7;k++)
//	if(*(p+k)==*(q+k))
//	printf("%c",*(p+k));
//	printf("\n");
//	return 0;
//} 
#include <stdio.h>
#include <string.h>
main(){
	char s[20]="ABC";
	char t[20]="DE"; 
	strcpy(s,t);//stringcopy==>�ַ������ƺ�����������ȫ�滻ǰ�� 
	printf("%s,%s\n",s,t);
	strcat(s,t);//stringcontant==>�ַ������Ӻ�������������ǰ�߲��ı�ǰ�ߵ�ֵs 
	printf("%s,%s\n",s,t); 
	//strcmp==>stringcompare�ַ����ȽϺ�����ǰ�ߴ��ں�Ϊ1��ǰ��<����Ϊ-1�����Ϊ0 
	return 0;
}


 
