/*
ID : 22012306
NAME : AUNI ALYAA NATASYA BINTI MOHMAD SALUDDIN
*/


#include <iostream>
using namespace std;

struct Student{
        int id ;
        string name ,email,contact;
        
};

int main()
{
    Student student[5];
    
    for(int i=0; i<5; i++){
        
        cout<<"student #"<< (i+1) <<endl;
        
        cout<< "Enter student id : "; cin>> student[i].id;
        cin.ignore();
        cout<< "Enter student name : "; getline(cin,student[i].name);
        cout<< "Enter student contact number : "; cin>> student[i].contact;
        cout<< "Enter student email : "; cin>> student[i].email;
        
        cout<<endl;
    }
    
    for(int i=0; i<5; i++){
        
        cout<<"student #"<< (i+1) <<endl;
        
        cout<< "id : "<<student[i].id<<endl;
        cout<< "name : "<< student[i].name<<endl;
        cout<< "contact number : "<<student[i].contact<<endl;
        cout<< "email : "<<student[i].email<<endl;
        
        cout<<endl;
    }

    return 0;
}