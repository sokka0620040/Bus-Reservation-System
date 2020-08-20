#ifndef BUS_H
#define BUS_H

#include <iostream>
using namespace std;
class Bus
{
 private:
    string busname;
    string origin;
    string dest;

public:
    Bus();
    Bus(string busname, string origin, string dest);
    string getBusname();
    string getOrigin();
    string getDest();
    void setBusname(string busname);
    void setOrigin(string origin);
    void setDest(string dest);
    void updateBus();
    ~Bus();
};
#endif 
