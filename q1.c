#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
	int data;
	struct node *prev;
	struct node *next;
};

struct node* insertFirst(int data){
	struct node *front=(struct node*)malloc(sizeof(struct node));

	front->prev=NULL;
	front->data=data;
	front->next=NULL;

	return front;
}

void insertFront(int data,struct node *front){
	
	struct node *ptr=(struct node*)malloc(sizeof(struct node));
	

	ptr->prev=NULL;
	ptr->data=data;
	ptr->next=front;
	front=ptr;

	
}



void insertEnd(int data,struct node* front){
	struct node *pWalk;
	
	

	for(pWalk=front ;pWalk!=NULL;pWalk=pWalk->next){
	
}
	

	pWalk->next=ptr;
	ptr->prev=pWalk;

	ptr->next=NULL;

	ptr->data=data;

}

int main(){

struct node *pWalk,*front;
pWalk=(struct node*)malloc(sizeof(struct node));

front=insertFirst(1);
insertFront(2,front);
insertEnd(3);
insertEnd(4);

for(pWalk=front;pWalk!=NULL;pWalk=pWalk->next){
	printf("%d",pWalk->data);
}




	return 0;
}