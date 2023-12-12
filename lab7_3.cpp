#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
}

int main(){
//ไม่ต้องเติม function main()

char before(char x){
if(x<='Z'&&x>'A'){
return x-1;
}
if(x=='A'){
return 'Z';
}
if(x=='0'){
return'0';
}
return '0';
}
}
