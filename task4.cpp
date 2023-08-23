#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    string name,line;
    int totalWords = 0;
    
    ifstream inFile;
    cout << "Enter the Name of File: ";
    cin >> name;

    inFile.open(name, ifstream::in);
    if (!inFile) {
        cout << endl << "File does not exist!";
        return 0;
    }
 
    while(getline(inFile, line))
    {  
        stringstream lineStream(line);
        while(getline(lineStream, line, ' '))
        {
            totalWords++;
        }    
    }

    inFile.close();
    cout << endl << "Total No of Words in this file are : " << totalWords << endl;
    return 0;
}


