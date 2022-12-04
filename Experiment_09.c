//Program to implement Circular Linked List
#include<stdio.h>
#include<stdio.h>

//Initialise Node
struct node{
    int data;
    struct node *next;
}*head=NULL,*rear=NULL,*temp,*newnode;

//Creating a New Node
void createNewNode(){
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("Enter the Value:");
    scanf("%d",&newnode->data);
}

//Inserting Node in the Beginning
void insertBeg(){
    createNewNode();
    if (head == NULL){
        head = newnode;
        rear = newnode;
    }
    else{
        newnode->next = head;
        head = newnode;
        rear->next=head;
    }
}

//Function to Display Circular Linked List
void displayList(){
    if (head == NULL)
        printf("!!! Circular Linked List is Empty !!!");
    else{
        temp = head;
        while (temp != rear){
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);

    }
}


//Main Section Where Execution Begins
void main(){
    insertBeg();
    insertBeg();
    insertBeg();
    displayList();
}
