#include <iostream>
using namespace std;
int main ()
{
    double weight=0, height=0;
    cout<< "Enter Height\n";
    cin >> height;
    cout<< "Enter Weight\n";
    cin>> weight;
    double bmi = weight/(height*height);
    if (bmi<18.5)
        {
            cout<< "You are under weight: " << bmi.precision(3);
    }
    else if(bmi>=18.5 && bmi<=25)
        {
            cout<< "Your age average";
    }
    else if(bmi>25)
        {
            cout<< "obese";
    }
    else
        {
            cout<<"utc";
    }
    system("pause")
    return 0;
}

