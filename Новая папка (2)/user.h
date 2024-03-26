#include<iostream>
#include<string>
using namespace std;
class user {
    private:
    int ID;
    string name;
    string familyname;
    string surname;
    string city;
    int year;
    public:
    int hour;

    void Setname(){cout<<"Enter the name"<<endl; cin>> name;}

    void Setfamilyname(){cout<<"Enter the familyname"<<endl; cin>> familyname;}

    void Setnsurname(){cout<<"Enter the surname"<<endl; cin>> surname;}

    void Setcity(){cout<<"Enter the city"<<endl; cin>> city;}

    void Setyear(){cout<<"Enter the year"<<endl; cin>> year;}

    void Settime(){cout<<"Enter the time to book you in"<<endl; cin>> hour;}
    
    int Gethour()
    {
        return hour;
    }
};
/*
 user operator+(const user& a,const user& b)
    {
        user result;
        result.hour = a.hour + b.hour;
        return result;
    }

 user operator>(const user& a,const user& b)
    {
        if( a.hour > b.hour){return a;}
        else {return b;}
    }
 user operator<(const user& a,const user& b)
    {
        if( a.hour > b.hour){return b;}
        else {return a;}
    }
*/