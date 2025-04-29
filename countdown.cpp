#include <iostream>
using namespace std;

int countDown(int num) {
    if (num == 0) {
		cout << num << endl;
        return 0;
    }
    else if (num < 0) {
		cout << num << endl;
        return countDown(num + 1);
    }
    else {
		cout << num << endl;
        return countDown(num - 1);
    }

}

int main()
{
    int num;
	cout << "Enter a number: ";
	cin >> num;
	int result = countDown(num);
    if (result != 0) {
        printf("%d\n", result);
    }
    else {
        cout << "Countdown complete!\n" << endl;
    }
    return 0;
}


