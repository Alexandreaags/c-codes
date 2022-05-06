#include <iostream>

using namespace std;


void sayHi(string name, int age){
    cout << "Hello " << name << " you are " << age << endl;

}

 int main ()
{

    sayHi("Alexandre", 20);
    sayHi("Marco", 35);
    sayHi("Marcela", 21);
    return 0;
}