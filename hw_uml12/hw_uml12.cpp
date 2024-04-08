// hw_uml12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

class Airport abstract { //точка назначение
public:
    string name;
    double price;
    double time;

    void Go() {
        cout << "name: " << name << endl;
        cout << "price: " << price << endl;
        cout << "time: " << time << endl;
        cout << endl;
    }
};

class Bike: public Airport {
public:
    Bike() {
        name = "bike";
        price = 0;
        time = 60;
    }

};

class Bus : public Airport {
public:
    Bus() {
        name = "bus";
        price = 10;
        time = 30;
    }


};

class Taxi : public Airport {
public:
    Taxi() {
        name = "taxi";
        price = 100;
        time = 15;
    }

};


class SelectedWay
{
    Airport* airport;

public:
    void setTransport(Airport* a)
    {
        this->airport = a;
    }
    void Go() {
        if (airport) {
            airport->Go();
        }
    }
};

int main()
{
    SelectedWay transport;

    Bike bike;
    transport.setTransport(&bike);
    transport.Go();

    Bus bus;
    transport.setTransport(&bus);
    transport.Go();

    Taxi taxi;
    transport.setTransport(&taxi);
    transport.Go();
   


  

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
