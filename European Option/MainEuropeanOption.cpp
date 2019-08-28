// MainEuropeanOption.cpp
//
// This file is the main file for the European Option Class
// In this file, we prompt the user for inputs to the option, and return
// the price of the option

#include "EuropeanOption.cpp"

#include <iostream>

int main()
{  
    EuropeanOption optionInst;  // Option object instance
    string opType;              // Option type (C = Call, P = Put)
    double r;                   // Interest rate
    double sig;                 // Vol as sigma
    double K;                   // Strike price
    double T;                   // Exp date
    double U;                   // Current price
    double b;                   // Cost of carry

    string userInput;           // Users input

    cout << "Welcome to [OPTION CRUNCH]! Straddle yourself in!" << endl;
    cout << "This program will calculate the price and delta of a European Put or Call option based on the Black Scholes Meriton Model" << endl;
    cout << "Please enter the type of option you want to calculate 'C = Call, P = Put'" << endl;

    cin >> opType;

    // TODO: Make sure that I include try catch statements instead of if
    if (opType == "C"){
        optionInst.optType = "C";
    }else if (opType == "P"){
        optionInst.optType = "P";
    }else{
        cout << "You have entered the wrong input!" << endl;
    }

    cout << "Please enter the current risk free rate (interest rate)" << endl;
    cin >> r;
    // TODO: Need to check if the input is a double or not
    optionInst.r = r;

    cout << "Please enter the volatility of the asset as sigma" << endl;
    cin >> sig;
    optionInst.sig = sig;
    // TODO: Need to check if the input is a double or not

    cout << "Please enter the current strike price of the option" << endl;
    cin >> K;
    optionInst.K = K;

    cout << "Please enter the expiry date of the option" << endl;
    cin >> T;
    optionInst.T = T;

    cout << "Please enter the current price of the asset" << endl;
    cin >> U;
    optionInst.U = U;

    cout << "Please enter the cost of carry" << endl;
    cin >> b;
    optionInst.b = b;

    cout << "Thankyou for that information! You would like to calculate the option price or delta or both?" << endl;
    cout << "P = Price, D = Delta, B = Both" << endl;
    cin >> userInput;
    if (userInput == "P"){
        cout << "The price of the option is: "  << endl;
        cout << optionInst.Price() << endl;
    }else if(userInput == "D"){
        cout << "The delta of the option is: "  << endl;
        cout << optionInst.Delta() << endl;
    }else if(userInput == "B"){
        cout << "The price of the option is: "  << endl;
        cout << optionInst.Price() << endl; 
        cout << "The delta of the option is: "  << endl;
        cout << optionInst.Delta() << endl;
    }else{
        cout << "You did not enter a valid input!" << endl;
    }

    cout << "Thank-you for using [OPTION CRUNCH]!" << endl;
    return 0;
}
