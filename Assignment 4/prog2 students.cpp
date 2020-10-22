/*                                 -------------------------student------------------------
                                  ^                                                       ^                                                                                     
                                  |                                                       |
                                  |                                                       |
                                  |                                                       |
                                  |                                                       |
                        undergraduate student                                  graduate student 
                         ^           ^   ^                                      ^            ^
                         |           |   |                                      |            |
                         |           |   |                                      |            |
                         |           |   |                                      |            |
                         |           |   |                                      |            |
                    freshman         |  senior                        doctoral student     masters student
                                     |
                                   junior
                                   */
                     
                

//code:

#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string student_name,father_name,mother_name,address,state,city,gender;
        int pincode;
        Student(string student_name,string father_name,string mother_name,string address,string state,string city,int pincode,string gender)
        {
            this->student_name=student_name;
            this->father_name=father_name;
            this->mother_name=mother_name;
            this->address=address;
            this->state=state;
            this->city=city;
            this->pincode=pincode;
            this->gender=gender;
        }
};
class Undergraduate:public Student
{
    public:
        string branch;
        Undergraduate(string branch,string student_name,string father_name,string mother_name,string address,string state,string city,int pincode,string gender):Student(student_name,father_name,mother_name,address,state,city,pincode,gender)
        {this->branch=branch;}
};
class Graduate:public Student
{
    public:
        string branch;
        Graduate(string branch,string student_name,string father_name,string mother_name,string address,string state,string city,int pincode,string gender):Student(student_name,father_name,mother_name,address,state,city,pincode,gender)
        {
            this->branch=branch;
        }
};
class Freshmen:public Undergraduate
{
    public:
        int year;
        Freshmen(int year,string branch,string student_name,string father_name,string mother_name,string address,string state,string city,int pincode,string gender):Undergraduate(branch,student_name,father_name,mother_name,address,state,city,pincode,gender)
        {this->year=year;}
     void getinfo()
        {
            cout<<"name :"<<this->student_name<<endl;
            cout<<"father name :"<<this->father_name<<endl;
            cout<<"mother name :"<<this->mother_name<<endl;
            cout<<"address :"<<this->address<<endl;
            cout<<"branch :"<<this->branch<<endl;
            cout<<"year :"<<this->year<<endl; 
            cout<<"city :"<<this->city<<endl;
            cout<<"state :"<<this->state<<endl;
        }

};
class Junior:public Undergraduate
{
    public:
        int year;
        Junior(int year,string branch,string student_name,string father_name,string mother_name,string address,string state,string city,int pincode,string gender):Undergraduate(branch,student_name,father_name,mother_name,address,state,city,pincode,gender)
        {this->year=year;}
         void getinfo()
        {
            cout<<"name :"<<this->student_name<<endl;
            cout<<"father name :"<<this->father_name<<endl;
            cout<<"mother name :"<<this->mother_name<<endl;
            cout<<"address :"<<this->address<<endl;
            cout<<"branch :"<<this->branch<<endl;
            cout<<"year :"<<this->year<<endl; 
            cout<<"city :"<<this->city<<endl;
            cout<<"state :"<<this->state<<endl;
        }
};
class Senior:public Undergraduate
{
    public:
        int year;
        Senior(int year,string branch,string student_name,string father_name,string mother_name,string address,string state,string city,int pincode,string gender):Undergraduate(branch,student_name,father_name,mother_name,address,state,city,pincode,gender)
        {this->year=year;}
         void getinfo()
        {
            cout<<"name :"<<this->student_name<<endl;
            cout<<"father name :"<<this->father_name<<endl;
            cout<<"mother name :"<<this->mother_name<<endl;
            cout<<"address :"<<this->address<<endl;
            cout<<"branch :"<<this->branch<<endl;
            cout<<"year :"<<this->year<<endl; 
            cout<<"city :"<<this->city<<endl;
            cout<<"state :"<<this->state<<endl;
        }
};
class MastersStudent:public Graduate
{
    public:
        int year;
        string specialization;
        MastersStudent(int year,string specialization,string branch,string student_name,string father_name,string mother_name,string address,string state,string city,int pincode,string gender):Graduate(branch,student_name,father_name,mother_name,address,state,city,pincode,gender)
        {
            this->year=year;
            this->specialization=specialization;
        }
        void getinfo()
        {
            cout<<"name :"<<this->student_name<<endl;
            cout<<"father name :"<<this->father_name<<endl;
            cout<<"mother name :"<<this->mother_name<<endl;
            cout<<"address :"<<this->address<<endl;
            cout<<"branch :"<<this->branch<<endl;
            cout<<"specialization :"<<this->specialization<<endl;
            cout<<"year :"<<this->year<<endl; 
            cout<<"city :"<<this->city<<endl;
            cout<<"state :"<<this->state<<endl;
        }
};
class DoctoralStudent:public Graduate
{
    public:
        int year;
        string research_topic;
        DoctoralStudent(int year,string research_topic,string branch,string student_name,string father_name,string mother_name,string address,string state,string city,int pincode,string gender):Graduate(branch,student_name,father_name,mother_name,address,state,city,pincode,gender)
        {
            this->year=year;
            this->research_topic=research_topic;
        }
        void getinfo()
        {
            cout<<"name :"<<this->student_name<<endl;
            cout<<"father name :"<<this->father_name<<endl;
            cout<<"mother name :"<<this->mother_name<<endl;
            cout<<"address :"<<this->address<<endl;
            cout<<"branch :"<<this->branch<<endl;
            cout<<"research_topic :"<<this->research_topic<<endl;
            cout<<"year :"<<this->year<<endl; 
            cout<<"city :"<<this->city<<endl;
            cout<<"state :"<<this->state<<endl;
        }
};
int main()
{
    DoctoralStudent aakash(2,"artificial intelligence","computer science","Aakash Shukla","Gyanendra Shukla","Aparna Shukla","SouthCity","Uttar Pradesh","Shahjahanpur",242001,"Male");
    MastersStudent ravi(1,"cybersecurity","computer science","Ravi Verma","Piyush Verma","Neha Verma","City Park","Uttar Pradesh","Shahjahanpur",242001,"Male");
    Freshmen Neha(1,"electronics","Neha gupta","Nipun Gupta","ankita gupta","chowk","Uttar Pradesh","Bareilly",125834,"Female");
   aakash.getinfo();
   cout<<endl;
   ravi.getinfo();
   cout<<endl;
   Neha.getinfo();
    return 0;
}


