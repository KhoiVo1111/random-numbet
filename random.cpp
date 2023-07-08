#include <bits/stdc++.h>
using namespace std;                                 //This is C++  (.cpp) file
int a,b;
main()
{
    cout<<"                              Random number                                     ";
    cout<<endl;
    cout<<"-----------DATA-------------------";
    cout<<endl;


    cout<<"min & max    ";      
    cout<<"Min: ";
    cin>>a;
    cout<<endl;
    cout<<"Max: ";
    cin>>b; 
    cout<<endl;
    

    cout<<"---------INFORMATION--------------";
    cout<<endl;
    cout<<"Min: " << a;
    cout<<endl;
    cout<<"Max: " << b;
    cout<<endl;
    srand(time(NULL));
int c=rand()%(b-a+1)+a;
    cout<<"----------RESULT------------------";
    cout<<endl;
    cout<<"Random number is  " <<    c  ;
    cout<<endl;


}
