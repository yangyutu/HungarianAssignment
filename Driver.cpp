#include <vector>
#include <iostream>
#include "HungarianAlg.h"


void test1();
void test2();
void test3();
int main(void)
{

	test1();// same number of workes and jobs
	test2();// jobs are more than workers
	test3();// workers are more than jobs
	return 0;
}

void test1(){
	// Matrix size
	int N=20; // tracks
	int M=20; // detects
	// Random numbers generator initialization
	srand (1);
	// Distance matrix N-th track to M-th detect.
	vector< vector<double> > Cost(N,vector<double>(M));
	// Fill matrix with random values
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<M; j++)
		{
			Cost[i][j] = (double)(rand()%1000)/1000.0;
//			std::cout << Cost[i][j] << "\t";
		}
//		std::cout << std::endl;
	}

	AssignmentProblemSolver APS;

	vector<int> Assignment;
	
	cout << APS.Solve(Cost,Assignment) << endl;
	
	// Output the result
	for(int x=0; x<N; x++)
	{
		std::cout << x << ":" << Assignment[x] << "\t";
	}


}

void test2(){
	// Matrix size
	int N=20; // tracks
	int M=30; // detects
	// Random numbers generator initialization
	srand (1);
	// Distance matrix N-th track to M-th detect.
	vector< vector<double> > Cost(N,vector<double>(M));
	// Fill matrix with random values
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<M; j++)
		{
			Cost[i][j] = (double)(rand()%1000)/1000.0;
//			std::cout << Cost[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	AssignmentProblemSolver APS;

	vector<int> Assignment;
	
	cout << APS.Solve(Cost,Assignment) << endl;
	
	// Output the result
	for(int x=0; x<N; x++)
	{
		std::cout << x << ":" << Assignment[x] << "\t";
	}
}

void test3(){
	// Matrix size
	int N=30; // tracks
	int M=20; // detects
	// Random numbers generator initialization
	srand (1);
	// Distance matrix N-th track to M-th detect.
	vector< vector<double> > Cost(N,vector<double>(M));
	// Fill matrix with random values
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<M; j++)
		{
			Cost[i][j] = (double)(rand()%1000)/1000.0;
//			std::cout << Cost[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	AssignmentProblemSolver APS;

	vector<int> Assignment;
	
	cout << APS.Solve(Cost,Assignment) << endl;
	
	// Output the result
	for(int x=0; x<N; x++)
	{
		std::cout << x << ":" << Assignment[x] << "\t";
	}
}
