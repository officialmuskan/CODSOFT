// Develop a calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division. Allow the user to input two numbers and choose an operation to perform.
#include <iostream>
using namespace std;
int main()
{
    char choice, again;
    double n1, n2, ans;
    cout << "\t\t\t\t\t\t---------------------------------" << endl;
    cout << "\t\t\t\t\t\t Welcome To The Basic Calculator   " << endl;
    cout << "\t\t\t\t\t\t---------------------------------" << endl;

    do
    {
        cout << "\nEnter first operand : ";
        cin >> n1;
        
        cout << "Enter second operand : ";
        cin >> n2;
        cout << "Choose an operation(+, -, *, /) : ";
        cin >> choice;

        switch (choice)
        {
        case '+':
            ans = n1 + n2;
            cout << n1 << choice << n2 << " = " << ans << endl;
            break;
        case '-':
            ans = n1 - n2;
            cout << n1 << choice << n2 << " = " << ans << endl;
            break;
        case '*':
            ans = n1 * n2;
            cout << n1 << choice << n2 << " = " << ans << endl;
            break;
        case '/':
            ans = n1 / n2;
            cout << n1 << choice << n2 << " = " << ans << endl;
            break;

        default:
            cout << "Invalid Operation!! Use (+, -, *, /) \n";
            break;
        }
        cout << "\nWould you like to perform another calculation? (y/n):";
        cin >> again;
    } while (again == 'y' || again == 'Y');

    return 0;
}
