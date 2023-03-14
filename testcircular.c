#include <stdio.h>   
#include <stdlib.h>
typedef struct node {int data; struct node* next;}Node;   
int isCircular(struct node *head) { 
    if (head == NULL) return 1;
    Node *nod = head->next; 
    while (nod != NULL && nod != head) nod = nod->next;   
    if(nod == head)return 1; else return 0; } 
  
// function to create a new node. 
 Node *newNode(int data) {  Node* temp;
	temp = (struct Node*)malloc(sizeof( Node));
    temp->data = data; temp->next = NULL; 
    return temp; } 

int main(){  Node *head = newNode(1); 
    head->next = newNode(2); head->next->next = newNode(3); 
    head->next->next->next = newNode(4);   
    isCircular(head)? printf("Yes\n") : printf("No\n") ;  
    head->next->next->next->next = head;   
    isCircular(head)? printf("Yes\n") : printf("No\n") ; return 0;} 
