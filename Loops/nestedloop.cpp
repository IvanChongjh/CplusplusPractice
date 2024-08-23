#include <iostream>

using namespace std;

int main()
{

    for (int i = 0 ; i < 2; ++ i )
     {

        cout<< "outer loop counting: "<< i << endl;

        for (int x = 0 ; x < 5; ++ x)
        {
            cout << "inner loop counting :"<<x<<endl;
        }

     }
     return 0;
}