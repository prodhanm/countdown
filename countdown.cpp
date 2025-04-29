#include <iostream>
using namespace std;

int countDown(int num) {
    if (num == 0) {
        return 0;
    }
    else if (num < 0) {
        return countDown(num + 1);
    }
    else {
        return countDown(num - 1);
    }

}

int main()
{
    return 0;
}


