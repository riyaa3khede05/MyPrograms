#include<stdio.h>
#define MAX 20
int main()
{
    int Queue[MAX];
    int f=0,r=-1;
    int ch;
    do
    {
        printf("\nEnter your choice: \n1.Enqueue\n2.Dequeue\n3.Display\n4.Quit\n");
        scanf("%d",&ch);
        switch(ch)
        {
     case 1:
         {
         if(r==MAX-1)
         {
             printf("\nQueue is full");
         }
         else
         {
        r++;
        printf("\nEnter the elements to be inserted: ");
        scanf("%d",&Queue[r]);
         }

         }
         break;

     case 2:
        printf("\nDequeued element: %d", Queue[f]);
        f++;
        break;

     case 3:
         printf("\nThe elements in the queue are: ");
        for(int i=f;i<=r;i++)
        {
            printf("\n%d",Queue[i]);
        }
        break;
        }
    }
    while(ch!=4);

     printf("\nEXITING!!!");

     return 0;


}


