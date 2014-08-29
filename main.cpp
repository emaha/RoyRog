#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc,char *argv[])
{
    srand (time(NULL));
    int money = 5000;
    int bet=1;
    int zero, one;

    zero = one = 0;

    for(int i=0;i<1000;i++)
    {
        bet = 1;
        while(1==1)
        {
            money-=bet;


            int rnd = rand()%2;
            cout << rnd << "   " << money << endl;
            if(rnd==1)
            {
                money+=bet*2;
                bet=1;
                one++;
                break;
            }

            bet*=2;
            zero++;
        }


    }


    cout << zero << "\t" << one << endl;

    return 0;
}
