// copyright (c) 2022 st. Mother Teresa HS All rights reserved.
//
// created by Huzaifa Khalid
// Created on: March 2022
// this program shows how cool and global variables work

#include <iostream>

// globlal variable
int variableX = 25;

void localvariable() {
    // this shows what happens with local variables

    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout <<"Local variableX, variableY, variableZ: " << variableX
    << " + " << variableY << " = " << variableZ << std::endl;
}


void globalvariable() {
    // this shows what happens with global variables

    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout <<"Local variableX, variableY, variableZ: " << variableX
    << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // this function calls local and global

    localvariable();
    globalvariable();
}
