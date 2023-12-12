#include <iostream>
#include <string>
using namespace std;
string name,movie,date;
int id,stid,x;

int main(){
cout << "Fahsai: " << "Sawadee ka...Can you tell me your name?"<<endl;
getline(cin,name);
cout << "?????: ";
cout << "Fahsai: " << "Wow!!! " << name << " is a really cool name."<<endl;
cout << "Fahsai: " << "I think you are an Engineering student. What is your student ID?"<<endl;
cin >> id;
x = (id/10000000)-12;
stid=x;
cout << name << ": ";
cout << "Fahsai: " << "I think you may be GEAR "<< stid << ". I have a free movie ticket for you."<<endl;
cout << "Fahsai: " <<"Let's go to the cinema together!!!"<<endl;
cout << "Fahsai: " <<"What movie do you want to watch?"<<endl;
cin.ignore();
getline(cin,movie);
cout << name << ": ";
cout << "Fahsai: "<< "So....which day are you free to go with me?"<<endl;
getline(cin,date);
cout << name << ": ";
cout << "Fahsai: " << date << "....that is OK!!! I'm looking forward to watching " << movie <<" with you."<<endl;
cout << name <<": ";
cout << "Fahsai: " <<"555+ see you " <<date << ". Bye Bye \\(^ ^)/"<<endl;
return 0;
}