#include<stdio.h>
void main()
{
    int A=0,B=0,no_result=0,total_vote,i,choice;
    printf("How many vote want to count:");
    scanf("%d",&total_vote);
    for(i=1;i<=total_vote;i++)
      {
    printf("enter 1 to vote for A\n");
    printf("enter 2 to vote for B\n");
    printf("enter 3 to vote for none\n");
    scanf("%d",&choice);
    if(choice==1)
        A++;
    else if(choice==2)
        B++;
    else if(choice==3)
        no_result++;
    else
        printf("invalid vote\n");
      }
      printf("\t\t Result of the vote\n");
      printf("A got %d vote \n",A);
      printf("B got %d vote \n",B);
    printf("neutral vote:%d \n",no_result);
    if (A>B && A>no_result)
        printf("»»»A got the maximum votes«««\n");
        else if(B>A && B>no_result)
        printf("»»»B got the maximum votes«««\n");
        else if(no_result>A &&no_result>B)
        printf("neutral vote");
    else
        printf("THE VOTE RESULT IS A TIE");

}