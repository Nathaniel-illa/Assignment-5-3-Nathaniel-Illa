#include        <iostream>
#include        <iomanip>
using   namespace       std;

int main()
{
    int i, begin, end, sum=0 ;

	 // Input two values from the user
    cout << "Enter the first value: ";
    cin >> begin;
    cout << "Enter the second value: ";
    cin >> end;

    // Ensure the first value is less than the second value
    while (begin > end) {
        cout << "The first value must be less than the second value. Please re-enter the values." << endl;
        cout << "Enter the first value: ";
        cin >> begin;
        cout << "Enter the second value: ";
        cin >> end;
    }

    // Iterate through the range and sum even numbers
    for (int i = begin; i <= end; ++i) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    // Output the result
    cout << "The sum of even values is " << sum << endl;
}
