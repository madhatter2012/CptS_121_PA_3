#pragma once
#include <stdio.h> // for printf and scanf
#include <math.h> // for math functions
#include <stdlib.h> //for standard library
#include <math.h> //for math calculations

#define _CRT_SECURE_NO_WARNINGS //to avoid CRT warnings
#define NUM 5 //for # of records

//Reads one double precision number from the input file.Note: You may assume that the file only contains real numbers.
double read_double(FILE *infile);

//Reads one integer number from the input file.
int read_integer(FILE *infile);

//Finds the sum of number1, number2, number3, number4, and number5 and returns the result.
double calculate_sum(double number1, double number2, double number3, double number4, double number5);

//Determines the mean through the calculation sum / number and returns the result. 
//You need to check to make sure that number is not 0. 
//If it is 0 the function returns - 1.0 (we will assume that we are calculating the mean of positive numbers), otherwise it returns the mean.
double calculate_mean(double sum, int number);

//Determines the deviation of number from the mean and returns the result.The deviation may be calculated as number - mean.
double calculate_deviation(double number, double mean);

//Determines the variance through the calculation :
//((deviation1) ^ 2 + (deviation2) ^ 2 + (deviation3) ^ 2 + (deviation4) ^ 2 + (deviation5) ^ 2) / number and returns the result. 
//Hint : you may call your calculate_mean() function to determine the result!
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number);

//Calculates the standard deviation as sqrt(variance) and returns the result.
//Recall that you may use the sqrt() function that is found in math.h.
double calculate_standard_deviation(double variance);

//Determines the maximum number out of the five input parameters passed into the function, returning the max.
double find_max(double number1, double number2, double number3, double number4, double number5);

//Determines the minimum number out of the five input parameters passed into the function, returning the min.
double find_min(double number1, double number2, double number3, double number4, double number5);

//Prints a double precision number(to the hundredths place) to an output file.
void print_double(FILE *outfile, double number);