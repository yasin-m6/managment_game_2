#include "manager.h"
#include<iostream>
#include<ctime>
using namespace std;
//#include<iostream>

Manager::Manager(QObject *parent) : QObject(parent)
{
    my_date = time(0);

    cerr << my_date << endl;

}

int Manager::get_time()
{
    return static_cast<int>((difftime(time(0) , my_date)));
}
