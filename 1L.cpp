#include<iostream>
using namespace std;


struct node
{
    char info;
    struct node *next;

};
int main()
{
    struct node temp1,temp2,temp3,temp4,temp5;
    temp1.info='H';
    temp1.next=NULL;
    cout<<temp1.info;
    temp2.info='E';
    temp2.next=NULL;
    cout<<temp2.info;
    temp3.info='L';
    temp3.next=NULL;
    cout<<temp3.info;
    temp4.info='L';
    temp4.next=NULL;
    cout<<temp4.info;
    temp5.info='0';
    temp5.next=NULL;
    cout<<temp5.info;

return 0;
}