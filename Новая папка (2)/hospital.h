#include <string>
#include <iostream>
#include <vector>
#include "user.h"
using namespace std;

class hospital;

class hospital{
    private:
    class Doc{
    private:
    vector <user> zapisi;
    int ID;
    static inline unsigned k{};
    string fio;
    public:
    vector<user> GetUser(){
        return zapisi;
    }
    Doc(string fio){k++; ID = k;this->fio=fio; };
    string Getfio(){return fio;}
    int Setfio(string fio){this->fio = fio; return 1;}
    int GetID(){return ID;}};
    string hospitalName;
    public:
    vector <Doc> doktors;

    void Adddoc(string fio){
        Doc buf(fio);
        doktors.push_back(buf);;
    }
    vector<Doc> getdoc(){return doktors;}
    string GethospitalName(){return hospitalName;}
    int SethospitalName()
    {
        cin>>hospitalName;
        return 1;
    }
   /* int AddDoc(string fio){
        buf.Setfio(fio);
        doktors.push_back(buf);
        return 1;
    }
    */
    void print(){
        for (int i{};i<doktors.size();i++){
            cout<<doktors[i].GetID()<<"    "<<doktors[i].Getfio()<<endl;
        }
    }
    int Addzapis(hospital boll){
    print();
    cout<<"enter doctor's id"<<endl;
    int _ID;
    cin>>_ID;
    user buf;
    buf.Setname();
    buf.Setfamilyname();
    buf.Setnsurname();
    buf.Setcity();
    buf.Setyear();
    buf.Settime();
    boll.doktors[_ID-1].GetUser().push_back(buf);
    return 1;
    }
};

class special : hospital{
    private:
    string name;
    public:
    special(string name) : name(name){};
    string Getname() {return name;}
    void SetName(){
        cout<<"Enter the name of the specialist"<<endl;
        cin>>name;
    }
};