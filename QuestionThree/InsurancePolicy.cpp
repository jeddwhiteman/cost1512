#include <string>
#include "InsurancePolicy.h"


using namespace std;


InsurancePolicy::InsurancePolicy()
{
    policyNr = 0;
    policyHolder = "";
    annualRate = 0.00;
}

InsurancePolicy::InsurancePolicy(int pNr, string pHolder, double aRate)
{
    policyNr = pNr;
    policyHolder = pHolder;
    annualRate = aRate;
}

void InsurancePolicy::setPolicy(int pNr, string pHolder, double aRate)
{
    policyNr = pNr;
    policyHolder = pHolder;
    annualRate = aRate;
}

int InsurancePolicy::get_pNr() const
{
    return policyNr;
}

string InsurancePolicy::get_pHolder() const
{
    return policyHolder;
}

double InsurancePolicy::get_aRate() const
{
    return annualRate;
}
