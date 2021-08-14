#include<bits/stdc++.h>

using namespace std;

class student{public:

    string name;
    int age;
    bool gender;

    ~student()
    {
        cout<<"destructor called";
    }

    student()
    {
        cout<<"default consturutre";
    }

    student(string s,int age,bool gender)
    {
        name=s;
        age=age;
        gender=age;

    }



    void printinfo()
    {
    
        cout<<"Name:--"<<name<<endl;
        
        cout<<"age:--"<<age<<endl;
       
        cout<<"gender:--"<<gender<<endl;
        
    }
     

};
int main()
{
    // student arr[3];
    // for(int i=0;i<3;i++)
    // {
    //     cout<<"Name:--";
    //     cin>>arr[i].name;
    //     cout<<"age:--";
    //     cin>>arr[i].age;
    //     cout<<"gender:--";
    //     cin>>arr[i].gender;
    // }
    // for(int i=0;i<3;i++)
    // {
    //     arr[i].printinfo();
    // }
    student s;
    student a1("name", 22, 1);
    a1.printinfo();
    return 0;

}