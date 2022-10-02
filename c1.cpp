//#include <stdio.h>
//main() {
//  int i;
//  for(i=0;i<3;i++){
//  	switch(i){
//  		case 1: printf("%d",i);
//  		case 2: printf("%d",i);
//  		default: printf("%d",i);
//	  }
//  } 
//return 0;
//}
//#include <stdio.h>
//main(){
//	int a=0,i;
//	for(i=1;i<5;i++){
//		switch(i){
//			case 0:
//			case 3:a+=2;
//			case 1:
//			case 2:a+=3;
//			default: a+=5;
//		}
//	}
//	printf("%c",a);
//	return 0;
//} 
//#include <stdio.h>
//main(){
//	int k=5,n=0;
//	while(k>0){
//		switch(k){
//			default:break;
//			case 1:n+=k;
//			case 2:
//			case 3:n+=k;
//		}
//		k--;
//	}
//	printf("%d\n",n);
//	return 0;
//}
//#include <stdio.h>
//main(){
//	int i;
//	for(i=0;i<3;i++){
//		switch(i){
//			case 1:printf("%d",i);
//			case 2:printf("%d",i); break;
//			default:printf("%d",i);
//			
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//main(){
//	int i=0,j=4;
//	while(i<j){
//		i++;
//		if(i%3!=0)continue;
//		j--;
//	}
//	printf("%d,%d",i,j);
//	return 0;
//}
//#include <stdio.h>
//main(){
//	int i;
//	for(i=1;i<10;i+=2){
//		if(i%3==0)printf("*");
//		else continue;
//		printf("#");
//	}
//	return 0;
//}
//#include <stdio.h>
//main() {
//	int i=0,s=0;
//	do{
//		if(i%2){i++;continue;
//		}
//		i++;s+=i;
//	}while(i<7);
//	printf("%d",s);
//	return 0;
//}
//#include <stdio.h>
//main(){
//	int a,b;
//	for(a=1,b=1;a<=100;a++){
//		if(b>=10)break;
//		if(b%3==1){b+=3;continue;
//		}
//	}
//	printf("%d",a);
//	return 0;
//}
//#include <stdio.h>
//main(){
//	int i;
//	for(i=1;i<=5;i++){
//		if(i%2)printf("*");
//		else continue;
//		printf("#");
//	}
//	return 0;
//}
//#include <stdio.h>
//main(){
//	int i,n=0;
//	for(i=2;i<5;i++){
//		do{
//			if(i%3)continue;n++;
//			
//		}while(!i);
//		n++;
//	}
//	printf("%d",n);
//	return 0;
//}
//#include <stdio.h>
//main(){
//	int i;
//	for(i=1;i<6;i++){
//		if(i%2){printf("#");continue;
//		}
//		printf("*");
//	}
//	return 0;
//	
//}
//#include <stdio.h>
//main(){
//	int i,j;
//	for(i=1;i<=2;i++){
//		for(j=1;j<=3;j++){
//			printf("*");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//main(){
//	int i,j,x=0;
//	for(i=0;i<2;i++){
//		x++;//1
//		for(j=0;j<3;j++){ //2
//			if(j%2)continue;//1
//			x++;//2
//		}
//		x++;//3
//	}
//	printf("x=%d",x);
//	return 0;
//}
//#include <stdio.h>
//
//int fun(int x,int y){//x,y是形参，负责接收 
//	int z;
//	z=x+y;
//	return z;
//}
//main(){
//	int a=3,b=5,s;
//	s=fun(a,b);//a,b是实参，负责传递 
//	printf("%d",s);
//	return 0;
//} 
//#include <stdio.h>
//int fun(int x){
//	int y;
//	if(x>1) y=fun(x-1)+2;
//	else y=2;
//	return y;
//}
//main(){
//	printf("%d\n",fun(3));
//	return 0;
//}
//#include <stdio.h>
//void fun(int x,int y){//void是无返回值型 
//	x+=y,y+=x;
//}
//main(){
//	int a=3,b=5;
//	fun(a,b);
//	printf("%d,%d",a,b);
//	return 0;
//} 
//#include <stdio.h>
//void f(int v,int w){//无返回值类型 
//	int t;
//	t=v,v=w,w=t;
//}
//main(){
//	int x=10,y=20,z=30;
//	if(x>y)f(x,y);
//	else if(y>z)f(y,z);
//	else f(x,z);
//	printf("%d,%d,%d",x,y,z);
//	return 0;
//} 
//#include <stdio.h>
//main(){
//	int a[3][3]={1,2,3},i;
//	for(i=0;i<3;i++){
//		printf("%3d\n",a[i][i]);//3个字节 
//	}
//	return 0;
//} 
#include<stdio.h>
main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int i,j,s=0;
	for(i=0;i<3;i++)
	  for(j=i+1;j<3;j++)
	   s+=a[i][j];
	   printf("%d",s);
	return 0;
} 
