CIRCULAR QUEUE IMPLEMENTATION USING ARRAYS
/*Program of queue using array*/
# include
# define MAX 5

int queue_arr[MAX];
int rear = -1;
int front = -1;
int count = 0;

int main()
{
	int choice;
	while(1)
	{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("4.Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1 :
				enqueue();
				break;
			case 2 :
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("Wrong choice\n");
		}/*End of switch*/
	}/*End of while*/
	return 0;
}/*End of main()*/

enqueue()
{
	int added_item;
	if (count==MAX)
		printf("Queue Overflow\n");
	else
	{
	if (front==-1) /*If queue is initially empty */
		front=0;
		printf("Input the element for adding in queue : ");
		scanf("%d", &added_item);
		rear=rear+1;
		if (rear==MAX)
			rear=0;
		queue_arr[rear] = added_item ;
		count++;
	}
}/*End of insert()*/

dequeue()
{
	if (front == -1 || count==0)
	{
	printf("Queue Underflow\n");
	return ;
	}
	else
	{
	printf("Element deleted from queue is : %d\n", queue_arr[front]);
	front=front+1;
	if (front==MAX)
		front=0;
	count--;
	}
}/*End of del() */

display()
{
	int i;
	if (front == -1)
		printf("Queue is empty\n");
	else
	{
		printf("Queue is :\n");
		for(i=front;i<= rear;i++)
			printf("%d ",queue_arr[i]);
		printf("\n");
	}
}/*End of display() */





LINEAR QUEUE IMPLEMENTATION USING ARRAYS
/*Program of queue using array*/
# include
# define MAX 5

int queue_arr[MAX];
int rear = -1;
int front = -1;
int count = 0;

int main()
{
	int choice;
	while(1)
	{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("4.Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1 :
				enqueue();
				break;
			case 2 :
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("Wrong choice\n");
		}/*End of switch*/
	}/*End of while*/
	return 0;
}/*End of main()*/

enqueue()
{
	int added_item;
	if (count==MAX)
		printf("Queue Overflow\n");
	else
	{
	if (front==-1) /*If queue is initially empty */
		front=0;
	printf("Input the element for adding in queue : ");
	scanf("%d", &added_item);
	rear=rear+1;
	queue_arr[rear] = added_item ;
	count++;
	}
}/*End of insert()*/

dequeue()
{
	if (count == 0)
	{
	printf("Queue Underflow\n");
	return ;
	}
	else
	{
	printf("Element deleted from queue is : %d\n", queue_arr[front]);
	count--;
	if (count == 0)
		front = -1;
	else
		for(i=0; i<rear; i++)
			queue_arr[i] = queue_arr[i+1]
		rear=rear-1;
	}
}/*End of del() */

display()
{
	int i;
	if (front == -1)
		printf("Queue is empty\n");
	else
	{
		printf("Queue is :\n");
		for(i=front;i<= rear;i++)
			printf("%d ",queue_arr[i]);
		printf("\n");
	}
}/*End of display() */
