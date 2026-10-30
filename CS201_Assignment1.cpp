#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    const long long studentNumber = 260404104;   
    cout << "Student Name: Mehtab Hussain" << endl;
    cout << "Student ID  : BC" << studentNumber << endl;
    cout << endl;


    int d2 = (studentNumber / 10000000) % 10;    
    int d4 = (studentNumber / 100000) % 10;     
    int d5 = (studentNumber / 10000) % 10;       
    int d6 = (studentNumber / 1000) % 10;        
    int d8 = (studentNumber / 10) % 10;          

    cout << "Extracted digits: " << d2 << ", " << d4 << ", "
         << d5 << ", " << d6 << ", " << d8 << endl;
    cout << endl;


    int networkTickets = d2;
    int labTickets     = d4;
    int lmsTickets     = d5;
    int accountTickets = d6;
    int hardwareTickets = d8;


    const int MINUTES_PER_TICKET = 20;
    int networkTime  = networkTickets  * MINUTES_PER_TICKET;
    int labTime      = labTickets      * MINUTES_PER_TICKET;
    int lmsTime      = lmsTickets      * MINUTES_PER_TICKET;
    int accountTime  = accountTickets  * MINUTES_PER_TICKET;
    int hardwareTime = hardwareTickets * MINUTES_PER_TICKET;


    int lightCount = 0, moderateCount = 0, heavyCount = 0;


    int networkStatus, labStatus, lmsStatus, accountStatus, hardwareStatus;

    if (networkTickets >= 7)      { networkStatus = 2; heavyCount++; }
    else if (networkTickets >= 4) { networkStatus = 1; moderateCount++; }
    else                          { networkStatus = 0; lightCount++; }

    if (labTickets >= 7)          { labStatus = 2; heavyCount++; }
    else if (labTickets >= 4)     { labStatus = 1; moderateCount++; }
    else                          { labStatus = 0; lightCount++; }

    if (lmsTickets >= 7)          { lmsStatus = 2; heavyCount++; }
    else if (lmsTickets >= 4)     { lmsStatus = 1; moderateCount++; }
    else                          { lmsStatus = 0; lightCount++; }

    if (accountTickets >= 7)      { accountStatus = 2; heavyCount++; }
    else if (accountTickets >= 4) { accountStatus = 1; moderateCount++; }
    else                          { accountStatus = 0; lightCount++; }

    if (hardwareTickets >= 7)     { hardwareStatus = 2; heavyCount++; }
    else if (hardwareTickets >= 4){ hardwareStatus = 1; moderateCount++; }
    else                          { hardwareStatus = 0; lightCount++; }


    cout << "----- University IT Helpdesk WorkLoad Report -----" << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << left << setw(24) << "Unit"
         << setw(16) << "Total Tickets"
         << setw(20) << "Resolution Time"
         << "Status" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    cout << left << setw(24) << "Network Support:" << setw(16) << networkTickets
         << setw(20) << networkTime;
    if (networkStatus == 2) cout << "HEAVY";
    else if (networkStatus == 1) cout << "MODERATE";
    else cout << "LIGHT";
    cout << endl;

    cout << left << setw(24) << "Computer Lab Support:" << setw(16) << labTickets
         << setw(20) << labTime;
    if (labStatus == 2) cout << "HEAVY";
    else if (labStatus == 1) cout << "MODERATE";
    else cout << "LIGHT";
    cout << endl;

    cout << left << setw(24) << "LMS Support:" << setw(16) << lmsTickets
         << setw(20) << lmsTime;
    if (lmsStatus == 2) cout << "HEAVY";
    else if (lmsStatus == 1) cout << "MODERATE";
    else cout << "LIGHT";
    cout << endl;

    cout << left << setw(24) << "Account Support:" << setw(16) << accountTickets
         << setw(20) << accountTime;
    if (accountStatus == 2) cout << "HEAVY";
    else if (accountStatus == 1) cout << "MODERATE";
    else cout << "LIGHT";
    cout << endl;

    cout << left << setw(24) << "Hardware Support:" << setw(16) << hardwareTickets
         << setw(20) << hardwareTime;
    if (hardwareStatus == 2) cout << "HEAVY";
    else if (hardwareStatus == 1) cout << "MODERATE";
    else cout << "LIGHT";
    cout << endl;
    cout << endl;

    cout << "===== SUMMARY =====" << endl;
    cout << "LIGHT desks    : " << lightCount << endl;
    cout << "MODERATE desks : " << moderateCount << endl;
    cout << "HEAVY desks    : " << heavyCount << endl;

    return 0;
}
