#include<iostream>
#include <cstdlib> 
//#include <ctime> 
using namespace std;
class darray{
	int size, *ptr;
	public:
		darray(): size(0), ptr(NULL){
		}
		darray(int s){
			size=s;
			ptr=new int[size];
		}
		darray(darray& obj){
			size=obj.size;
			if(size>0){
				ptr=new int[size];
				for(int i=0;i<size;i++){
					ptr[i]=obj.ptr[i];
				}
			}
			else
				ptr=NULL;
		}
		void set_array(int s){
			if (ptr!=NULL)
				delete[] ptr;
			size=s;
			ptr=new int[size];
		}
		void insert_data(int ind, int d){
			if(ptr!=NULL){
				if(ind<size)
				   ptr[ind]=d;
				else
				   cout<<"index out of bounds"<<endl;
			}
			else
				cout<<"Array pointer is poiting to NULL"<<endl;
		}
		int get_data(int ind){
			if(ind<size && ptr!=NULL)
			     return ptr[ind];
			else{			
				cout<<"invalid access"<<endl;
				exit(0);
				}
		}
		void random_fill(){
			if(ptr!=NULL){
				for(int i=0;i<size;i++){
					ptr[i]=rand()%100+1;
				}
			}
			else{
				cout<<"Array pointer is poiting to NULL"<<endl;
			}
		}
		void show_data(){
			if(ptr!=NULL){
				for(int i=0;i<size;i++){
					cout<<"arr["<<i<<"] = "<<ptr[i]<<endl;
				}
			}
			else
			   cout<<"Array pointer is poiting to NULL"<<endl;
			cout<<"================================"<<endl;
		}
		~darray(){
			if(ptr!=NULL){
				cout<<"desturctor called automatically"<<endl;
				delete[] ptr;
				}
		}
};
int main(){
	darray a1(5);
	a1.random_fill();
	cout<<"Show array_1 data"<<endl;
	a1.show_data();
	darray a2(a1);
	cout<<"show array_2 data"<< endl;
	a2.show_data();
	a2.insert_data(2,101);
	cout<<"show array_2 data by making changes at index 2 of array_2"<<endl;
	a2.show_data();
	cout<<"Show array_1 data after making changes in array_2"<<endl;
	a1.show_data();
}
