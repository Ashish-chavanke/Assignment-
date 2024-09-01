#include <iostream>
using namespace std;
int main() {
    // Number of notebooks and pens needed
    int numNotebooks = 15;
    int numPens = 20;
    
    // Cost per notebook and pen
    double costPerNotebook = 2.25;
    double costPerPen = 0.75;
    
    // Calculate total cost
    double totalCostNotebooks = numNotebooks * costPerNotebook;
    double totalCostPens = numPens * costPerPen;
    double totalCost = totalCostNotebooks + totalCostPens;
    
    // Display the total cost
    cout << "Total cost of notebooks: Rs. " << totalCostNotebooks << endl;
    cout << "Total cost of pens: Rs. " << totalCostPens << endl;
    cout << "Total cost of supplies: Rs. " << totalCost << endl;
    return 0;
}