#include <iostream>
#include "Parameters.h"

int main(int argc, char* argv[]) {

    if (Parameters::readParameters(argc -1, argv + 1) != 0) {
        return 1;
    }

    if (Parameters::runMode == Parameters::RunModes::help) {
        Parameters::help();
        return 0;
    }

    return 0;
}