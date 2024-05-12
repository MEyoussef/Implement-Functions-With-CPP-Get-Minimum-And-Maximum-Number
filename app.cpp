#include <iostream>
#include <vector>
#include <limits>
using namespace std;

// Get Minimum And Maximum Number

/**
 * @brief Get Minimum And Maximum Number
 * @param[in] numbers - Vector of numbers
 * @return None
 *
 * This function finds the minimum and maximum number in a vector of integers.
 * At the beginning of the function, the minimum and maximum numbers are set to 0.
 *
 * Then, the function iterates through each element of the vector, and checks if the current
 * element is greater than the maximum number. If it is, the maximum number is updated to the
 * current element.
 * Similarly, the function checks if the current element is less than the minimum number.
 * If it is, the minimum number is updated to the current element.
 *
 * After the entire vector has been iterated through, the function prints the minimum and
 * maximum numbers found to the console.
 */
void GetMinAndMax(const vector<int> &numbers)
{
    // Initialize minimum and maximum numbers to the largest and smallest possible values of integers
    int min_num = numeric_limits<int>::max(), max_num = numeric_limits<int>::min();

    // Iterate through each element of the vector
    for (int num : numbers)
    {
        // If current element is greater than maximum number, update maximum number
        if (num > max_num)
        {
            max_num = num;
        }

        // If current element is less than minimum number, update minimum number
        if (num < min_num)
        {
            min_num = num;
        }
    }

    // Print minimum and maximum numbers to console
    cout << "Maximum number is: " << max_num << endl;
    cout << "Minimum number is: " << min_num << endl;
}

int main()
{
    GetMinAndMax({100, 90, -100, 10, -200, 500}); // Min : -200. Max : 500
    return 0;
}