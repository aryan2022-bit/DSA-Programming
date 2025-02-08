//wap to enter the data or to store the data from the dashboard and print it
#include <iostream>
#include <cstdlib>
using namespace std;

//structure for linked list
struct node{
	int data;
	struct node *next; //*next is type of node which is of struct type
};

int main(){
	int i;
	struct node *head, *p;
	head = NULL;
	
	for(i=0;i<5;i++){
		if(head == NULL){
			head = (struct node *)malloc(sizeof(struct node)); //assigining the memory to node sizeof(type)
			p = head;
		}	
		else {
			p -> next = (struct node *)malloc(sizeof(struct node));
			p = p-> next;
		}
		p -> next = NULL;
		cout<<"Enter the data : ";
		cin >> p->data;
	}
	cout<<"\n";
	p = head;     //printing the linked list
	while (p!= NULL){
		cout<< p-> data<<" ";
		p = p->next;
	}
	return 0;
}

