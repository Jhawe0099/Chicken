#include<iostream>
#include<fstream>// File-stream. Needed to use files 

using namespace std;

int main()
{
	ofstream outputFile;
	outputFile.open("DwarfShafkat");

	cout << "Now writing data to the file. \n";
	outputFile << " Nintendo Switch ";
	outputFile << " Playstation 4 ";
	outputFile << " Xbox One ";
	outputFile << " PC ";

	outputFile.close();

	cout << "DONE! \n";

	system("pause");

	return 0;
}