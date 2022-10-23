//#include<stdio.h>
//main(){
//	float x=123.4567;
//	printf("%f",(int)(x*100+0.5)/100.0);
//	return 0;
//}
//main(){
////	char a,b;
//	int a=12,b=15;
//	printf("a=%d%%,b=%d%%\n",a,b);   
//	printf("%s","100%%");
////	scanf("%c,%c",&a,&b);
////	printf("%c%c",a,b);
//	return 0;
//}
//#include<stdio.h>
//main(){////ÅÅÐò 
//	int i,j,k;
//	for(i=1;i<=4;i++){
//		for(j=1;j<=4;j++){
//			for(k=1;k<=4;k++){
//				if(i!=j&&i!=k&&j!=k){
//					printf("%d%d%d\n",i,j,k);
//				}
//			}
//		}
//	}
//	return 0;
//}
#include<stdio.h>
#include<math.h>
main(){
	int i,n,p,q,flagp,flagq;
	
	printf("please input Ò»¸öÅ¼Êýn:");
	scanf("%d",&n);
	if(n<4||n%2!=0) {
     goto stop;
	}
	
	p=1;
	do{
		p++;q=n-p;
		flagp=1;
		for(i=2;i<=(int)sqrt(p);i++){
			if(p%i==0){
				flagp=0;break;
			}
		}
		flagq=1;
		for(i=2;i<=(int)sqrt(q);i++){
			if(q%i==0){
				flagq=0;break;
			}
		}
	}while(flagq*flagp==0);
	printf("%d=%d+%d",n,p,q);
	stop:
 	printf("\n");
}


