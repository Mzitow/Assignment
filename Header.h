#pragma once

#ifndef MYHEADER

#define Statistic
#include <iostream>
#include <vector>
#include <array>

using namespace std;

class Statistics
{
public:
	Statistics();

	~Statistics();

	double calculate_mean(vector<double> my_values);
	double calculate_mean(int my_values[]);

	double calculate_range(int values[]);
	double calculate_SD(int values[]);

private:

	double mean = 0;
	double range = 0;
	double SD = 0;

};


double Statistics::calculate_mean(vector<double> my_values) { //int numbers[]..... vector<int> numbers

	double sum = 0;

	for (int i = 0; i < my_values.size(); i++) {

		sum += my_values[i];


	}

	return (sum / my_values.size());

}



double Statistics::calculate_range(int values[]) {

	return 0;
}

double Statistics::calculate_SD(int values[]) {

	return 0;
}



Statistics::Statistics()
{
	//default constructor
}

Statistics::~Statistics()
{
	//default destructor
}
#endif // !MYHEADER

