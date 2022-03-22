#include<stdio.h>
int main(){
    int N,a,b,f,i;
    a=0;
    b=1;
    printf("nhap so nguyen duong N :");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        if(i<=1){
            f=i;
        }else {
            f=a+b;
            a=b;
            b=f;}
            if(f<N){
    printf("\t%d",f);}
    }
}