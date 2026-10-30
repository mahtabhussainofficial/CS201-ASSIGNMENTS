#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    const long long studentNumber = 260404104;   

    cout << "Student Name: Mehtab Hussain" << endl;
    cout << "Student ID  : BC" << studentNumber << endl;
    cout << endl;

   
    const int RATE_5L  = 70;     
    const int RATE_19L = 180;    
    const int DISCOUNT_LIMIT = 50;  
    const int DISCOUNT_PERCENT = 10;


    int totalContainers = 0;
    int totalOriginal = 0;
    int totalDiscount = 0;
    int totalFinal = 0;

    cout << "===== COMMUNITY WATER REFILL DEPOT - DAILY REPORT =====" << endl;
    cout << endl;
    cout << left << setw(8) << "Order" << setw(10) << "Quantity"
         << setw(22) << "Package Type" << setw(15) << "Original(Rs.)"
         << setw(12) << "Discount" << "Final(Rs.)" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;


    int divisor = 10000;

    for (int order = 1; order <= 5; order++)
    {
        int digit = (studentNumber / divisor) % 10;   
        divisor = divisor / 10;

        int quantity = digit * 10;

        int original;
        if (order <= 3)
        {
            original = quantity * RATE_5L;
        }
        else
        {
            original = quantity * RATE_19L;
        }

        int discount;
        if (quantity >= DISCOUNT_LIMIT)
        {
            discount = original * DISCOUNT_PERCENT / 100;
        }
        else
        {
            discount = 0;
        }
        int finalCharge = original - discount;

        cout << left << setw(8) << order << setw(10) << quantity;
        if (order <= 3)
        {
            cout << setw(22) << "5-Litre Container";
        }
        else
        {
            cout << setw(22) << "19-Litre Container";
        }
        cout << setw(15) << original << setw(12) << discount << finalCharge << endl;

        totalContainers += quantity;
        totalOriginal += original;
        totalDiscount += discount;
        totalFinal += finalCharge;
    }

    cout << "-----------------------------------------------------------------------------" << endl;
    cout << endl;

    cout << "===== DAILY SUMMARY =====" << endl;
    cout << "Total Containers Supplied : " << totalContainers << endl;
    cout << "Total Original Charges    : Rs. " << totalOriginal << endl;
    cout << "Total Discount            : Rs. " << totalDiscount << endl;
    cout << "Final Amount Collected    : Rs. " << totalFinal << endl;
    cout << "Sales Status              : ";
    if (totalFinal < 15000)
    {
        cout << "LOW SALES" << endl;
    }
    else if (totalFinal < 30000)
    {
        cout << "NORMAL SALES" << endl;
    }
    else
    {
        cout << "HIGH SALES" << endl;
    }

    return 0;
}
