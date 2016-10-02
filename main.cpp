// T. Robert Ward
// May 28, 2013


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "***** OVERTIME PAY CACULATOR *****\n" << endl;

    double payRate, hours, OTpay, grossPay, regPay;

    cout << "Enter in the hours worked this week: ";
    cin >> hours;

    cout << "\nEnter in the pay rate for this employee: ";
    cin >> payRate;

    if (hours > 40)
    {
        OTpay = (hours - 40) * payRate * 1.5;
        regPay = 40 * payRate;
    }
    else
    {
        OTpay = 0;
        regPay = hours * payRate;
    }

    grossPay = regPay + OTpay;

    cout << "\n\nThis Employee's pay is:" << endl;
    cout << "Regular Pay\tOvertime Pay\tGross Pay" << endl;
    cout << fixed << setprecision(2);
    cout << "  " << regPay << "\t  " << OTpay << "\t  " << grossPay << "\n\n\n";

    return 0;
}
