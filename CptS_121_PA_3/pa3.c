#include "pa3.h"

/*************************************************************
* Function: read_double()									*
* Date Created: 9/20/17		                                *
* Date Last Modified: 9/20/17                               *
* Description: Reads a double from a file                   *
* Input parameters: infile                                  *
* Returns: double											*
* Preconditions: 1: Start of program. 2: Filestream Open.	*
* Postconditions: double has been read from file            *
*************************************************************/

double read_double(FILE * infile)
{
	double num = 0.0;
	
	fscanf(infile, "%lf", &num);

	return num;
}


/*************************************************************
* Function: read_int()							            *
* Date Created: 9/20/17		                                *
* Date Last Modified: 9/20/17                               *
* Description: Reads a int from a file                      *
* Input parameters: the file                                *
* Returns: int										     	*
* Preconditions: 1: Start of program. 2: Filestream Open.	*
* Postconditions: int has sbeen read from file              *
*************************************************************/

int read_integer(FILE * infile)
{
	int num = 0;

	fscanf(infile, "%d", &num);

	return 0;
}


/*************************************************************
* Function: calculate_sum()									*
* Date Created: 9/20/17		                                *
* Date Last Modified: 9/20/17                               *
* Description: calculates a sum from 5 numbers              *
* Input parameters: 5 different numbers                     *
* Returns: double											*
* Preconditions: 1: Start of program.						*
* Postconditions: sum has been calculated                   *
*************************************************************/

double calculate_sum(double number1, double number2, double number3, double number4, double number5)
{
	double num = 0.0;
	num = number1 + number2 + number3 + number4 + number5;
	return num;
}


/*************************************************************
* Function: calculate_mean()								*
* Date Created: 9/20/17		                                *
* Date Last Modified: 9/20/17                               *
* Description: calculates a mean							*
* Input parameters: double sum and int number               *
* Returns: double											*
* Preconditions: 1: Start of program. 						*
* Postconditions: mean has been calculated                  *
*************************************************************/

double calculate_mean(double sum, int number)
{
	double mean = 0.0;

	if (number != 0)
	{
		mean = sum / number;
		return mean;
	}
	else
		return -1.0;
}


/*************************************************************
* Function: calculate_deviation()                           *
* Date Created: 9/20/17		                                *
* Date Last Modified: 9/20/17                               *
* Description: calculates the deviation                     *
* Input parameters: double number, double mean              *
* Returns: double											*
* Preconditions: 1: Start of program.						*
* Postconditions: deviation has been calcuated              *
*************************************************************/

double calculate_deviation(double number, double mean)
{
	double deviation = 0.0;

	deviation = number - mean;

	return deviation;
}


/*************************************************************
* Function: calcuate_variance()                             *
* Date Created: 9/20/17		                                *
* Date Last Modified: 9/20/17                               *
* Description: calculates a variance						*
* Input parameters: 5 double deviations, and a int number   *
* Returns: double											*
* Preconditions: 1: Start of program. 						*
* Postconditions: variance has been calculated.             *
*************************************************************/

double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number)
{
	double variance = 0.0;

	variance = pow(deviation1, 2) + pow(deviation2, 2) + pow(deviation3, 2) + pow(deviation4, 2) + pow(deviation5, 2) / number;
	
	return variance;
}


/*************************************************************
* Function: calculate_standard_deviation()                  *
* Date Created: 9/20/17		                                *
* Date Last Modified: 9/20/17                               *
* Description: calculates the standard deviation            *
* Input parameters: double variance                         *
* Returns: double											*
* Preconditions: 1: Start of program. 	                    *
* Postconditions: standard deviation has been calculated    *
*************************************************************/

double calculate_standard_deviation(double variance)
{
	double std_deviation = 0.0;

	std_deviation = sqrt(variance);

	return std_deviation;
}


/*************************************************************
* Function: find_max()                                      *
* Date Created: 9/20/17		                                *
* Date Last Modified: 9/20/17                               *
* Description: finds the max out of 5 numbers               *
* Input parameters: 5 double numbers                        *
* Returns: double											*
* Preconditions: 1: Start of program.						*
* Postconditions: max number has been caluculated           *
*************************************************************/

double find_max(double number1, double number2, double number3, double number4, double number5)
{
	double max = number1;
	
	if(number2 > max)
		number2 = max;
	if(number3 > max)
		 number3 = max;
	if(number4 > max)
		number4 = max;
	if(number5 > max)
		 number5 = max;
	
	 return max;
}


/*************************************************************
* Function: find_min()                                      *
* Date Created: 9/20/17		                                *
* Date Last Modified: 9/20/17                               *
* Description: finds the min out of 5 numbers               *
* Input parameters: 5 double numbers                        *
* Returns: double											*
* Preconditions: 1: Start of program.						*
* Postconditions: min number has been caluculated           *
*************************************************************/

double find_min(double number1, double number2, double number3, double number4, double number5)
{
	double min = number1;

	if(number2 < min)	
		number2 = min;
	if(number3 < min)
		number3 = min;
	if(number4 < min)
		number4 = min;
	if(number5 < min)
		number5 = min;

	return min;
}


/*************************************************************
* Function: print_double()							        *
* Date Created: 9/20/17		                                *
* Date Last Modified: 9/20/17                               *
* Description: Reads a double from a file                   *
* Input parameters: outfile, double number                  *
* Returns: nothing											*
* Preconditions: 1: Start of program. 2: Filestream Open.	*
* Postconditions: data has been printed to outfile          *
*************************************************************/

void print_double(FILE * outfile, double number)
{

	fprintf(outfile, "%lf\n", number);

}
