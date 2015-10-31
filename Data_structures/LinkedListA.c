LIST IMPLEMENTATION USING ARRAY 
#include<stdio.h> 
#include<conio.h>
#define MAX 20 //maximum no of elements in the list

//user defined datatypes

struct 
{
	int list[MAX];
	int element;//new element to be inserted 
	int pos; //position of the element to be inserted or deleted 
	int length; //total no of elements
}l;

enum boolean { true, false };
typedef enum boolean boolean;

//function prototypes 

int menu(void); //function to display the list of operations 
void create(void); //function to create initial set of elements
void insert(int, int); //function to insert the given element at specified position
void delet(int);//function to delete the element at given position 
void find(int); //function to find the position of the given element, if exists
void display(void); //function to display the elements in the list
boolean islistfull(void);//function to check whether the list is full or not 
boolean islistempty(void); //function to check whether the list is empty or not 

void main() 
{
	int ch;
	int element;
	int pos;
	l.length = 0; 
	while(1) 
	{
		ch = menu();
		switch (ch)
		{
			case 1:
				l.length = 0;
				create();
				break;
			case 2:
				if (islistfull() != true)
				{

					printf("\tEnter the New element : ");
					scanf("%d", &element);
					printf("\tEnter the Position : ");
					scanf("%d", &pos);
					insert(element, pos);
				}
				else 
				{
					printf("\tList if Full. Cannot insert");
					printf("\nPress any key to continue...");
					getch();
				}
				break; 
			case 3: 
				if (islistempty() != true) 
				{
					printf("Enter the position of element to be deleted : 					");
					scanf("%d", &pos);
					delet(pos);
				}
				else 
				{
					printf("List is Empty.");
					printf("\nPress any key to continue...");
					getch();
				}
				break;
			case 4:
				printf("No of elements in the list is %d", l.length);
				printf("\nPress any key to continue...");
				getch();
				break;
			case 5:
				printf("Enter the element to be searched : ");
				scanf("%d", &element);
				find(element);
				break;
			case 6:
				display();
				break;
			case 7:
				exit(0);
				break;
			default:
				printf("Invalid Choice"); 
				printf("\nPress any key to continue..."); 
				getch(); 
		} 
	} 
} 

//function to display the list of elements 

int menu() 
{
	int ch;
	clrscr();
	printf("\n\t\t********************************************\n");
	printf("\t\t******LIST Implementation Using Arrays******\n"); 
	printf("\t\t********************************************\n\n"); 
	printf("\t1. Create\n\t2. Insert\n\t3. Delete\n\t4. Count\n\t5. Find\n\t6. Display\n		\t7. Exit\n\n\tEnter your choice : ");
	scanf("%d", &ch);
	printf("\n\n");
	return ch;
}

//function to create initial set of elements 

void create(void) 
{
	int element;
	int flag=1;
	while(flag==1)
	{
		printf("Enter an element : ");
		scanf("%d", &element);
		l.list[l.length] = element;
		l.length++;
		printf("To insert another element press '1' : ");
		scanf("%d", &flag);
	} 
}

//function to display the elements in the list 

void display(void) 
{
	int i;
	for (i=0; i<l.length; i++)
        	printf("Element %d : %d \n", i+1, l.list[i]);
	printf("Press any key to continue...");
	getch();
}

//function to insert the given element at specified position 

void insert(int element, int pos) 
{
	int i;
	if (pos == 0)
	{
		printf("\n\nCannot insert at zeroth position"); 
		getch(); 
		return; 
	}
	if (pos-1 > l.length) 
	{ 
		printf("\n\nOnly %d elements exit. Cannot insert at %d postion", l.length, 		pos);
		printf("\nPress any key to continue...");
		getch();
	}
	else 
	{
		for (i=l.length; i>=pos-1; i--)
		{
			l.list[i+1] = l.list[i]; 
		}
		l.list[pos-1] = element; 
		l.length++; 
	} 
}

//function to delete the element at given position 

void delet(int pos) 
{
	int i;
	if(pos == 0)
	{
		printf("\n\nCannot delete at zeroth position");
		getch();
		return;
	}
	if (pos > l.length) 
	{
		printf("\n\nOnly %d elements exit. Cannot delete", l.length, pos);
		printf("\nPress any key to continue...");
		getch();
		return;
	}
	for (i=pos-1; i<l.length; i++) 
	{ 
		l.list[i] = l.list[i+1]; 
	}
	l.length--; 
}

//function to find the position of the given element, if exists 

void find(int element) 
{
	int i;
	int flag = 1;
	for (i=0; i<l.length; i++)
	{ 
		if(l.list[i] == element) 
		{
			printf ("%d exists at %d position",element, i+1);
			flag = 0;
			printf("\nPress any key to continue...");
			getch();
			break;
		} 
	}
	if(flag == 1) 
	{
	printf("Element not found.\nPress any key to continue...");
	getch();
	} 
}

//function to check whether the list is full or not 

boolean islistfull(void) 
{ 
	if (l.length == MAX) 
		return true; 
	else 
		return false; 
}

//function to check whether the list is empty or not 

boolean islistempty(void) 
{ 
	if (l.length == 0)
		return true; 
	else 
		return false; 
}
