//#include<stdio.h>
//main(){
//	int a=2,b=5;
//	printf("a=%%d,b=%%d",a,b);
//} 
//#include<stdio.h>
//main(){
// int a=6,b=4,c=2;
// int y=10;
// while(y--)
// printf("y=%d\n",y);
//// printf("%d",!(a-b)+c-1&&b+c/2);
// 
//} 
//#include<stdio.h>
//main(){
//	int i,j,m=1;
//	for(i=1;i<3;i++){
//		for(j=3;j>0;j--)
//		{if(i*j>3) break;
//		m*=i*j;
//		}
//	}
//	printf("m=%d",m);
//} 
//#include<stdio.h>
//#include<string.h>
//main(){
//	char ch;
//	while((ch=getchar())=='e')
//	printf("*"); 
//}
//#include<stdio.h>
//main(){
//	char b,c;
//	int i;
//	b='a';
//	c='A';
//	for(i=0;i<6;i++)
//	if(i%2) putchar(i+b);
//	else putchar(i+c);
//	printf("\n");
//}
//#include<stdio.h>
//main(){
//	int a[11],i,j,t;
//	printf("请通过键盘输入10个整数：\n");
//	for(i=1;i<11;i++)
//	scanf("%d",&a[i]);
//	printf("\n");
//	for(j=1;j<=9;j++)
//	for(i=1;i<=j;i++)
//	if(a[i]>a[i+1]){
//		t=a[i];a[i]=a[i+1];a[i+1]=t;
//	}
//	printf("排序后的整数位：");
//	for(i=1;i<11;i++)
//	printf("%d",a[i]);
//}
//#include<stdio.h>
//main(){
//	int a[10],i;
//	printf("请输入10个整数：");
//	for(i=0;i<10;i++)
//	scanf("%d",&a[i]);
//	for(i=1;i<=10;i++)
//	{
//		if(i%5==0)
//		printf("%5d\n",a[i-1]);
//		else
//		printf("%5d,",a[i-1]);
//	 } 
//}
//#include<stdio.h>
//main(){
//	int a=5,*b,**c;
//	c=&b;b=&a;
//	printf("%d",**c);
//}
//#include<stdio.h>
//main(){
//	char s[]="rsnuv";
//	printf("%c\n",*s+2);
//}
//#include<stdio.h>
//main(){
//	char s[]="012xy\08s34f4w2";
//	int i ,n=0;
//	for(i=0;s[i]!=0;i++)
//	if(s[i]>='0'&&s[i]<='9') n++;
//	printf("%d\n",n);
//} 

//#include<stdio.h>
//#include<string.h>
//main(){
////	char *s="\ta\017bc";
////	printf("%d",sizeof(s));
//int i ,t=1;
//for(i=2;i<=5;i++){
//	printf("\t%d",t);
//	t*=i;
//}
//printf(",%d\n",t);
//}
//#include<stdio.h>
//main(){
//struct stu{
//	int num;
//	char name[10];
//	float score;
//}s[5]={{1,"lili",98.5},{9,"xiaohua",66}},*p=s+1;
//
//	printf("%s",p->name);
//} 
//#include<stdio.h>
//#include<string.h>
//void fun(char *w,int m){
//	char s,*p1,*p2;
//	p1=w;p2=w+m-1;
//	while(p1<p2){
//		s=*p1++;*p1=*p2--;*p2=s;
//	}
//}
//main(){
//	char a[]="ABCDEFG";
//	fun(a,strlen(a));
//	puts(a);
//}
//#include<stdio.h>
//#include<windows.h>
//main(){
//	for(float y=1.5f;y>-1.5f;y-=0.1f){
//		for(float x=-1.5f;x<1.5f;x+=.05f){
//			float a= x*x+y*y-1;
//			putchar(a*a*a-x*x*y*y*y<0.0f?'x':' ');
//		}
//		Sleep(100);
//		putchar('\n');
//		
//	}
//	printf("                      韩炳昕永远爱贾乐");
//	getchar();
//	
//	return 0;
//} 
//#include<stdio.h>
//swap(int *p1,int *p2){
//	int *p;
//	p=p1;p1=p2;p2=p;
//}
//main(){
//	int a=5,b=7;
//	int *pt1,*pt2;
//	pt1=&a,pt2=&b;
//	swap(pt1,pt2);
//	printf("data3=%d\tdata=%d\n",*pt1,*pt2);
//} 
//#include<stdio.h>
//#include<string.h>
//main(){
//	char ch[]="abc\01d5";
//	printf("%d",strlen(ch));  
//} 
//#include<stdio.h>
//int f(char s[]){
//	int i,j;
//	i=0;j=0;
//	while(s[j]!='\0') j++;
//	return (j-i);
//}
//main(){
//	printf("%d\n",f("ABCDEF"));
//} 
//#include<stdio.h>
//main(){
//typedef struct data{
//	int a;
//	struct{
//		int a,b;
//	}*c;
//}DA; 
//
//	printf("%d",sizeof(DA));
//}
//#include<stdio.h>
//main(){
//	char c=getchar();
//	while(c!='*'){
//		c=getchar();
//		switch(c){
//			case 'a':
//			case 'b':putchar(c);
//			case 'c':
//			default:break;
//		}
//	}
//	putchar(c);
//} 
//#include<stdio.h>
//main(){
//	char p[]="ABCD";
////	printf("%c",*p=*p+1);
////	printf("%c",p++);
//}
//#include<stdio.h>
//struct data{
//	int a;
//	char s[10];
//}da[3],*p=da;
//main(){
//	int a=-13;
////	printf("%x",a);
////	printf("%c\n",da->s[1]='a');
//	printf("\111");
//}
//#include<stdio.h>
//#include<string.h>
//void f(char *p){
//	char ch,*q=p+strlen(p)-1;
//	while(p<q){
//		ch=*p;*p=*q;*q=ch;
//		p++,q--; 	
//	}
//} 
//main(){
//	char s[10];
////	scanf("%s",s);
//gets(s);
//	f(s);
//	puts(s);
//}
//#include<stdio.h>
//struct data{
//	int a,b;
//	struct data *p;
//}s[2]={1,2,s+1,3,4,s};
//main(){
//	printf("%2d%2d",s[0].p->a,s[1].p->b);
//}
//#include<stdio.h>
//#include<string.h>
//main(){
//	char s[20]="abcd",c[20]="efgh",x[]="1234";//取后面的 
//	strcpy(s+1,strcat(c+3,x+2));
//	puts(s);
//} 
//#include<stdio.h>
//#include<string.h> 
//void f(char s[]){//s形参数组本质是指针,vc下指针是4 
//	printf("%2d%2d",sizeof(s),strlen(s));//4,6 
//}
//main(){
//	char c[]="\0189\\\b!";
//	f(c);
//}
//#include<stdio.h>
//main(){
//	char *s="12345";
//	printf("%c",++(*s));
//} 
//#include<stdio.h>
//#include<math.h>
//main(){
//	double a,x0,x1;
//	scanf("%lf",&a);
//	x0=a;
//	x1=(x0+a/x0)/2;
//	while(fabs(x0-x1)>1e-6){
//		x0=x1;
//		x1=(x0+a/x0)/2;
//	}
//	printf("%f\n",x1);
//} 
//#include<stdio.h>
//main(){
//	int a,b,t;
//	for(a=3,b=0;!a==b;a--,b++)
//	if(a>b){t=a;a=b;b=t;
//	}
//	printf("%d,%d\n",a,b);
//}
//#include<stdio.h>
//#include<string.h>
//main(){
//	char A[]={"I am a student"};
//	printf("%d",strlen(A));
//}
//#include<stdio.h>
//main(){
////	printf("%x,%x",10,12);
////	printf("ABCD\tEFG\n");
//	int x,a=234,b=32767,c=1;
//	float d=24.56;
//	printf("%d,%f\n",a,d);
//	printf("(%d,%f)",a,d);
//	printf(" %d",b+c);
//} 
//#include<stdio.h>
//main(){
//	
//	printf("'%X'",10);
//} 
//#include<stdio.h>
//main()
//{
//	int i,j,s;
//	for(i=2;i<=1000;i++){
//		s=0;
//		for(j=1;j<i;j++)
//		if(i%j==0)s+=j;
//		if(s==i)printf("%d\n",i);
//	}
// }
//#include<stdio.h>
//int fun(int *x,int *y){
//	int t;
//	t=*x;*x=*y;*y=t;
//}
//main(){
//	int a=3,b=5;
//	fun(&a,&b);
//	printf("%d,%d",a,b);
//} 
//#include<stdio.h>
//#include<string.h>
//main(){
//	char *s="\ta\017\bc";
//	printf("%d",strlen(s));
//}
//#include<stdio.h>
//main(){
//	int i=153;
//	int j,k;
//	j=i/10%10;
//	k=i%100/10;
//	printf("%d%d",j,k);
//} 
//#include<stdio.h>
//#include<string.h>
//main(){
//	char str[20]="How do you do";
//	printf("%d",strlen(str));
//}
//#include<stdio.h>
//main(){
//	int i,j,k;
//	for(i=1;i<=4;i++){
//	for(j=1;j<=4-i;j++)
//		printf(" ");
//		for(k=1;k<=2*i-1;k++)
//			printf("*");
//			printf("\n");
//	}
//}
//#include<stdio.h>
//main(){
//	int i,j,n;
//	char ch='A';
//	scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n-i+1;j++){
//			printf("%c",ch);
//			ch+=1;
//		}
//		printf("\n");
//	}
//} 
//#include<stdio.h>
//#include<string.h>
//main(){
//	
//	char st[6];
//
//	gets(st);
//	printf("%s",st);
//}
//#include<stdio.h>
//int x,y,z;
//int f1(int p){
//	return ++p;
//}
//int f2(int *p){
//	return *(p++);
//}
//int f3(int *p){
//	return ++(*p);
//}
//main(){
//	int a[3]={1,3,5};
//	x=f1(a[0]);
//	z=f3(a);
//	printf("%d",a[0]);
//	y=f2(a);
//	printf("%d%d%d",x,y,z);
//}
//#include<stdio.h>
//int f(int a[],int n){
//	if(n>1)return (a[0]+f(&a[1],n-1));
//	else return a[0];
//}
//main(){
//	int a[3]={1,2,3},s;
//	s=f(&a[0],2);
//	printf("s=%d",s);
//	//printf("%d",a[0]);
//}
//#include<stdio.h>
//#define f(a,b,c) a*c+b
//main(){
//	int x=3,y=2,z=1;
//	printf("%d,%d",f(x,y,z),f(y,z,f(x,y,z)));
//}
#include<stdio.h> 
main(){//主函数 
	int a,b,s;
	a=123;
	b=456;
	s=a+b;
	float e=10.3;
	printf("s=%d\n",s); 
	printf("s=%d\n",s);
	printf("e=%e",e);
}
