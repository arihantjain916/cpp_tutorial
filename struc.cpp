#include<iostream>
#include<cstring>
using namespace std;
int main(){
    struct Student{
        int id;
        char name[20];
        float marks;
    } a;

    strcpy(a.name , "Arihant");
    cout << a.name<< endl;

return 0;
}