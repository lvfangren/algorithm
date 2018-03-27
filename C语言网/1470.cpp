#include<iostream>
using namespace std;
int main()
{
    int tim;
    std::cin >> tim;
    int hour=tim/3600;
    int min=(tim-hour*3600)/60;
    int sec=tim-hour*3600-min*60;
    std::cout << hour<<":"<<min<<":"<<sec << '\n';
    return 0;
}
