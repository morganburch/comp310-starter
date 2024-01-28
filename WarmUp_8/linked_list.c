#include <stdio.h>
#include <stdlib.h>

//c does not have class, so use struct 
struct Node{ 
	int data; 
	struct Node* next; //within node pointer to next node
	
	//dont need constructor like java bc class vs struct are different
}; //struct definitions need ;

struct Node* head = NULL; 

void push(int new_data){ 
	//allocate memory
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	//"->" in c is used to access members of a structure 
	new_node -> data = new_data; 
	new_node -> next = head; 
	head = new_node; 
}

void deleteNode(int key){ 
	struct Node* temp = head, *prev = NULL; 
	
	//delete first node
	if(temp != NULL && temp -> data == key){
		head = temp -> next; 
		free(temp); //need to deallocate memory in c 
		return;
	}
	
	while(temp != NULL && temp ->data != key){ 
		prev = temp; 
		temp = temp->next;
	}
	
	if (temp == NULL){ 
		return; 
	}
	
	prev -> next = temp-> next; 
	free(temp); 	
}
void printList(){ 
	struct Node* tnode = head; 
	while (tnode != NULL) { 
		printf("%d ", tnode->data); 
		tnode = tnode->next;
	}
	printf("\n"); 
}

int main(int argc, char** argv){ 
	head = NULL; 
	
	push(7);
    push(1);
    push(3);
    push(2);

    printf("\nCreated Linked list is:\n");
    printList();

    deleteNode(1);

    printf("\nLinked List after Deletion of 1: \n");
    printList();
	return EXIT_SUCCESS;
}
