#include<bits/stdc++.h>

using namespace std;
class sharedata
{
private :
int id ;
public:
    virtual void printclass() = 0 ;
    
    void setid(int id){
    if (id > 0)
    {
        this -> id = id ;
    }else{
        cout<<"invalid id" ;
    }
    
}
int getid(){
    return id ;
}
};
class sharedata1
{
private :
int age ;
public:
void setage(int age){
    if (age > 0)
    {
        this -> age = age ;
    }else{
        cout<<"invalid age" ;
    }
}
int getage(){
    return age ;
}
};
class sharedata2
{
private :
int salary ;
public:
void setsalary(int salary){
    if (salary > 0)
    {
        this -> salary = salary ;
    }else{
        cout<<"invalid salary" ;
    } 
}
int getsalary(){
    return salary ;
}
};
class Student : public sharedata , public sharedata1 {
    private : 
    string phone ;
    public :
    void printclass(){
        cout <<"hello , student"<<endl;
    }
    void setphone(string phone){
    int sizeofphone = phone.size() ;
    if (sizeofphone == 11)
    {
        this -> phone = phone ;
    }else{
        cout << "invalid phone number" ;
    }
    
    }
    string getphone(){
    return phone ;
    }
};
class Teacher : public sharedata , public sharedata1 , public sharedata2 {
    void printclass(){
        cout <<"hello , teacher"<<endl ;
    }
};
class Manager : public sharedata , public sharedata2 {
    void printclass(){
        cout <<"hello , manager" <<endl;
    }
};

int main()
{
    Student s ;
    Teacher t ;
    Manager m ;
}