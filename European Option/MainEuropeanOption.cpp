// MainEuropeanOption.cpp
//
// This file is the main file for the European Option Class
// In this file, we prompt the user for inputs to the option, and return
// the price of the option

#include "EuropeanOption.cpp"

#include <iostream>

int main()
{  
    EuropeanOption optionInst;
    string opType;

    cout << "Please enter the type of option 'C = Call, P = Put'" << endl;

    cin >> opType;

    if (opType == "C"){
        optionInst.optType = "C";
    }else if (opType == "P"){
        optionInst.optType = "P";
    }
    cout << opType;

    return 0;
}
