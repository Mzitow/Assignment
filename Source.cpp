#include <iostream>
#include "Header.h"



using namespace std;

class Student {

private:

	char grade = ' ';
	int semester = 0;
	int degree =  0;

	//q(iv)
	int year = 0;
	int studentId = 0;

public:

	static int highscore;

	//Default constructor to int. semester
	Student(){
		cout << "Please enter your semester: " << endl;
		int sem;
		cin >> sem;
		this->semester = sem;
	}

	//parameterized constructor
	Student(int degree_to_initialize) {

		this->degree = degree_to_initialize;

	}
	

	char find_student_grade() {

		if (this->degree > 90) {

			return 'A';
		}
		else if (this->degree < 90 && this->degree > 80)
		{
			return 'B';
		}
		else if (this->degree < 80 && this->degree > 70)
		{
			return 'C';
		}

		else if (this->degree < 70 && this->degree > 60)
		{
			return 'D';
		}
		else
		{
			return 'F';
		}


		return 'G';
	}

	~Student() {

		cout << "Student ID: " << this->studentId << " Grade : " << this->grade << endl;
	}

	//setter and getter for the semester
	int get_semester()
	{
		return this->semester;
	}

	void set_semester(int x)
	{
		this->semester = x;
	}


	int get_studentID()
	{
		return this->studentId;
	}

	void set_studentID(int x)
	{
		this->studentId = x;
	}

};

class SCV {

 
private:

	int total_salary;
	int commision;
	int base_salary = 200;
	

public:


	int calculate_commision(int goods_worth)
	{
		this->commision = 0.09 * goods_worth;

		return this->commision;
	}


	

	 int get_total_salary()
	 {
		 return base_salary + this->commision;
	 }

};

int main() {

	SCV faiza;

	cout << faiza.calculate_commision(5000) << endl;


	cout << faiza.get_total_salary() << endl;
	

	return 0;
}