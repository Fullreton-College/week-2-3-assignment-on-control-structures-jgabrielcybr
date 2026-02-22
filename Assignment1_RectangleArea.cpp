#include <iostream>

using namespace std;

int main ()
{
    double lengthOne, lengthTwo, widthOne, widthTwo;

    cout<<"Rectangle Area Comparison "<<endl;
    cout<<"Enter the length of the first rectangle "<<endl;
    cin>>lengthOne;

    cout<<"Enter the width of the first rectangle "<<endl;
    cin>>widthOne;

    cout<<"Enter the length of the second rectangle "<<endl;
    cin>>lengthTwo;

    cout<<"Enter the width of the second rectangle "<<endl;
    cin>>widthTwo;

    if ( (lengthOne * widthOne) > (lengthTwo * widthTwo) )
    {
        cout<<"The area of the first rectangle is "<<lengthOne * widthOne<<endl;
        cout<<"The area of the second rectangle is "<<lengthTwo * widthTwo<<endl;
        cout<<"The area of the first rectangle is greater than that of the second"<<endl;
    }
    
    else 
    {   
        cout<<"The area of the first rectangle is "<<lengthOne * widthOne<<endl;
        cout<<"The area of the second rectangle is "<<lengthTwo * widthTwo<<endl;
        cout<<"The area of the second rectangle is greater than that of the first"<<endl;
    }

    return 0;
}
