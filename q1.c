////////q1: find the immediate smallest of a digit (65438 -> 65384 , 321->312)//////////////


#include<stdio.h>
int lowest(int n);
void main()
{
int n;    
printf("enter a number\n");
scanf("%d",&n);
int k=lowest(n);
printf("%d",k);
}

int lowest(int n)
{
    int l=0,n1=n;
    while(n!=0)
    {
        n=n/10;
        l++;
    }
    int a[l];
    for(int i=l-1;i>=0;n1=n1/10,i--)
        a[i]=n1%10;
    int i=l-1,j;    
    while(i>0)
        {
            int t;
            if(a[i]<a[i-1])
                {
                   t=a[i];
                    a[i]=a[i-1];
                    a[i-1]=t;
                
                    for(i;i<l-1;i++)
                        for(int j=1+1;j<=l-1;j++)
                            if(a[i]<a[j])
                                {
                                t=a[j];
                                a[j]=a[i];
                                a[i]=t;
                                }     
                    break;
                }  
        i--;        
        }
   
    n1=0;
    for(i=0;i<l;i++)
        n1=10*n1+a[i];
    return n1;
}
