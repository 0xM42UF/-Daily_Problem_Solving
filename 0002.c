//https://dimikoj.com/problems/2/
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
    {
        char n[101];
        scanf("%s",&n);
        if(n[i] % 4 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}
