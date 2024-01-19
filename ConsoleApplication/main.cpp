#include <iostream>
#include "Exercice3.h"

#ifndef AUTOGRADING
#include "StudentConfiguration.h"
#endif

int main(int argc, char** argv)
{
#ifndef AUTOGRADING

	std::cout << "Local test" << std::endl;

	/*------------------------------ !!! Don't touch above !!! ------------------------------*/
	/*------------------------------------ STUDENT MAIN ------------------------------------*/
	Exercice3 exercice3;
	ExerciceBase::AutograderRunTest(0, 0);
	ExerciceBase::AutograderRunTest(0, 1);

	return 0;

	/*------------------------------------ STUDENT MAIN ------------------------------------*/
	/*------------------------------ !!! Don't touch after !!! ------------------------------*/

#else
	// This line is used by the autograder, don't touch it !
	return ExerciceBase::AutograderMain(argc, argv);
#endif
}
