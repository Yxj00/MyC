//#include <stdio.h>
//int a=3;
//main(){
//	int s=0;
//	{int a=5;//同名内部优先 
//	s+=a++;//s=s+5
//	}
//	s+=a++;//s=s+3
//	printf("%d\n",s);
//	return 0;
//} 
//#include <stdio.h>
//int fun(int n){
//	static int s=2;//静态变量累计使用 
//	s+=n;
//	return s;
//}
//main(){
//	int x=2;
//	printf("%d\n",fun(x));
//	printf("%d\n",fun(x));
//	return 0;
//}
#include<stdio.h>
main(){
	int a=3,b=2,c=1;
	c-=++b;
	b*=a+c;
	{int b=5,c=12;
	c/=b*2;
	a-=c;
	printf("%d,%d,%d\n",a,b,c);
	a+=--c;
	}
	printf("%d,%d,%d\n",a,b,c);//a只有一个 
	return 0;
} 
