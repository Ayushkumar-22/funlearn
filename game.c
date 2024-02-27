#include<stdio.h>

int main(){
    int s;
    char a,b,c;
    printf("enter the character which you want to see 2nd previous character- \n");
    scanf("%c",&a);
    printf("\n%c",a-2);
    printf("\npress 1 for continue or press 2 for quit- \n");
    scanf("%d",&s);
    if(s==1)
    {
        for(;s<2;)
        {
            scanf("%c",&b);
            if(b=='b')
            {
                printf("B\n");
            }
            else if(b=='a')
            {
                printf("A\n");
            }
            else
            {
                printf("%c\n",b-2);
            }
            scanf("%d",&s);
        }
        printf("try again");
    }
    else
    {
        printf("quit visit again thank you");
    }
    return 0;
}