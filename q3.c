/////////////////////////Toggling each pairs of bits in a given number (100110010101110001 -> 011001101010001110)//////////////

#include<stdio.h>
int rev(int n);
void main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    puts("before reversing bits:");
    for(int i=31;i>=0;i--)
        printf("%d",(n>>i)&1);
    printf("\t=%d",n);
    puts("");
    int n1=rev(n);
    puts("after reversing bits:");
    for(int i=31;i>=0;i--)
        printf("%d",(n1>>i)&1);
    printf("\t=%d",n1);
}

int rev(int n)
{
    for(int i=0;i<32;i=i+2)
        {   
            int n1=(n>>i & 1),n2=(n>>(i+1) & 1);
            if(n1!=n2)
                {
                    
                    n^=1<<i | 1<<(i+1);
                }
        }

    return n;
    
}
