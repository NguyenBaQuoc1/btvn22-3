#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num , i ;
    printf("Nhap num: \n");
    scanf("%d" , &num);

    for(i=1 ; i<=num ; i++){
        if (num%i==0){
        printf("\nUoc so la %d" , i);
        }
    
    }


    return 0;
}
