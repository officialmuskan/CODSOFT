// Create a program that manages student Marks. Allow the user to input student names and their corresponding Marks. Calculate the average Marks and display it along with the highest and lowest Marks
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void inputMarks(vector<double> &sMarks, int sub)
{
    double marks;
    cout << "Enter your marks in " << sub << " subjects : ";
    for (int i = 0; i < sub; i++)
    {
        cin >> marks;
        sMarks.push_back(marks);
    }
}

double totalMarks(vector<double> &sMarks)
{
    if (sMarks.empty())
        return 0;

    double total = 0;
    for (int i = 0; i < sMarks.size(); i++)
    {
        total += sMarks[i];
    }
    return total;
}

double highestMarks(vector<double> &sMarks)
{
    if (sMarks.empty())
        return 0;

    double highest = sMarks[0];
    for (int i = 0; i < sMarks.size(); i++)
    {
        if (sMarks[i] > highest)
            highest = sMarks[i];
    }
    return highest;
}

double lowestMarks(vector<double> &sMarks)
{
    if (sMarks.empty())
        return 0;

    double lowest = sMarks[0];
    for (int i = 0; i < sMarks.size(); i++)
    {
        if (sMarks[i] < lowest)
            lowest = sMarks[i];
    }
    return lowest;
}

int main()
{
    int sub;
    string sName;
    vector<double> sMarks;
    cout << "Enter Name of Student:  ";
    getline(cin, sName);
    cout << "Enter No of Subjects:  ";
    cin >> sub;
    inputMarks(sMarks, sub);
    int total = totalMarks(sMarks);
    double avg = total/double(sub);
    double highest = highestMarks(sMarks);
    double lowest = lowestMarks(sMarks);
    cout <<endl<< sName << "\nAverage Marks: " << avg;
    cout << "\nHighest Marks: " << highest;
    cout << "\nLowest Marks: " << lowest << endl;
    

    return 0;
}
