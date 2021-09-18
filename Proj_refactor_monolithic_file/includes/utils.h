/*
 * utils.h
 *
 *  Created on: Sep 18, 2021
 *      Author: ryan
 */

#ifndef UTILS_H_
#define UTILS_H_
#include "../includes/constants.h"

void sort(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);

process getNext(std::vector<process> &myProcesses);

//returns the number of entries in the vector
int getSize(std::vector<process> &myProcesses);

//attempt to correct missing data
//if cannot correct, then drop row
//return number of rows in myProcesses
int handleMissingData(std::vector<process> &myProcesses);



#endif /* UTILS_H_ */
