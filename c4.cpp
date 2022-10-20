//#define MIN(x,y) (x)<(y)?x:y//按宏展开 
//#include <stdio.h>
//main(){
//	int i=10,j=15,k;
//	k=10*MIN(i,j);
//	printf("%d\n",k);
//	return 0;
//}
//#include<stdio.h>
//struct abc{
//	int a,b,c;
//};
//main(){
//	struct abc s[2]={{1,2,3
//	},{4,5,6}
//	};
//	int t;
//	t=s[0].a+s[1].b;
//	printf("%d\n",t);
//	return 0;
//} 
//#include<stdio.h>
//main(){
//	char k;int i;
//	for(i=1;i<3;i++){
//		scanf("%c",&k);
//		switch(k){
//			case '0':printf("another\n");
//			case '1':printf("number\n");
//		}
//	}
//} 
//#include<stdio.h>
//#include<string.h>
//main(){
////	char str[12]={'s','t','r','i','n','g'};
////	char *st="good!";
////	printf("%d\n",strlen(str));
// 	char s[]="\0hello",*p;
// 	p=s;
// 	printf("%c",*p);
//}
//#include<stdio.h>
//main(){
//	char s[]="123456789",*p=s;
//	int i=0;
//	while(*p){
//		if(i%2==0) *p='*';
//		p++;
//		i++;
//	}
//	printf("%s\n",s);
////}
//#include<stdio.h>
//#define n 5
//main(){
//	int a=3,b=2,c=1;
//	c-=++b;
//	b*=a+c;
//	{
//		int b=5,c=12;
//		c/=b*2;
//		a-=c;
//		printf("%d,%d,%d,",a,b,c);
//		a+=--c;
//	}
//	printf("%d,%d,%d%d\n",a,b,c,n );
//}
//#include<stdio.h>
//main(){
//	union{
//		long a;
//		int b;
//		char c;
//	}m;
//	printf("%d\n",sizeof(m));
//}
//#include<stdio.h>
//struct dent{
//	int n;
//	int *m;
//};
//int a=1,b=2,c=3;
//struct dent s[3]={{101,&a},{102,&b},{103,&c},
//
//};
//main(){
//	struct dent *p;
//	p=s;
//	printf("%d",*(++p)->m);
//}
//#include<stdio.h>
//union myun{
//	struct{
//		int x,y,z;
//	}u;
//	int k;
//}a;
//main(){
//	a.u.x=4;
//	a.u.y=5;
//	a.u.z=6;
//	a.k=0;
//	printf("%d\n",a.u.x);
//}
//#include<stdio.h>
//main(){
//	char a='A';
//	float b=1.0;
//	b++;
//	a++;
//	printf("%c\n",a);
//	printf("%f",b);
////} 
//#include<stdio.h>
//main(){
//	int x=1,y=2,z=3;
//	if(x>y)
//		if(y<z)printf("%d",++z);
//		else printf("%d",++y);
//	printf("%d",x++);
//}
//#include<stdio.h>
//main(){
//	int a=3,b=4,c=5,d=2;
//	if(a>b)
//	if(b>c) printf("%d",d+++1);
//		else printf("%d",++d+1);
//	printf("%d\n",d);
//}
//#include<stdio.h>
//main(){
//	int a=1,b=3,c=5,d=4,x;
//	if(a<b)
//	if(c<d) x=1;
//	else if(a<c)
//		 if(b<d) x=2;
//		 else x=3;
//		 else x=6;
//		 else x=7;
//	printf("x=%d",x);
//}
//#include<stdio.h>
//main(){
//	int a,b,c;
//	scanf("%d,%d,%d",&a,&b,&c);
//	if(a>b)
//	if(a>c)
//		printf("%d\n",a);
//	else
//		printf("%d\n",c);
//	else
//	if(b>c)
//		printf("%d\n",b);
//	else
//		printf("%d\n",c);
//}
//////////这题有点难 
//#include<stdio.h>
//main(){
//	int m[12],k;
//	int *p[3],sum=0;
//	for(k=0;k<12;k++){
//		m[k]=2*k;
//		if(k<3)
//			p[k]=m+2*k*k;
//		}
//	for(k=0;k<3;k++)
//		sum+=(*(p+k))[4-k];
//	printf("sum=%d\n",sum);
//	}
//#include<stdio.h>
//main(){
//	int s;
//	scanf("%d",&s);
//	while(s>0){
//		switch(s){
//			case 1:printf("%d",s+5);
//			case 2:printf("%d",s+4);break;
//			case 3:printf("%d",s+3);
//			default:printf("%d",s+1);break;
//		}
//		scanf("%d",&s);
//	}
//}
//#include<stdio.h>
//main(){
//	int i,j,k,a=3,b=2;
//	i=(--a==b++)?--a:++b;
//	j=a++;
//	k=b;
//	printf("%d,%d,%d",i,j,k);
//}
//#include<stdio.h>
//main(){
//	int x,y=2;
//	for(x=1;x<10;x++){
//		x+=2;
//		if(x>7)break;
//		if(x==6)continue;
//		y*=x;
//	}
//	printf("%d %d",x,y);
//}
//#include<stdio.h>
//main(){
//	int s,i;
////	while(1){
////		if(i>10) break;
////		s+=i;
////		i++;
////		
////	}
//	for(;i<=10;i++)s=s+i;
//	printf("%d",s);
//}
//#include<stdio.h>
//main(){
//	int a,b;
//	for(a=1,b=1;a<=100;a++){
//		if(b>=10) break;
//		if(b%3==1) {b+=3;continue;
//		}
//	}
//	printf("%d",a);
//}
//#include<stdio.h>
//main(){
//	int i,j;
//	for(i=0;i<10;i++){
//  		j=i*10+6;
//		if(j%3!=0) continue;
//			else printf("%d\n",j);
//// 	int i,j,s;
//// 	for(i=2;i<=1000;i++){
//// 		s=0;
//// 		for(j=1;j<i;j++)
//// 		if(i%j==0)s+=j;
//// 		if(s==i)printf("%d\n",i); 
//	 }
//	}
//#include<stdio.h>
//main(){
//	int n[3][3],i,j;
//	for(i=0;i<3;i++)
//	for(j=0;j<3;j++)
//		n[i][j]=i+j;
//	for(i=0;i<2;i++)
//	for(j=0;j<2;j++)
//		n[i+1][j+1]+=n[i][j];
//	printf("%d\n",n[i][j]);
//}
//#include<stdio.h>
//main(){
//	int a[6]={12,4,17,25,27,16},b[6]={27,13,4,25,23,16},i,j;
//	for(i=0;i<6;i++){
//		for(j=0;j<6;j++)
//		if(a[i]==b[j]) break;
//		if(j<6) printf("%d ",a[i]);		
//	}
//}
//#include<stdio.h>
//#define N 10
//main(){
//	int i;
//	float a,arr[N],sum=0.0;
//	printf("input 10 scores:\n");
//	for(i=0;i<N;i++){
//		scanf("%f",&arr[i]);
//		sum=sum<arr[i]?arr[i]:sum;
//	}
//	a=sum;
//	printf("%5.2f\n",a); 	
//}
// 
//#include<stdio.h>
//main(){
//	int *p1,*p2,p,a=5,b=8;
//	int s[2]={0,1},*p3=s;
//	p1=&a;p2=&b;
//	if(a<b){p=*p1;*p1=*p2;*p2=p;
//	}
//	
//	printf("%d,%d",*p1,*p2);
//	printf("%d,%d",a,b);
//}
//#include<stdio.h>
//main(){
//	int a[10]={1,2,3,4,5,6,7,8,9,10},*p=a;
//	printf("%d",p+5);
//} 
//#include<stdio.h>
//void swap(int *p,int *q){
//	int t;
//	t=*p;*p=*q;*q=t;
//}
//main(){
//	int a=3,b=5;
//	swap(&a,&b);
//	printf("%d%d",a,b);
//} 
//#include<stdio.h>
//main(){
//	int i,j,a[]={1,3,5,7,9,11,13,15},*p=a+5;
//	for(j=3;j;j--){
//		switch(j){
//			case 1:
//			case 2:printf("%d",*p++);break;
//			case 3:printf("%d",*(--p));
//		}
//	}
//}
//#include<stdio.h>
//void select(int max,int a[],int n){
//	int i;
//	max=a[0];
//	for(i=1;i<n;i++)
//		if(max<a[i]) max=a[i];
//}
//main(){
//	int i ,max=10,a[10]={10,20,30,40,50,60,70,80,90,100};
//	select(max,a,10);
//	printf("\nmax=%d",max);
//} 
//#include<stdio.h>
//#include<string.h>
//main(){
//	char a[]="china";
//	char *s="book!";
//	char *b;b={"BOOK!"};
//	printf("%s\n",b);
//	printf("%s",s);
//	printf("%d",sizeof(a));
//	printf("%d",strlen(a));
//}
//#include<stdio.h>
//main(){
//	char a[5]="ABC";
//	char b[]={'0','1','2','\0'};
//	printf("%c",b[2]);
//	printf("%c",a[1]);
//} 
//#include<stdio.h>
//#include<string.h>
//main(){
////	char p[20]={'E','F','G','H'},q[]="EFGH",r[]="EFGHI";
////	strcat(p,r);
////	printf("%s\n",p);
////	strcpy(p+strlen(q),q);
////	printf("%s\n",p);
////	printf("%d\n",strlen(p));
////char *p1="abcd",*p2="ABCD",str[50]="xyz";
////strcpy(str+2,strcat(p1+2,p2+1));
////printf("%s\n",str);    
//char s[2][40]={"china","english"};
//printf("%s",s[1]);
// 
//}
//#include<stdio.h>
//#include<string.h> 
//main(){
//	char s[80];
//	int i,j;
//	gets(s);
//	for(i=j=0;s[i]!='\0';i++)
//	if(s[i]!='c') s[j++]=s[i];
//	s[j]='\0'	;
//	puts(s);
//}
//#include<stdio.h>
//main(){
//	char s[60];
//	int n,i=0;
//	scanf("%s",s);
//	for(n=0;s[i];i++)
//	if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z') n++;
//	printf("%d",n);
//}
//#include<stdio.h>
//#include<string.h> 
//main(){
//	char s[][10]={"china","beijing"}, *p=s;
//	printf("%s",p+10);
//}
//#include<stdio.h>
//#include<string.h>
//struct A{int a;char b[10];double c;
//};
//void f(struct A t){
//	t.a=1002;
//	strcpy(t.b,"changrong");
//	t.c=1202.0;
//}
//main(){
//	struct A a={1001,"zhangda",1098.0
//	};
//	f(a);
//	printf("%d,%s,%6.1f\n",a.a,a.b,a.c);
//} 
#include<stdio.h>
main(){
//	char a=010,b=10;
	char c='\82';
//	int x=012;
	int x;
	float x1=1.8;
	int a=1,b=0;
	printf("%d, ",b=a+b);
	printf("%d",a=2*b);
	printf("%d\n",x=(x=100,x+=2,x++));
//	printf("%d,%o,%x\n",x,x,x);
	printf("%d",c); 
//	printf("%d\n",a&b<<2);
}
