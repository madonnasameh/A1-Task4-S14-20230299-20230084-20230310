// vOLE_machine.h
#ifndef VOLE_MACHINE_H
#define VOLE_MACHINE_H

#include <iostream>
#include <vector>
#include <bitset>
#include <fstream>
#include <string>
#include <iomanip> 

class VOLEMachine {
public:
    VOLEMachine(int memorySize, int numRegisters);
    bool loadProgramFromFile(const std::string& filename);
    void run();

private:
    void executeInstruction(int instruction, int opcode, int r, int s, int t);
    void rotate(int& reg, int x);
    void printRegisters();
    void printMemory();

    std::vector<int> memory; // Memory array
    std::vector<int> registers; // Register array
    int pc; // Program counter
    bool halted; // Halting flag
};

#endif 
