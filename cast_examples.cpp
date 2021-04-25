#include <stdlib.h>
#include <iostream>
#include <stdio.h>

#include "PersonClasses.h"

using namespace std;

int main()
{
    ///static_cast
    double avogadro = 6.0221;
    int castedAvogadro = static_cast<double>(avogadro);

    const char* verse = "Szubi dubi ju ken dens ";
    string castedVerse = static_cast<const char*>(verse);

    cout<<castedAvogadro<<endl;
    cout<<verse<<endl;

    ////const_cast
    const int number = 5;
    const int* ptrNumber = &number; 
    int* castedPtrNumber = const_cast<int*>(ptrNumber); 
    int otherNumber = 7;
    cout<<*castedPtrNumber<<endl;

    castedPtrNumber = &otherNumber;
    cout<<*castedPtrNumber<<endl;

    ////// reinterpret_cast
    double doubleNumber = 45.6;
    double* ptrDoubleNumber = &doubleNumber;

    int* ptrIntegerNumber;
    ptrIntegerNumber = reinterpret_cast<int*>(ptrDoubleNumber);
    cout<<sizeof(*ptrDoubleNumber)<<"  "<<sizeof(*ptrIntegerNumber)<<endl;


    ///////dynamic_cast

    Chris* p = new Chris;
    Person* p2;
    p->Introduce();
    p2 = dynamic_cast<Person*>(p);

    delete p, p2;
    return 0;
}
