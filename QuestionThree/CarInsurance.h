#ifndef INSURANCE_H
#define INSURANCE_H

#include <iostream>
#include <string>

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

    double get_excess() const ()

    void set_excess(double eValue)()

private:
    double excess;
};

#endif
