/* This algorithm is about printing a diamond shape pattern of a given integer
    input: interger value from the user.
    output: print the following pattern
      if n = 5
                  1 
               2  1  2
            3  2  1  2  3
         4  3  2  1  2  3  4
      5  4  3  2  1  2  3  4  5
         4  3  2  1  2  3  4
	    3  2  1  2  3
	       2  1  2
	          1       */
#include<iostream>

using namespace std;

int main(){
	int n,i,j,k,l;
	cout<<"Enter the number:";
	cin>>n;
	int space_count;
	for(i = 1; i <= n; i++, cout<<"\n"){
		k = i;
		l = 2;
		for(j = 1, space_count = n; j <= (2*n)-1; j++, space_count--){
			if(space_count > i){
				cout<<"  ";
			}
			else if(k > 1){
				cout<<k<<" ";
				k--;
			}
			else if(k==1) {
				cout<<k<<" ";
				k--;
			}
			else if(n > 1 && l <= i){
				cout<<l<<" ";
				l++;
			}
		}
	}
	for(i = 1; i < n; i++, cout<<"\n"){
		k = n-i;
		l = 2;
		space_count = 1;
		for(j = 1; j <= (2*n)-1; j++){
			if(space_count <= i){
				cout<<"  ";
				space_count++;
			}
			else if(k > 1){
				cout<<k<<" ";
				k--;
			}
			else if(k == 1){
				cout<<k<<" ";
				k--;
			}
			else if(n > 1 && l <= n-i){
				cout<<l<<" ";
				l++;
			}
		}
	}
	return 0;
}
