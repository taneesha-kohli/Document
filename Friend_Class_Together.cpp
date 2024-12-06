#include<iostream>
using namespace std;

 class friend2;
class friend1{
int salary;
int acc;
public:
friend class friend2; 
void print2();

};

class friend2{
    int id;
    int marks;
    public:
    friend class friend1;
   void print()
   {
    friend1 ob;
    cout<<"Enter your salary : "<<endl;
    cin>>ob.salary;
    cout<<"\nEnter your account number : "<<endl;
    cin>>ob.acc;
    cout<<"Salary : "<<ob.salary<<endl<<"Account : "<<ob.acc<<endl;
   }
    
};

void friend1::print2()
{
    friend2 ob1;
    cout<<"Enter your id : "<<endl;
    cin>>ob1.id;
    cout<<"\nEnter your marks : "<<endl;
    cin>>ob1.marks;
    cout<<"ID : "<<ob1.id<<endl<<"Marks : "<<ob1.marks<<endl;
}


int main()
{
friend2 f1;
friend1 f2;
f1.print();
f2.print2();

return 0;
}