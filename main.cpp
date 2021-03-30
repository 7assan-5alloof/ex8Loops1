#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop..." << endl;

    while (true)
    {
        // Define needed variables
        int i = 0;
        int product = 1;
        int sum = 0;

        // Process 10 numbers
        while (i < 10)
        {
            // Get needed info
            int input;
            cout << "Enter a number: ";
            cin >> input;

            // Add the given number to the sum and multiply the product by it
            sum += input;
            product *= input;

            // Increment i to stop when 10 numbers are given
            i++;
        }

        // Display sum and product
        cout << "Sum: " << sum << endl << "Product: " << product << endl;
    }

    return 0;
}
