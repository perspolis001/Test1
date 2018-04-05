/*	
	Author: Arman Dadashzadeh
        Date: 09/26/2017
        Description: This programs will show us the total cost of a garden by adding the soil cost, flower seeds cost and fence cost.
*/

// This program calculates the total cost of a garden.
#include <iostream>
using namespace std;
        
int main ()
{       
    double soil, flowerseeds, fence, total;       
    
    // Get the soil cost.
    cout << "What does the soil cost?" << endl;
    cin >> soil;

    // Get the flower seeds cost.
    cout << "What do the flower seeds cost?" << endl;
    cin >> flowerseeds;

    // Get the fence cost.
    cout << "What does the fence cost?" << endl;
    cin >> fence;
  
    //calculate the total cost.
    total= soil + flowerseeds + fence;

	// Display the total cost.
    cout << "The total cost is " << total << endl;
    return 0;
}


# Test1
# Test1
