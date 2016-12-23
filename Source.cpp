#include<iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ofstream myfile;
	ofstream impfile;
	string command;

	//Taking user input
	cout << "Write the command " << endl;
	getline(std::cin, command, 'q');
	myfile.open("File1.txt");
	if (myfile.is_open())
	{
		myfile << command;
	}
	else cout << "Error opening file" << endl;
	myfile.close();

	//Seperating on the basis of spaces
	ifstream dfile("File1.txt");
	string filetext;
	string array[20];
	//string array2[20];
	if (dfile.is_open())
	{
		for (int i = 0; i < 20; i++)
		{
			getline(dfile, filetext, ';');
			array[i] = filetext;
		}
	}
	else
	{
		cout << "Error opening file " << endl;
	}
	/*
	for (int k = 0; k < 10; k++)

	{
	cout << array[k] << endl;
	}*/

	//sending it to another file

	impfile.open("File2.txt");
	if (impfile.is_open())
	{
		for (int j = 0; j < 20; j++)
		{
			impfile << array[j] << endl;
		}
	}
	else cout << "Error opening file" << endl;
	impfile.close();


	//seperating on the basis of semi colon
	ifstream d2file("File2.txt");
	string filetext2;
	string array2[20];
	if (d2file.is_open())
	{
		for (int i = 0; i < 20; i++)
		{
			getline(d2file, filetext2, ' ');
			array2[i] = filetext2;
		}
	}
	else
	{
		cout << "Error opening file " << endl;
	}

	//Sending it to the third file
	ofstream imp2file;
	imp2file.open("File3.txt");
	if (imp2file.is_open())
	{
		for (int j = 0; j < 20; j++)
		{
			imp2file << array2[j] << endl;
		}
	}
	else cout << "Error opening file" << endl;
	imp2file.close();

	//Seperating on the basis of operators
	ifstream d3file("File3.txt");
	string filetext3;
	string array3[20];
	if (d3file.is_open())
	{
		for (int i = 0; i < 20; i++)
		{
			getline(d3file, filetext3, '<');
			array3[i] = filetext3;
		}
	}
	else
	{
		cout << "Error opening file " << endl;
	}


	//Sending to another file
	ofstream imp3file;
	imp3file.open("File4.txt");
	if (imp3file.is_open())
	{
		for (int j = 0; j < 20; j++)
		{
			imp3file << array3[j] << endl;
		}
	}
	else cout << "Error opening file" << endl;
	imp3file.close();

	//Seperating on the basis of >>

	ifstream d4file("File4.txt");
	string filetext4;
	string array4[20];
	if (d4file.is_open())
	{
		for (int i = 0; i < 20; i++)
		{
			getline(d4file, filetext4, '>');
			array4[i] = filetext4;
		}
	}
	else
	{
		cout << "Error opening file " << endl;
	}


	//Sending to another file
	ofstream imp4file;
	imp4file.open("File5.txt");
	if (imp4file.is_open())
	{
		for (int j = 0; j < 20; j++)
		{
			imp4file << array4[j] << endl;
		}
	}
	else cout << "Error opening file" << endl;
	imp4file.close();
}
