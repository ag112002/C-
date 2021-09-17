#include<iostream>
using namespace std;
struct node
{
    char info;
    struct node *next;

};
struct node *head;
int main()
{
    struct node temp1,temp2,temp3;
    struct node *ptr1, *ptr,*ptr2,*ptr3;
    ptr1=&temp1;
    temp1.info='H';
    temp1.next=&temp2;
    ptr2=&temp1;
    temp2.info='E';
    temp2.next=&temp3;
    ptr3=&temp3;
    temp3.info='Y';
    temp3.next=NULL;
    
    head=ptr1;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%c",ptr->info);
        ptr=ptr->next;
    }
    return 0;
}
