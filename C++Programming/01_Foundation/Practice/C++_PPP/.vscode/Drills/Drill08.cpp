#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // UPDATED: Include the algorithm library for std::sort
#include <limits> 
using namespace std; 

int main() {
    
    // Conversion constants
    const double cm_to_m = 0.01;
    const double in_to_m = 0.0254; 
    const double ft_to_m = 0.3048; 

    // Variables for current input tracking
    double num;
    string unit;
    double current_value_m; 

    // Variables to track the running smallest/largest values 
    double smallest_m; 
    double largest_m;  

    // Variables to store the original input values for printing at the very end
    double smallest_num, largest_num;
    string smallest_unit, largest_unit;

    // New variables for sum and count tracking
    double sum_meters = 0.0;
    int value_count = 0;

    // Declare a vector to store all values in meters
    vector<double> values_in_meters; 

    cout << "Enter values with units (m, cm, in, ft) e.g., '10cm'. Type a non-number (like 'q') to finish:\n";
      
    // --- Step 1: Read and process the first input outside the loop ---
    if (!(cin >> num >> unit)) {
        cout << "Error reading first input. Exiting.\n";
        return 1; 
    }

    if (unit == "m") { current_value_m = num; } 
    else if (unit == "cm") { current_value_m = num * cm_to_m; } 
    else if (unit == "in") { current_value_m = num * in_to_m; } 
    else if (unit == "ft") { current_value_m = num * ft_to_m; } 
    else { cout << "Invalid initial unit: " << unit << ". Exiting.\n"; return 1; }

    smallest_m = current_value_m;
    largest_m = current_value_m;
    smallest_num = num; largest_num = num;
    smallest_unit = unit; largest_unit = unit;
    
    sum_meters += current_value_m;
    value_count++;
    
    values_in_meters.push_back(current_value_m); 
    
    cout << num << unit << " is smallest so far and largest so far\n";


    // --- Step 2: Start the loop for subsequent inputs ---
    while(cin >> num >> unit)
    {      
        double input_in_m;

        if (unit == "m") { input_in_m = num; } 
        else if (unit == "cm") { input_in_m = num * cm_to_m; } 
        else if (unit == "in") { input_in_m = num * in_to_m; } 
        else if (unit == "ft") { input_in_m = num * ft_to_m; } 
        else {
            cout << "I don't know that unit '" << unit << "'. Skipping input.\n";
            continue; 
        }

        sum_meters += input_in_m;
        value_count++;
        
        values_in_meters.push_back(input_in_m); 

        // --- Step 3: Compare the new standardized value ---
        if(input_in_m < smallest_m){
            smallest_m = input_in_m; 
            smallest_num = num; smallest_unit = unit;
            cout << num << unit << " is the smallest so far\n";
        }
        if(input_in_m > largest_m){
            largest_m = input_in_m;
            largest_num = num; largest_unit = unit;
            cout << num << unit << " is the largest so far\n";
        }
    }
        
    // --- Step 4: Print final statistics after the loop ends ---
    cout << "\n--------------------------\n";
    cout << "Final Statistics:\n";
    cout << "Smallest value entered: " << smallest_num << smallest_unit << '\n';
    cout << "Largest value entered: " << largest_num << largest_unit << '\n';
    cout << "Total number of values entered: " << value_count << '\n';
    cout << "Sum of all values entered: " << sum_meters << " meters\n";
    cout << "--------------------------\n";
    
    // UPDATED: Sort the vector from smallest to largest
    // This function takes two iterators: the beginning and the end of the range to sort
    sort(values_in_meters.begin(), values_in_meters.end());

    // Loop through the NOW SORTED vector and print all stored values
    cout << "All values entered (in increasing order, in meters):\n";
    for (double value : values_in_meters) { 
        cout << value << " m\n";
    }
    cout << "--------------------------\n";


    // Portable way to pause and close the window
    cout << "Press Enter to exit..." << endl;
    cin.clear(); 
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    cin.get();

    return 0; 
}
