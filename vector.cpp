#include<iostream>
#include <vector>
#include "vector.h"
using namespace std;

int main()
{
    const int max_val = 5;
	vector<int> nums;
	nums = init_vector(max_val);
    print_vector(nums);

    cout << "Press enter to continue...";
    cin.get();

    // Double the list
    nums = copy_cat(nums);
    print_vector(nums);

    // Sum up some stuff
    cout << "List sum: " << vector_sum(nums) << endl;
    cout << "Should be " << max_val * (max_val + 1) << endl;

    return 0;
}
