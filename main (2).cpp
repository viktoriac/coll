#include <iostream> //i/o library

using namespace std; //instead od prefix std::

int main() //header 

{//begin 
    float a, res; //declaration
    //input values 
    cout<< "a = ";
    cin >> a;
    //calculation 
    res = a - 7;
    //output calculation 
    cout << "a-7 = " << res << endl;
    system("pause");

    return 0; //return to OS
} //end 