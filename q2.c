#include<stdio.h>
#include<sys/types.h>
#include<dirent.h>

void main()
{
    DIR *d;
    struct dirent *p;
    char s[20];
    printf("enter directory name\n");
    scanf("%s",s);
    d=opendir(s);
    if(d==0)
        {
            printf("directory not present");
            return;
        }
    while(p=readdir(d))
        {
            if(p->d_name[0]!='.')
            printf("%s\t",p->d_name);
        }
}