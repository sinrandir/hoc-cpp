#include <iostream>
#include <vector>
using namespace std;
        //typedef = keyword used to create an additional name
        //alias for another data type
        //Help with readability and reduce types.


//typedef std::vector<std::pair<std::string, int>> pairlist_t;


//typedef std::string text_t;
//typedef int number_t;
//using number_t = int;
// you can use both using and typedef as a way to create an additional name



int main() {
//    text_t FirstName = "String";
    number_t age = 21;
//    std::cout << FirstName << endl;
    std::cout << age << endl;
    return 0;
}