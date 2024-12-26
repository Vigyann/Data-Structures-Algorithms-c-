#include<iostream>
 #include <stdio.h>
#include <stdlib.h>
using namespace std;

struct btnode
{
int value;
struct btnode *l;
struct btnode *r;
}*root = NULL, *temp = NULL, *t2, *t1;



void search(struct btnode *t)
{
if ((temp->value > t->value) && (t->r != NULL))      /* value more than root node value insert at right */
search(t->r);
else if ((temp->value > t->value) && (t->r == NULL))
t->r = temp;
else if ((temp->value < t->value) && (t->l != NULL))    /* value less than root node value insert at left */
search(t->l);
else if ((temp->value < t->value) && (t->l == NULL))
t->l = temp;
}

void create()
{
int data;
printf("Enter data of node to be inserted : ");
scanf("%d", &data);
temp = (struct btnode *)malloc(sizeof(struct btnode));
temp->value = data;
temp->l =NULL;
temp->r = NULL;
if (root == NULL)
root = temp;
else
search(root);
}

void preorder(struct btnode *t)
{
if (root == NULL)
{
printf("No elements in a tree to display");
return;
}
printf("%d -> ", t->value);
if (t->l != NULL)
preorder(t->l);
if (t->r != NULL)
preorder(t->r);
}

void inorder(struct btnode *t)
{
if (root == NULL)
{
printf("No elements in a tree to display");
return;
}
if (t->l != NULL)
inorder(t->l);
printf("%d -> ", t->value);
if (t->r != NULL)
inorder(t->r);
}

void postorder(struct btnode *t)
{
if (root == NULL)
{
printf("No elements in a tree to display ");
return;
}
if (t->l != NULL)
postorder(t->l);
if (t->r != NULL)
postorder(t->r);
printf("%d -> ", t->value);
}

int flag = 1;

int main()
{
int ch;
cout<<"\nOPERATIONS ---";
cout<<"\n1 - Insert an element into tree\n";
cout<<"2 - Inorder Traversal\n";
cout<<"3 -   Preorder Traversal\n";
cout<<"4-   Postorder Traversal\n";
cout<<"5 -   Exit\n";

while(1)
{
printf("\nEnter your choice : ");
scanf("%d", &ch);
switch (ch)
{
case 1:
create();
break;
case 2:
inorder(root);
break;
case 3:
preorder(root);
break;
case 4:
postorder(root);
break;
case 5:
exit(0);
default :
printf("Wrong choice, Please enter correct choice  ");
break;
}
}
}















