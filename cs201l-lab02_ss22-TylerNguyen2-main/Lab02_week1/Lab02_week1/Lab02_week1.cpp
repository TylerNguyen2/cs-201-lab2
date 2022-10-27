// Lab02_week1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{

    double c = 10.95, a = 19.99, s = 18.99, v = 7.99; //Ticket Prices
    int nc = 0, na = 0, ns = 0, nv = 0; //Number or ticket holders
    int nct, nca, ncs, ncv;
    double totalC = 0, totalA = 0, totalS = 0, totalV = 0;
    double totalAmount = 0;
    string options;
    cout << "Welcome to Fun Park Menu System !!" << endl;
    
    for (int dayNum = 1; dayNum <= 3; dayNum++) {
        options = "D";
        cout << "Starting Day " << dayNum << endl;
        while (options != "Q") {
            cout << "Enter (C)hild, (A)dult, (S)enior, (V)ip or (Q)uit >>" ;
            cin >> options;
            if (options == "C")
            {
                cout << "How many children?" << endl;
                cin >> nct;
                nc += nct;
                totalC = nc * c; 

            }
            if (options == "A")
            {
                cout << "How many Adults?" << endl;
                cin >> nca;
                na += nca;
                totalA = na * a;

            }
            if (options == "S")
            {
                cout << "How many Seniors?" << endl;
                cin >> ncs;
                ns += ncs;
                totalS = ns * s;

            }
            if (options == "V")
            {
                cout << "How many VIPs?" << endl;
                cin >> ncv;
                nv += ncv;
                totalV = nv * v;

            }
            if (options == "Q")
            {
                cout << endl;
                cout << "Day " << dayNum << endl;
                cout << "       Child " << nc << " @ 10.95 = " << totalC << endl;
                cout << "       Adult " << na << " @ 19.99 = " << totalA << endl;
                cout << "       Senior " << ns << " @ 18.99 = " << totalS << endl;
                cout << "       Vip " << nv << " @ 7.99 = " << totalV << endl << endl;
                cout << "       Total = " << totalC + totalA + totalS + totalV << endl;
                nc = 0;
                na = 0;
                ns = 0;
                nv = 0;
                totalC = 0;
                totalA = 0;
                totalS = 0;
                totalV = 0;
            }




        }
    }
}
