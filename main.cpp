#include <iostream>
using namespace std;

const int MAX=3;

//int main(){
//    int var[MAX]={10,11,12};
//    int *ptr;
//    ptr=var;
//    for (int i=0; i<MAX;i++)
//    {
//        cout<<"address of var["<<i<<"]=";
//        cout<<ptr<<endl;
//
//        cout<<"value of var["<<i<<"]=";
//        cout<<*ptr<<endl;
//
//        ptr++;
//
//    }
//    return 0;
//}

//int main()
//{
//    int var[MAX]={13,12,11};
//    int *ptr;
//
//    ptr=&var[MAX-1];
//    for (int i=MAX;i>0;i--)
//    {
//        cout<<"adress of var["<<i<<"]=";
//        cout<<ptr<<endl;
//
//        cout<<"value of var["<<i<<"]=";
//        cout<<*ptr<<endl;
//
//        ptr--;
//    }
//
//
//}

int main()
{
    int var[MAX]={10,100,1000};
    int *ptr[MAX];

    for (int  i = 0;  i <3 ; ++ i)
    {
        ptr[i]=&var[i];

        cout<<"value of var["<<i<<"]=";

        cout<<*ptr[i]<<"\n"<<endl;


    }
    return 0;
}