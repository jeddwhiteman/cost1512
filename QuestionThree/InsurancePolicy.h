#ifndef INSURANCE_H
#define INSURANCE_H

#include <iostream>
#include <string>
using namespace std;

class InsurancePolicy {
public:
    InsurancePolicy();
    InsurancePolicy(int pNr, string pHolder, double aRate);

    ~InsurancePolicy();

    void setPolicy(int pNr, string pHolder, double aRate);

    int get_pNr() const;
    string get_pHolder() const;
    double get_aRate() const;

    void showPolicy(ostream &out) const;

private:
    int policyNr;
    string policyHolder;
    double annualRate;
};

#endif
