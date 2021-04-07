/*
This program can be used to screen candidates for a job based 
on criteria the recruiter is interested in.
*/

#include <iostream>

using namespace std;

int main()
{
    string fluency_, confidence_, ssn_, clear_background_;
    bool fluency, confidence, ssn, clear_background;
    
    cout << "Provide the following as a true or false for the candidate: " << endl;
    cout << "Is the candidate fluent? ";
    cin >> fluency_;
    if (fluency_ == "yes")
        fluency = true;
    
    cout << "Is the candidate confident? ";
    cin >> confidence_;
    if (confidence_ == "yes")
        confidence = true;
    
    cout << "Does the candidate have a social security number? ";
    cin >> ssn_;
    if (ssn_ == "yes")
        ssn = true;
    
    cout << "Is the candidate background clear? ";
    cin >> clear_background_;
    if (clear_background_ == "yes")
        clear_background = true;
    
    if (fluency == true && confidence == true && ssn == true && clear_background == true)
    {
        cout << "Yes, you can move on to the next stage!" << endl;
    }
    return 0;
}