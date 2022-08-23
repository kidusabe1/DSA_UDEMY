#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    node* NEXT;
}node;

node* head,*new_node,*temp;
head=0;
int main()
{
    new_node=(node *) malloc(sizeof(node));
    printf("Enter A number: ");
    scanf("%d",&new_node->num); 

}