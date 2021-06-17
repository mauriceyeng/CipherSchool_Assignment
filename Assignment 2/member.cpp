#include<bits/stdc++.h>
using namespace std;

class Member{
    
    
    
    public:
  	  	string Name;
   		int Age;
   		string Phone_Number;
   		string Address;
    double Salary;
        void printSalary(){
            cout<<"Salary: "<<Salary;

        }

};
class Employee:public Member{
    
    public:
    	string specialization;
    	void disp(){
    		cout<<"\nName: "<<Name;
            cout<<"\nAge: "<<Age;
            cout<<"\nPhone number: "<<Phone_Number;
            cout<<"\nAddress: "<<Address;
            cout<<"\nSalary: "<<Salary;
            cout<<"\nSpecialization: "<<specialization;
		}

};
class Manager:public Member{
    public:
	string department;
    void disp(){
    		cout<<"\nName: "<<Name;
            cout<<"\nAge: "<<Age;
            cout<<"\nPhone number: "<<Phone_Number;
            cout<<"\nAddress: "<<Address;
            cout<<"\nSalary: "<<Salary;
            cout<<"\nDepartment: "<<department;
		}
};

int main(){
    Employee e;
    e.Name="Bob";
    e.Age=30;
    e.Phone_Number="9808923232";
    e.Address="new town";
    e.Salary=10000;
    e.specialization="data";
    e.disp();
    cout<<endl;
    Manager m;
    m.Name="ted";
    m.Age=25;
    m.Phone_Number="1800293745";
    m.Address="old town";
    m.Salary=15000;
    m.department="management";
    m.disp();
    


    return 0;
}