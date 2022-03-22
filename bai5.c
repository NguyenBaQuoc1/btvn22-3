#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num , result = 0 ;
    

    for(num>=0 ; num<100; ){
        printf("Nhap num\n");
        scanf("%d" , &num);
        printf("num la%d\n", num);
        result++;
    }printf("so lan nhap la %d" , result);
    return 0;
}
