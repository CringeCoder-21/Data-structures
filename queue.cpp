#include<iostream>

using namespace std;

int main(){
	int queue[10], rear, front, choice, num,i;
	front = 0;rear = 0;
	cout<<"QUEUE IMPLEMENTATION!!";
	cout<<"\n1. ENQUEUE";
	cout<<"\n2. DEQUEUE";
	cout<<"\n3. PRINT";
	cout<<"\n4. EXIT";
	while(1){
		cout<<"\nEnter your choice:";
		cin>>choice;
		switch(choice){
			case 1:
				if(rear == 10){
					cout<<"\nTHe queue is full!!";
				}
				else{
					cout<<"\nEnter the number to be inserted:";
					cin>>num;
					queue[rear] = num;
					rear++;
				}
				cout<<"\nThe element is inserted successfully";
				break;
			case 2:
				if(front == rear){
					cout<<"\nThe queue is empty!!";
				}
				else{
					cout<<"\n!!The element "<<queue[front]<<" is deleted from the queue!!";
					front++;
				}
				break;
			case 3:
				if(front == rear){
					cout<<"\nThe queue is empty!!";
				}
				else{
					for(i=front;i<rear;i++){
						cout<<queue[i]<<endl;		
					}
				}
				break;
			case 4:
				exit(0);
			default:
				cout<<"\nThe choice is wrong";
		}
	}
	return 0;
}
