#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct dataHandler
{
    string name;
    int accNum = 0;
    double balance = 0;
};

int main()
{
    dataHandler userInput;
    dataHandler fileOutput;

    int userChoice;
    char moreDetails;

    bool wL1 = true;
    bool wL2 = true;

    ofstream outFile;
    ifstream inFile;

    while (wL1)
    {
        cout << "You can:\n1 - Enter new details.\n";
        cout << "2 - Display user details\n";
        cout << "3 - Display accounts with more than 10,000\n";
        cout << "4 - Exit the program\n";
        cout << "Enter 1, 2, 3, 4\n";

        cin >> userChoice;

        if (userChoice == 1)
        {
            outFile.open("UserDetails.txt");

            while (wL2)
            {
                if (outFile)
                {
                    cout << "Please enter your name\n";
                    cin.ignore();
                    getline(cin, userInput.name);
                    cout << "Please enter your account number\n";
                    cin >> userInput.accNum;
                    cout << "Please enter your balance\n";
                    cin >> userInput.balance;

                    outFile << userInput.name << "\n";
                    outFile << userInput.accNum << "\n";
                    outFile << userInput.balance << "\n";

                    cout << "Do you want to enter more details? y/n\n";
                    cin >> moreDetails;
                    if (moreDetails == 'y' || moreDetails == 'Y')
                    {
                        continue;
                    }
                    else if (moreDetails == 'n' || moreDetails == 'N')
                    {
                        wL2 = false;
                        break;
                    }
                }
            }
            outFile.close();
        }
        if (userChoice == 2)
        {
            cout << "\n";
            wL2 = true;
            inFile.open("UserDetails.txt");
            if (inFile)
            {
                while (inFile >> fileOutput.name)
                {
                    cout << "Account Name : \n";

                    getline(inFile, fileOutput.name);
                    cout << fileOutput.name;
                    cout << "\n";

                    cout << "Account Number : \n";
                    inFile >> fileOutput.accNum;
                    cout << fileOutput.accNum;
                    cout << "\n";

                    cout << "Account balance : \n";
                    inFile >> fileOutput.balance;
                    cout << fileOutput.balance;
                    cout << "\n";
                    //break;
                }
            }
        }
        if (userChoice == 3)
        {
            cout << "\n";
            wL2 = true;
            inFile.open("UserDetails.txt");
            if (inFile)
            {
                while (inFile >> fileOutput.name)
                {
                    cout << "Account Name : \n";

                    getline(inFile, fileOutput.name);
                    cout << "Account Number : \n";
                    inFile >> fileOutput.accNum;
                    cout << "Account balance : \n";
                    inFile >> fileOutput.balance;

                    if (fileOutput.balance >= 10000)
                    {
                        cout << "Account Name : \n";
                        cout << fileOutput.name;
                        cout << "\n";
                        cout << "Account Number : \n";
                        cout << fileOutput.accNum;
                        cout << "\n";
                        cout << "Account balance : \n";
                        cout << fileOutput.balance;
                        cout << "\n";
                    }
                    //break;
                }
            }
        }
    }
}