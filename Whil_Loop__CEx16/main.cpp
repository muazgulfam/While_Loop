#include <iostream>
#include <vector>

using namespace std;

int main()
{
//How many integers are present before you see the value "-99"
    vector<int> numList {2,4,5,6,-8,7,5,9,10,-1,30,3,3,45,-67,86,4,43,82,568,2,0,3,2,2,22,3,1,5,6,4,6,2,1,-8,88,99,61,-21,12,5,13,135,6,31,-99,31,31,3};
    size_t count{0};             //int could be used in place of size_t but it give an error of comparison between signed and unsigned integer expression

    while(count < numList.size() && numList.at(count) != -99) {
       ++count;
    }
    cout << count << endl;

    return 0;
}
