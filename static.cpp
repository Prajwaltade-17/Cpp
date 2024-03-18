#include<iostream>
using namespace std;
 
const int MAX_SIZE=5;

struct staticlist{
int data[MAX_SIZE];
int size;
staticList(){
size=0;
}

void insert(int value){
if(size<MAX_SIZE){
data[size++]=value;
cout<<"inserted"<<value<<"into the list."<<endl;
}
else{
cout<<"list is full.cannot insert"<<value<<"."<<endl;
}
}

void display()
{
cout<<"list contents:<<endl;
for(int i=0;i<size;++i){
cout<<data[i]<<" ";
}
cout<<endl;
}

main()
{
staticList list;
list.insert(pen);
list insert(book);
list insert(bottle);
list.display();

return 0;



