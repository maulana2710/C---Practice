#include <fstream>
#include <iostream>
using namespace std;

int main()
{
ofstream outputFile;
outputFile.open ("nama.txt");

cout << "file berhasil dibuat\n";
// Write four names to the file.
outputFile << "Bach\n";
outputFile << "Beethoven\n";
outputFile << "Mozart\n";
outputFile << "Schubert\n";

 //Close the file
outputFile.close();
cout << "file ditutup.\n";
return 0;
}
