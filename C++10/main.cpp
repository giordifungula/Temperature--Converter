#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int maximum(int num1, int num2,int num3){
    int smallest;
    if(num1 < num2)
        smallest = num1;
    smallest = num2; //else
    if(num3 < smallest) //new if
        smallest = num3;
    return smallest;
}

double tempErature(double temp){
    return (temp - 32.0)* (5.0/9.0);
}

double cToFer(double temp){
 return (temp * (5.0/9.0) + 32.0);
}

double convertTemp(double temp, char scale){
    if(scale == 'c')
        return tempErature(temp);
    else if(scale == 'f')
        return cToFer(temp);
}


int main()
{
//    int number1,number2,number3,maxNum;
//    cout<< "Enter the first Number"<<endl;
//    cin >>number1;
//    cout<< "Enter the second Number"<<endl;
//    cin >>number2;
//    cout<< "Enter the third Number"<<endl;
//    cin >>number3;
//
//    maxNum = maximum(number1,number2,number3);
//    cout << "The maximum value is " << maxNum<<endl;\

//double ferTemp, celsuis;
//    cout << "Enter a celsuis temperature ";
//    cin >>celsuis;
//    ferTemp = cToFer(celsuis);
//    cout << celsuis <<" Converted to fehrianit is "<<endl;
//    cout<< ferTemp <<endl;

double temp,convertedTemp;
char tempScale;

cout << "Enter a temperature to convert to scale and convert to :"<<endl;
cin>>temp >> tempScale;
convertedTemp = convertTemp(temp, tempScale);
cout << "The converted temperature is:"<<endl;
cout << convertedTemp;
}

