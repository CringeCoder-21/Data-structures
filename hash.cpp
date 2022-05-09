#include<iostream>
#define table_size 10
#include<conio.h>

using namespace std;

int htable[table_size];
void insert(int val){
	int index, key, flag=0;
	key = val % table_size;
	for(int i = 0; i < table_size; i++){
		index = (key+i) % table_size;
		if(htable[index] == NULL)
		{
			htable[index] = val;
			flag = 1;
			break;
		}
	}
	if(flag == 0) cout<<"\nThe element cannot be inserted!";
	getch();
	}
void find(int val){
	int index, i, flag = 0, hash;
	hash = val % table_size;
	for(i=0;i<table_size;i++){
		index = (hash+i)%table_size;
		if(htable[index]==val){
			cout<<"\nThe element is found at "<< index<<" index";
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		cout<<"\nthe value is not found";
	}
}
void display(){
	int i;
	cout<<"\nThe elements in the hash table are:";
	for(i=0;i<table_size;i++){
		cout<<"\nAt index:"<<i<<" value:"<<htable[i];
	}
}
int main(){
	int choice, value;
	while(1){
		cout<<"\n1.insert";
		cout<<"\n2.find";
		cout<<"\n3.display";
		cout<<"\n4.exit";
		cout<<"\nEnter your choice:";
		cin>>choice;
		switch(choice){
			case 1:{
				cout<<"\nEnter the value to be inserted:";
				cin>>value;
				insert(value);
				break;
			}
			case 2:{
				cout<<"\nEnter the value to be found:";
				cin>>value;
				find(value);
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4: exit(0);
		}
	}
}
