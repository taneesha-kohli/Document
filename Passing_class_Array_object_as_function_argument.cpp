#include <iostream>
using namespace std;

class simple
{
    static int i;
int roll,marks;
public:
void set()
{
cout<<"\nEnter roll number for student "<<i++;
cin>>roll;
cout<<"\nEnter marks of student "<<i;
cin>>marks;
}
void get()
{
cout<<"\nRoll number :"<<roll<<endl<<"Marks :"<<marks;

}
simple(){}
simple(simple ob1[],int n)
{
   for(int i=0;i<n;i++)
   {
    ob1[i].set();
    ob1[i].get();
   }
}
};

int simple::i=1;

int main()
{
    int n;
    cout<<"how many student details do you want : "<<endl;
    cin>>n;
    simple ob[n];
   simple o3(ob,n);
    return 0;
}