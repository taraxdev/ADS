#include<stdio.h>
void main()
{
    int s1,s2,dum,i;
    printf("Size 1= ");
    scanf("%d",&s1);
    printf("Size 2= ");
    scanf("%d",&s2);
    
    int arr1[s1],arr2[s2];
    
    for(i=0;i<s1;i++)
    {
        printf("1->");
        scanf("%d",&arr1[i]);
    }
    
    for(i=0;i<s2;i++)
    {    
        printf("2->");
        scanf("%d",&arr2[i]);
    }
    
    i=0;
    int j=0,k=0,arr[s1+s2];
    
    while(i<s1+s2)
        {
            if(arr1[j]<arr2[k])
            {
                arr[i]=arr1[j];
                i++;
                j++;
            }
            else
            {
                arr[i]=arr2[k];
                k++;
                i++;
            }
        }
    for(i=0;i<s1+s2;i++)
    printf("%d ",arr[i]);
    
}