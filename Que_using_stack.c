#include<stdio.h>
//define MAX[20]
int main()
{
    int stk1[20],stk2[20];
    int top1=-1,top2=-1;
    int i;

    //insertion
    for(i=0;i<5;i++)
    {
         printf("\n Enter elements of queue: ");
         scanf("%d",&stk1[i]);
         top1++;
    }
    //deletion
    while(top1>=0)
    {
        stk2[top2+1]=stk1[top1];
        top2++;
        top1--;
    }
    top2--;

    while(top2>=0)
    {
        stk1[top1+1]=stk2[top2];
        top2--;
        top1++;
    }

    int n=top2+5;
    printf("\n %d is deleted",stk1[top1]);
    top1--;
}
