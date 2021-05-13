#include <iostream>
#include <fstream>

using namespace std;

int countStudents(string file)
{
	int counter = 0;
	ifstream in;
	in.open(file);
	string str;
	while (in >> str)
	{
		counter++;
	}
	in.close();
	return counter;
}

string* readFile(string filename, int len)
{
	string* names = new string[len];
	ifstream in;
	in.open(filename);
	int i = 0;
	while (in >> names[i])
	{
		i++;
	}
	in.close();
	return names;
}

bool isName(string* names, string name, int len)
{
	for (int i = 0; i < len; i++)
	{
		
		if (name == names[i]) return true;
	}
	return false;
}

void main()
{
	string* history_students, *prog_students;
	int len_hist = countStudents("ln2.txt"), len_prog = countStudents("ln1.txt");
	history_students = readFile("ln2.txt", len_hist);
	prog_students = readFile("ln1.txt", len_prog);
	ofstream out;
	out.open("res.txt");
	if (out.is_open())
	{
		for (int i = 0; i < len_prog; i++)
		{
			if (!isName(history_students, prog_students[i], len_hist))
			{
				out << prog_students[i] << endl;
			}
		}
	}
}