#include<iostream>
#include <fstream>

using namespace std;

struct Student
{
	string name, surname, group, student_ticket;
	int course, groupnum;
};
int countStudents(string file)
{
	int counter = 0;
	ifstream in;          
	in.open(file); 
	string str;
	while (in >> str >> str >> str >> str >> str)
	{
		counter++;
	}
	in.close();
	return counter;
}

Student* courseSort(Student* students, int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (students[i].course < students[j].course)
			{
				Student tmp = students[i];
				students[i] = students[j];
				students[j] = tmp;
			}
		}
	}

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (students[i].course == students[j].course)
			{
				if (students[i].groupnum < students[j].groupnum)
				{
					Student tmp = students[i];
					students[i] = students[j];
					students[j] = tmp;
				}
			}
		}
	}
	return students;
}

void main()
{
	Student* students;
	int len = countStudents("1 (2).txt");
	students = new Student[len];
	ifstream in;          
	in.open("1 (2).txt"); 
	int i = 0;
	if (in.is_open())
	{
		while (in >> students[i].surname >> students[i].name >> students[i].course >> students[i].group >> students[i].groupnum)
		{
			i++;
		}
	}
	in.close();

	ofstream of;
	of.open("2.txt");
	if (of.is_open())
	{
		courseSort(students, len);
		for (int i = 0; i < len; i++)
		{
			of << students[i].name << " " << students[i].surname << " " << students[i].course << " " << students[i].group << " " << students[i].groupnum << endl;
		}
	}
}