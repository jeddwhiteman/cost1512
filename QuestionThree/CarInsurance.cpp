#include <iostream>

class CarInsurance : public InsurancePolicy
{
public:
    CarInsurance()
    {
        excess = 0.00;
    }

    CarInsurance(int pNr, string pHolder, double aRate, double eValue) : InsurancePolicy(pNr, pHolder, aRate)
    {
        policyNr = pNr;
        policyHolder = pHolder;
        annualRate = aRate;
    }

    ~CarInsurance();

    double get_excess() const
    {
        return excess;
    }

    void set_excess(double eValue)
    {
        excess = eValue;
    }

private:
    double excess;
};
