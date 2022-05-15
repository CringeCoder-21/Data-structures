// This program is about implementing hashing using seperate chaining method using c++//
#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;

class hashtable {
		int size;
		list<int>* table;
	public:
		hashtable(int s);
		void insert(int key);
		void del(int key);
		int hashfunc(int x) {
			return x%size;
		}
		void display();

};
hashtable::hashtable(int s) {
	this->size = s;
	table = new list<int>[size];
}
void hashtable::insert(int key) {
	int index = hashfunc(key);
	table[index].push_back(key);
}
void hashtable::del(int key) {
	int index = hashfunc(key);
	list<int>:: iterator i;
	for(i = table[index].begin(); i != table[index].end(); i++) {
		if(*i == key) {
			table[index].erase(i);
			break;
		}
	}
}

void hashtable::display() {
	for(int i = 0; i < size; i++) {
		cout<<i;
		for(auto x : table[i])
			std::cout<<"-->"<<x;
		cout<<endl;
	}
}
int main() {
	int a[] = {1,2,3,4,5,6};
	int n = sizeof(a)/sizeof(a[0]), choice, value, bucket;
	cout<<"\nEnter the size of the bucket:";
	cin>> bucket;
	hashtable h1(bucket);
	while(1) {
		cout<<"\n1.insert";
		cout<<"\n2.delete";
		cout<<"\n3.print";
		cout<<"4.exit";
		cout<<"\nEnter your choice:";
		cin>>choice;
		switch(choice) {
			case 1: {
				cout<<"\nEnter the value to be inserted:";
				cin>>value;
				h1.insert(value);
				break;
			}
			case 2: {
				cout<<"\nEnter the value to be deleted";
				cin>>value;
				h1.del(value);
				break;
			}
			case 3: {
				h1.display();
				break;
			}
			case 4:
				exit(0);
		}
	}
}
