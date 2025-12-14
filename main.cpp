#include <iostream>
#include <cmath>
#include "Math.h"

using namespace std;
// exercise: write code to swap the value of 2 variables.
int mai() {
    const double pi = 3.14;

    // naming conventions
    int file_size; //snake case
    int FileSize; //Pascal Case - for classes
    // int fileSize; //Camel Case - for functions
    int iFileSize; //Hungarian notation

    int x = 10;
    //int y = x++; // x = 11 y = 10
    int z = ++x;
    // std::cout << z;

    double m = 1 + 2 * 3;
    // std::cout << b;

    double a = 10;
    double b = 5;
    double c = (a + 10) / 3 * b;
    // std::cout << c;

    int product = Multiply(a, b);
    std::cout << product << endl;

    // Writing output to the console
    int n = 10;
    int p = 20;
    // cout << "n = " << x << endl
    //      << "p = " << p;

    // project, Sales = 95000, state tax = 4%, country tax = 2%
    double sales = 95000;
   // cout << "Sales: $" << sales << endl;

    const double stateTaxRate = .04;
    double stateTax = sales * .04;
   // cout << "State Tax: $" << stateTax << endl;

    const double countyTaxRate = .04;
    double countyTax = sales * countyTaxRate;
   // cout << "State Tax: $" << countyTax << endl;

    double totalTax = stateTax + countyTax;
   // cout << "Total Tax: $" << totalTax << endl;

    // input / reading data from the console
  //  cout << "Enter values for x and y: ";
    double q;
    double r;
    cin >> q >> r;
  //  cout << q + r;

    // convert farenheit to celcius
  //  cout << "Farenheit: ";
    int farenheit;
  //  cin >> farenheit;
    double celcius = (farenheit - 32) / 1.8;
 //   cout << celcius;

    // working with the standard library
    double result = pow(2, 3);
//    cout << result;

    //write a program to calculate the area of a circle
 //   cout << "Enter your radius: ";
    double radius;
  //  cin >> radius;

    double circleArea = pi * radius * radius;
 //   cout << circleArea;


    // writing to the console

    // fundamental data types
    // built-in types
    // numbers
    // Boolean values, characters and strings,
    double price = 99.99;
    float interestRate = 3.67f;
    long fileSize = 90000L;
    char letter = 'a';
    bool isValid = false;

    // hexadecimals represent colors eg, RGB.
    return 0;

}