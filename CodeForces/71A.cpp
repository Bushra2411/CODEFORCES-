/*#include <stdio.h>
#include <string.h>
int main()
{
    int x,i,len;
    char str[100];
    scanf("%d",&x);
    while(--x){
        scanf("%s",&str);
        len=strlen(str);
        if(len<=10)
            printf("%s\n",str);

        else
            printf("%c%d%c\n",str[0],len-2,str[len-1]);
        }

    return 0;
}*/

#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,len;
    char s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        len=strlen(s);
        if(len>10)
            printf("%c%d%c",s[0],len-2,s[len-1]);
        else
            printf("%s",s);
        printf("\n");
    }
    return 0;
}
