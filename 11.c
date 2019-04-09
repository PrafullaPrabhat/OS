#include<stdio.h>//header file for standard i/o
#include<stdlib.h>//header file for standard library
#define size 5000 //To give the size because array will not take the value of this much limit
int queue[size],front= -1,rear= -1;//declaring the variables
void enqueue(int);//creating function with integer parameter
void display();//creating funtion without parameter
int main()//main function
{
	int i,n;
	int value;
	printf("no of elements to insert:");
	scanf("%d",&n);
	for(i=0;i<n;i++)//after taking the input of the distance to cover
	{
		scanf("%d",&value);
		enqueue(value);
	}
	display();//calling the display method.
	calc();
}
void enqueue(int value)
{
	if(rear==size-1)
	{
		printf("queue--full");
	}
	else{
		if(front==-1)
			front=0;
		rear++;
		queue[rear]=value;
}
}
void display()
{
	int i;
	if(rear==-1)
	{
		printf("queue--empty");
	}
	else{
	
	for(i=front;i<=rear;i++)
	{
		printf("%d\t",queue[i]);
	}
}
}
void calc()
{
	int total_distance=0,d,i;
	int current_pos,prev_pos;
	printf("\n");
	printf("Enter prev postion:");
	scanf("%d",&prev_pos);
	getchar();
	printf("\n");
	printf("Enter current postion");
	scanf("%d",&current_pos);
	getchar();
	d=current_pos-queue[front];
	if(d<0)
		total_distance=-d;
		else
		total_distance=d;
	for(i=front;i<rear;i++)
	{
		d=queue[i]-queue[i+1];
		if(d<0)
		d=-d;
		
total_distance=total_distance + d;
	}
	printf("\a");
	printf("Distance Covered =%d",total_distance);
}
