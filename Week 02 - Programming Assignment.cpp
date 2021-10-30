// Week 02 - Programming Assignment.cpp from Joshua Nichols
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

const double WEIGHT = 2.76;
const double PRODUCTCOST = 4.12;
const double GROSSPROFIT = 1.45;
int main(){
    double totalCheese = 0;
    double contOfCheese = 0.0;
    double costOfCheese = 0.0;
    double profitCheese = 0.0;
    // Display's the program's task using manipulators and asks for an input.
    cout << setw(80) << setfill('*') << "" << endl;
    cout << setw(26) << setfill('*') << "" << " A program all about Cheese " << setw(26) << setfill('*') << "" << endl;
    cout << setw(80) << setfill('*') << "" << endl; cout << endl;
    cout << "Please enter the total number of kilograms of cheese produced: "; cin >> totalCheese;
    // Algorithm that gets container of cheese, cost of cheese, and profit of cheese.
    contOfCheese = ceil(totalCheese / WEIGHT);
    costOfCheese = contOfCheese * PRODUCTCOST;
    profitCheese = contOfCheese * GROSSPROFIT;
    // Display's the operation's outcome of the Algorithm.
    cout << left << "The number of containers to hold the cheese is: " << setw(32) << setfill('.') << "" << setprecision(0) << fixed << contOfCheese  << endl;
    cout << left << "The cost of producing " << contOfCheese << " container(s) of cheese is: " << setw(27) << setfill('.') << "" << "$" << setprecision(2) << fixed << costOfCheese << endl;
    cout << left << "The profit from producing "  << setprecision(0) << fixed << contOfCheese << " container(s) of cheese is: " << setw(23) << setfill('.') << "" << "$" << setprecision(2) << fixed << profitCheese << endl;
    cout << endl;
    cout << left << "Press any key to continue . . ." << endl;
    // Tried using manipulators in line 31 like the picture you provided in assignment. Code below shows I tried, can't figure out whitespace between periods.
    // cout << left << "Press any key to continue" << setw(3) << setfill('.') << "" << endl;
    // Took me awhile what setprecision() manipulator does. Figured out how add trail zero to costOfCheese and matching it with your program. Code still works!
}
