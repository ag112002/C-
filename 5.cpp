#include<iostream>
using namespace std;

struct node
{
    int info;
    struct node *next;
    
};
struct node *head=NULL;
void create();
void display();
int main()
{ 
  create();
  create();
  create();
  display();
  return 0;
}
void create()
{   int data;
    struct node *temp,*ptr;
    temp= (struct node *)malloc(sizeof(struct node));
    cin>>data;
    temp->info=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        
    }
    
}
void display()
{   struct node *ptr;
   ptr=head;
    while(ptr!=NULL)
    {
        cout<<" "<<ptr->info;
       ptr=ptr->next;
    }
}