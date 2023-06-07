#include <iostream>
#include <math.h>

using namespace std;



int code1(){
    int a, b;

    cout<<"ingrese el primer numero :";
    cin>>a;
    cout<<"ingrese el segundo numero :";
    cin>>b;
    cout<<a+b<<endl;

    return 0;
}
int code2(){
    int a, b;

    cout<<"ingrese el primer numero :";
    cin>>a;
    cout<<"ingrese el segundo numero :";
    cin>>b;
    cout<<a-b<<endl;
    
    return 0;
}
int code3(){
    int a, b;

    cout<<"ingrese el primer numero :";
    cin>>a;
    cout<<"ingrese el segundo numero :";
    cin>>b;
    cout<<a*b<<endl;
    
    return 0;
}
int code4(){
	int a, b;
	
    cout<<"ingrese el primer numero :";
    cin>>a;
    cout<<"ingrese el segundo numero :";
    cin>>b;
    cout<<a/b<<endl;
    
    return 0;
}
int code5(){
    int a, b;

    cout<<"ingrese el primer numero :";
    cin>>a;
    cout<<"ingrese el segundo numero :";
    cin>>b;
    cout<<pow(a, b)<<endl;
    
    return 0;
}
int code6(){
    int a, b;

    cout<<"ingrese el numero al que se le va a sacar raiz:";
    cin>>a;
    cout<<pow(a, .5)<<endl;
    
    return 0;
}

int main(int argc, char const *argv[])
{
    code1();
    code2();
    code3();
    code4();
    code5();
    code6();
    return 0;
}
