//#include <stdio.h>
//main(){
//	int a=3,b,*p;//定义，这里的*是指针说明符 
//	p=&a;//赋值 
//	b=*p+2;//引用，*是取内容运算符 
//	printf("%d,%d",a,b);
//	return 0;
//} 
//int a=3,*p=&a; == int a=3,*p;p=&a;两种相等 p=&a == *p=a 
//#include<stdio.h>
//main(){
//	int i,*j,**k;//**k二级指针，指针的指针（地址） 
//	i=12;j=&i;k=&j;
//	printf("%d,%d,%d",i,*j,**k);
//	return 0;
//}
//#include<stdio.h>
//void fun(int *x,int *y){//第一种 
//	*x+=*y;
//	*y+=*x;
//}       //地址传递是双向的  有返回 
//void prtv(int *z)//第二种 
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
//	fun(a,b,&c,&d);//a,b是值传递，c d是地址传递 
//	printf("%d,%d\n",c,d);
//	return 0;
//}
//#include <stdio.h>
//main(){
//	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
//	int (*p)[4];//数组指针
//	int sum=0,i,j;
//	p=a;
//	for(i=0;i<3;i++)
//	for(j=0;j<2;j++)
//	sum+=*(*(p+i)+j);//相当于sum+=p[i][j] 
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
	strcpy(s,t);//stringcopy==>字符串复制函数，后者完全替换前者 
	printf("%s,%s\n",s,t);
	strcat(s,t);//stringcontant==>字符串连接函数，后者连接前者并改变前者的值s 
	printf("%s,%s\n",s,t); 
	//strcmp==>stringcompare字符串比较函数，前者大于后为1，前者<后者为-1，相等为0 
	return 0;
}


 
