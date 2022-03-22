#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a , b = 0 ,c ;
    printf("Nhap so dong cua thap\n");
    scanf("%d" , &a ); // số dòng của tháp ví dụ = 4

    if(a>=2){
        while(b<a){
            printf("\n");
            b++; // b = 0++ , 1++ , 2++
            c=1; 
        while(c<=b){ // b = 0++ và c = 1
            printf("*");
            c++; // c hiện tại = 2
            }
        }
    }

    return 0;
}
