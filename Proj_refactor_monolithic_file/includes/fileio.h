/*
 * fileio.h
 *
 *  Created on: Sep 18, 2021
 *      Author: ryan
 */

#ifndef FILEIO_H_
#define FILEIO_H_


#include "constants.h"

int load(const std::string filename, std::vector<process> &myProcesses);
int save(const std::string filename, std::vector<process> &myProcesses);

#endif /* FILEIO_H_ */
