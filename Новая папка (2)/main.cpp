#include "CMenuItem.h"
#include "hospital.h"
hospital a;
special b("Petrovna");
//#include <unistd.h>
////g++ CMenuItem.h CMenuItem.cpp main.cpp hospital.h hospital.cpp user.h
using namespace std;
int f1() {
    a.Addzapis(a);
    return 1;
}

int f2() {
    int __id;
    cin >>__id;
    int time;
    cin>>time;
    a.getdoc()[__id-1].GetUser()[time-1].Settime();
    return 2;
}
int f4(){
    return 0;
}
int f3() {
    cout << "hello the operator will contact you in a few seconds"<<endl;
    cout<<"hello my name"<<b.Getname()<<", how can I help you"<<endl;
    string a;
    int swich_;
    while(true){
        getline(cin,a);
        getline(cin,a);
        cout<<"выбирите пунк коректировки"<<endl;
        cin>>swich_;
        switch (swich_)
        {
        case 1:
        {
            f1();
            break;
        }
        case 2:{
            f2();
            break;
        }
        case 3:{
        f3();
        break;
        }
        case 4:{
            f4();
            break;
        }
        default:
        getline(cin,a);
        getline(cin,a);
            break;
        }

    }
    return 3;
}

const int ITEMS_NUMBER = 4;


int main() {
    setlocale(0,"");
    a.Adddoc("Vasiliy Genadich");
    a.Adddoc("Svetoslav Vsemirivich");
    a.Adddoc("Azbek Kolovratov");


    /*
    AddDoc("Vasiliy Genadich");
    a.AddDoc("Svetoslav Vsemirivich");
    a.AddDoc("Azbek Kolovratov");
    */
    cout<<"Hello!"<<endl;
 //sleep(2)
    cout<<"Enter hospital name";
    a.SethospitalName();
 //sleep(2)
    cout<<"What do you want to do?"<<endl;
 //sleep(2)
    cout<<"Please select the actions suggested below"<<endl;
    CMenuItem items[ITEMS_NUMBER] {CMenuItem{"To make an appointment with a doctor", f1}, CMenuItem{"Сhange doctor's appointment", f2}, CMenuItem{"Contact support", f3},CMenuItem{"exit", f4}};
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};
    return 0;
}