// EuropeanOption.hpp

#include <string>

class EuropeanOption{
    private:
        void init();    //Init all default values
        void copy(const EuropeanOption& o2);

        double CallPrice() const;
        double PutPrice() const;
        double CallDelta() const;
        double PutDelta() const;

    public:
        double r;       // Interest rate
        double sig;     // Vol as sigma
        double K;       // Strike price
        double T;       // Exp date
        double U;       // Current price
        double b;       // Cost of carry

        string optType; // Option name (call or a put)

    public:
        // Constructors
        EuropeanOption();                                       // Default call option
        EuropeanOption(const EuropeanOption& option2);          // Copy constructor
        EuropeanOption(const string& optionType);               // Create option type

    // Destructor
    // NOTE: The tilda deconstructs the class (i.e free up memory)
    virtual ~EuropeanOption();

    // Assignment operator
    // NOTE: I believe that this is assigning the operator a different instance of the EuropeanOption class
    EuropeanOption& operator = (const EuropeanOption& option2);

    // Calculating the option price
    double Price() const;
    double Delta() const;

    // Modifier functions
    void toggle();      // Change option type (Call->Put, Put->Call)
};

