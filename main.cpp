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

//int main()
//{
//    int var[MAX]={10,100,1000};
//    int *ptr[MAX];
//
//    for (int  i = 0;  i <3 ; ++ i)
//    {
//        ptr[i]=&var[i];
//
//        cout<<"value of var["<<i<<"]=";
//
//        cout<<*ptr[i]<<"\n"<<endl;
//
//
//    }
//    return 0;
//}


//
//int main()
//{
//    int var;
//    int *ptr;
//    int **pptr;
//    var=3000;
//    ptr=&var;
//    pptr=&ptr;
//
//    cout<<"var:"<<var;
//    cout<<"&var:"<<ptr;
//    cout<<"&&var:"<<pptr<<endl;
//    return 0;
//
//
//}

//fan hui yin yong
double vars[]={10,20,30,40,50};

double& setvalues(int i)
{
    return vars[i];
}

int main()
{
    cout<<"before change value"<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<"value["<<i<<"]=";
        cout<<vars[i]<<endl;
    }

    setvalues(1)=21;
    setvalues(3)=41;

    for (int i=0;i<5;i++)
    {
        cout<<"changed value["<<i<<"]=";
        cout<<vars[i]<<endl;

    }

    return 0;
}

//debug:
//before change value
//        value[0]=10
//value[1]=20
//value[2]=30
//value[3]=40
//value[4]=50
//changed value[0]=10
//changed value[1]=21
//changed value[2]=30
//changed value[3]=41
//changed value[4]=50
