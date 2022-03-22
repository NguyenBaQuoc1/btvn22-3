#include <stdio.h>

int main(int argc, char const *argv[])
{
    char kitu;
    while(1){
        printf("Ban muon nhap la:\n");
        fflush(stdin);
        scanf("%c" , &kitu);
        if(kitu == ' '){
            break;
        }
        if(kitu>='a' && kitu<='z'|| kitu>='A' && kitu<='Z' ){
            printf("Day la chu cai\n");
        }else if(kitu >= 48 && kitu <= 57){
            printf("day la chu so\n");
        }else printf("day la ki tu dac biet\n");               
    }printf("Khong hop le");
    return 0;
}