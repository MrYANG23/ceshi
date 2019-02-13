#include <iostream>
using namespace std;

const int MAX=3;

int main(){
    int var[MAX]={10,11,12};
    int *ptr;
    ptr=var;
    for (int i=0; i<MAX;i++)
    {
        cout<<"address of var["<<i<<"]=";
        cout<<ptr<<endl;

        cout<<"value of var["<<i<<"]=";
        cout<<*ptr<<endl;

        ptr++;

    }
    return 0;


}


