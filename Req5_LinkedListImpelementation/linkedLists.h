/* The program is a C Program to Implement the Linked List Functions
   Created by : Ammar Shahin
   Date : 31/10/2019
                                                                    */


#ifndef LINKEDLISTS_H_INCLUDED
#define LINKEDLISTS_H_INCLUDED


typedef struct ST_node{
	int data;
	struct ST_node *next;
}ST_node;

ST_node *listhead;


void createList(ST_node *listHead);
ST_node* create_Node();
char insertToList(ST_node *listHead, unsigned char position, int data);
char deleteFromList(ST_node *listHead, unsigned char position, int* data);
ST_node* searchIntoList(ST_node *listHead, int data);
char sortList(ST_node *listHead); //Bonus
void swapTwoNodes(ST_node* node1,ST_node* node2);
void Free_List(ST_node* listHead);
char reverseList(ST_node *listHead);

#endif // LINKEDLISTS_H_INCLUDED
