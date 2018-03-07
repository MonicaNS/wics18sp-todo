#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/* Prototypes */
void ReadFile(string fileName);
void WriteFile(string fileName, string text);

/* Global Variables */
ifstream fileReader;
ofstream fileWriter;

/* Start of Program */
int main()
{
  string todoFile = "todo.txt";
  ReadFile(todoFile);
  WriteFile(todoFile, "[x] Complete lesson 1");

}

/* Function Declarations */
void ReadFile(string fileName)
{
    fstream inFile;
    string s;
    inFile.open ("todo.txt");
    if (!inFile)
    {
        cout << "Cannot open the file" << endl;

    }
    while (getline(inFile, s))
    {
        cout << s << endl;
    }
    inFile.close();
    return;
}

void WriteFile(string fileName, string text)
{
    ofstream outFile;
    outFile.open("todoFile.txt", ios::out| ios::app);

    cout << "[x] Complete lesson 1" << endl;

    outFile.close();

    return;
}
