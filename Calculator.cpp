#include"clientA.h"
#include"clientB.h"

int main()
{
    int operation;
    double a, b;
    char choice;
    cout << "Enter first number:";
    cin >> a;
    cout << "\nEnter second number:";
    cin >> b;
    do
    {
        cout << "\nWhich operations would you like to perform from the following" << endl;
        cout << "Enter 1 to perfrom a+b" << endl;
        cout << "Enter 2 to perfrom a-b" << endl;
        cout << "Enter 3 to perfrom a/b" << endl;
        cout << "Enter 4 to perfrom a*b" << endl;
        cout << "Enter 5 to perfrom a mod b" << endl;
        cout << "Enter 6 to perfrom a raised to power b" << endl;
        cout << "Enter 7 to perfrom square root of a" << endl;
        cout << "Enter 8 to perfrom sin of a" << endl;
        cout << "Enter 9 to perfrom cos of a" << endl;
        cout << "Enter 10 to perfrom tan of a" << endl;
        cin >> operation;
        switch (operation)
        {
        case 1:
            cout << "your answer is:" << Add(a,b);
            break;

        case 2:
            cout << "\nYour answer is:" << Subtract(a,b);
            break;
        case 3:
            cout << "\nYour answer is:" << Divide(a, b);
            break;
        case 4:
            cout << "\nYour answer is:" << Multiply(a, b);
            break;
        case 5:
            cout << "\nYour answer is:" << takeMod(a, b);
            break;
        case 6:
            cout << "\nYour answer is:" << takePower(a, b);
            break;
        case 7:
            cout << "\nYour answer is:" << takeSquareRoot(a);
            break;
        case 8:
            cout << "\nYour answer is:" << takeSin(a);
            break;
        case 9:
            cout << "\nYour answer is:" << takecos(a);
            break;
        case 10:
            cout << "\nYour answer is:" << taketan(a);
            break;
        default:
            cout << "Invalid input";
        }
    
        cout << "\nPress y if you want to use calculator again else press any other character:";
        cin >> choice;
    } while (choice == 'y');
    cout << "exited Calculator"<< endl;

    return 0;
}
