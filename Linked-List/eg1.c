#include<stdio.h>
#include<stdlib.h>

typedef struct ListNode{
int data;
struct ListNode *next;
}ListNode;

ListNode *head;

void print(ListNode *head)
{
printf("It takes O(n) times\n");
printf("Content of Linked List\n");
for(ListNode *cur=head;cur!=NULL;cur=cur->next)
{
printf("%d\n",cur->data);
}
}

int length(ListNode *head)
{
printf("It takes O(n) time\n");
int count=0;
for(ListNode *cur=head;cur!=NULL;cur=cur->next) count++;
return count;
}

int main()
{
ListNode *p1,*p2,*p3,*p4;
p1=(ListNode *)malloc(sizeof(ListNode));
p1->data=4;
p2=(ListNode *)malloc(sizeof(ListNode));
p2->data=15;
p3=(ListNode *)malloc(sizeof(ListNode));
p3->data=7;
p4=(ListNode *)malloc(sizeof(ListNode));
p4->data=40;
head=p1;
p1->next=p2;
p2->next=p3;
p3->next=p4;
p4->next=NULL;

print(head);

int count=length(head);

printf("Linked List Contains %d elements\n",count);

return 0;
}

