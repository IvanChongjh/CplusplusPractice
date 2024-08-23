#include <iostream>
using namespace std;

int main(){

    int numbers[5] = {1,2,3,4,5};
    for (int i : numbers) // for each loop will iterate through the array displaying all contents
    {
        cout << i << endl;
    }
    return 0;
}