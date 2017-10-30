/*********************************************************************************
* Programmer: Michael Smith														 *
* Class CptS 121, Fall 2017; Lab Section 21										 *
* Programming Assignment: PA3													 *
* Date: September 20, 2017														 *
* Description: This program processes numbers, corresponding to student		     *
* records read in from a file, and writes the required results to an output file.*
**********************************************************************************/


#include "pa3.h"


int main(void)
{
	//declaring variables
	int id_1 = 0, id_2 = 0, id_3 = 0, id_4 = 0, id_5 = 0;
	int class_1 = 0, class_2 = 0, class_3 = 0, class_4 = 0, class_5 = 0;
	double gpa_1 = 0.0, gpa_2 = 0.0, gpa_3 = 0.0, gpa_4 = 0.0, gpa_5 = 0.0;
	double age_1 = 0.0, age_2 = 0.0, age_3 = 0.0, age_4 = 0.0, age_5 = 0.0;
	int class_sum = 0, class_mean = 0;
	double gpa_sum = 0.0, age_sum = 0.0, gpa_mean = 0.0, age_mean = 0.0;
	double gpa_1_deviation = 0.0, gpa_2_deviation = 0.0, gpa_3_deviation = 0.0;
	double gpa_4_deviation = 0.0, gpa_5_deviation = 0.0;
	double variance = 0.0, gpa_min = 0.0, gpa_max = 0.0, std_deviation = 0.0;

	//Opens an input file "input.dat" for reading;
	FILE *infile = NULL;
	//Opens an output file "output.dat" for writing;
	FILE *outfile = NULL;

	//opening infile for reading stream
	infile = fopen("input.dat", "r");
	//opening outfile for writing stream
	outfile = fopen("output.dat", "w");

	//Reads five records from the input file (input.dat);
	id_1 = read_integer(infile);
	class_1 = read_integer(infile);
	gpa_1 = read_double(infile);
	age_1 = read_double(infile);

	id_2 = read_integer(infile);
	class_2 = read_integer(infile);
	gpa_2 = read_double(infile);
	age_2 = read_double(infile);

	id_3 = read_integer(infile);
	class_3 = read_integer(infile);
	gpa_3 = read_double(infile);
	age_3 = read_double(infile);

	id_4 = read_integer(infile);
	class_4 = read_integer(infile);
	gpa_4 = read_double(infile);
	age_4 = read_double(infile);

	id_5 = read_integer(infile);
	class_5 = read_integer(infile);
	gpa_5 = read_double(infile);
	age_5 = read_double(infile);

	//Calculates the sum of the GPAs;
	gpa_sum = calculate_sum(gpa_1, gpa_2, gpa_3, gpa_4, gpa_5);
	//Calculates the sum of the class standings;
	class_sum = calculate_sum(class_1, class_2, class_3, class_4, class_5);
	//Calculates the sum of the ages;
	age_sum = calculate_sum(age_1, age_2, age_3, age_4, age_5);

	//Calculates the mean of the GPAs, writing the result to the output file(output.dat);
	gpa_mean = calculate_mean(gpa_sum, NUM);
	print_double(outfile, gpa_mean);

	//Calculates the mean of the class standings, writing the result to the output file(output.dat);
	class_mean = calculate_mean(class_sum, NUM);
	print_double(outfile, class_mean);

	//Calculates the mean of the ages, writing the result to the output file(output.dat);
	age_mean = calculate_mean(age_sum, NUM);
	print_double(outfile, age_mean);

	//Calculates the deviation of each GPA from the mean(Hint: need to call calculate_deviation() 5 times)
	//Calculates the variance of the GPAs
	variance = calculate_variance(calculate_deviation(gpa_1, gpa_mean), calculate_deviation(gpa_2, gpa_mean), 
				calculate_deviation(gpa_3, gpa_mean), calculate_deviation(gpa_4, gpa_mean), 
				calculate_deviation(gpa_5, gpa_mean), NUM);
	
	//Calculates the standard deviation of the GPAs, writing the result to the output file(output.dat);
	std_deviation = calculate_standard_deviation(variance);
	print_double(outfile, std_deviation);

	//Determines the min of the GPAs, writing the result to the output file(output.dat);
	gpa_min = find_min(gpa_1, gpa_2, gpa_3, gpa_4, gpa_5);
	print_double(outfile, gpa_min);

	//Determines the max of the GPAs, writing the result to the output file(output.dat);
	gpa_max = find_max(gpa_1, gpa_2, gpa_3, gpa_4, gpa_5);
	print_double(outfile, gpa_max);

	//Closes the input and output files(i.e.input.dat and output.dat)
	fclose(infile);
	fclose(outfile);

	return 0;
}