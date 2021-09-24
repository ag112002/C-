#include<stdio.h>
int main()
{   int n1,n2,k=0,i,j,x;
     printf("Enter the size of first and second array respectively\n");
    scanf("%d %d",&n1,&n2);
    int a[n1],b[n2],c[k];
    printf("Enter the first array elements\n");
    for(i=0 ; i<n1 ; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter the second array elements\n");
    for(i=0 ; i<n2 ; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0 ; i<n1 ; i++)
    {
        c[i]=a[i];
    
    }
    k=n1;
    for(j=0 ; j<n2 ; j++)
    {  
        c[k]=b[j];
        k++;
    
    }
    for(i=0 ; i<k ; i++)
    {
        printf("%d",c[i]);
    }
    
return 0;

}