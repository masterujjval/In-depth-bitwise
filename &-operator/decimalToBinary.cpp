#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

class binary{
private:
int a;
int b;

public:

binary(int n,int m){
    a=n;
    b=m;
    
}

void bitwiseAnd(){
    cout<<"\n";

string a1=" ";
string a2=" ";

int m,n;

m=a;n=b;

while(m>0){
int temp=m%2;
if(temp==0)a1+='0';
if(temp==1)a1+='1';

m=m/2;
}


while(n>0){
int temp=n%2;
if(temp==0)a2+='0';
if(temp==1)a2+='1';

n=n/2;
}

cout<<"Bitwise process: "<<"\n";
int t= (a & b);
int x=t;
string a3=" ";

while(t>0){
int temp=t%2;
if(temp==0)a3+='0';
if(temp==1)a3+='1';

t=t/2;
}
reverse(a1.begin(),a1.end());
reverse(a2.begin(),a2.end());
reverse(a3.begin(),a3.end());




cout<<"  "<<a1<<"\n";

cout<<"& "<<a2<<"\n";
cout<<"---------------"<<"\n";
cout<<"  "<<a3<<"\n";
cout<<"\n";
cout<<"The resultant : "<<x<<"\n";


//end of this function
}


};
int main(){
    cout<<endl;
    int a,b;

    cout<<"Enter the first integer: "<<endl;
    cin>>a;
    cout<<"Enter the second integer: "<<endl;
    cin>>b;

binary ob(a,b);

ob.bitwiseAnd();


cout<<endl;
    return 1;
}