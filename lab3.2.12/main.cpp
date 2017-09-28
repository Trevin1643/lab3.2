/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tmiller
 *
 * Created on September 11, 2017, 1:17 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(void) {

    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 }; 
    int n = sizeof(vector) / sizeof(vector[0]);
    
    int *current, smaller, smallest, i; //creates pointer and variable
    current = vector;  //points the pointer at the array
    smaller = *current; //equal to the pointer
    
    for(i = 0; i < n; i++)
    {       
        current = current + 1;  //moves the current pointer one to the right
        
        if(smaller > *current)  //if the pointer is smaller, make the variable equal to the smaller number
        {
            smaller = *current;           
        }
    
    }
    
    std::cout << "The smallest number is " << smaller << std::endl;

    return 0;
}

