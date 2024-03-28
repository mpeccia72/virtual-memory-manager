
#include <iostream>
#include <fstream>
#include <vector>
#include "physical-page.h"

using namespace std;

void readAddresses();

int main() {

    // Input file path
    string filename = "addresses.txt";

    // Create an input file stream object
    ifstream input_file;

    // Open the file
    input_file.open(filename);

    // Check if the file is successfully opened
    if (!input_file.is_open()) {
        cout << "Error opening file: " << filename << endl;
        return 1; // Exit with an error code
    }

    // Read data from the file
    string line;
    int count = 0;

    // each iteration translated the logical address to a physical address and outputs it to "output.txt"
    while (getline(input_file, line)) {
        count++;
    }

    cout << "This file contains " << count << " lines" << endl;

    // Close the file
    input_file.close();

    return 0; // Exit normally

}