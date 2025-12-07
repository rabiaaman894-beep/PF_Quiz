// -----------------------------------------------------------------------------
// Write a program for a travel bus to calculate luggage charges: 
// read N passengers, luggage weight per passenger. First 10kg free, extra charged 70/kg. 
// If extra > 8kg give 15% discount on extra charge. Print bill per passenger. 
// Use IO, variables, loops, conditions.
// -----------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {

    int N;          
    float Weight;      
    float ExtraWeight; 
    float Charge;

    cout << "Enter number of passengers:";  
    cin >> N;  

    for (int i = 1; i <= N; i++) {  

    cout << "\nEnter luggage weight for passenger " << i << ":";  
    cin >> Weight;
    
    if (Weight > 10) {  
        ExtraWeight = Weight - 10;  
    } else {  
        ExtraWeight = 0;  
    }  

    Charge = ExtraWeight * 70;  

    if (ExtraWeight > 8) {  
        Charge = Charge - (Charge * 0.15);    // The discount is 15% so solving it will be 0.15
    }  
 
    cout << "Bill for passenger " << i << " = Rs. " << Charge << endl;  
}  

return 0;

}