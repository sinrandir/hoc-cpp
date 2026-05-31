#include <iostream>

using namespace std;
int main() {
    // cout (insertion operator)
    // viết tắt của character output
    //cin (extraction operator)
    // character input

    int age;
    cout << "HOW ABOUT YOUR AGE?: ";
    cin >> age;

    std::string name;
    std::cout << "what's your full name?: ";
                                                // nếu muốn sử dụng space trong chuỗi 
                                                // chỉ cần dùng getline() function
    std::getline(std::cin >> std::ws, name);               // 
    // lưu ý khi dùng getline function 
    


    std::cout << "Hello " << name << endl;
    std::cout << "You are : " << age << " years old";
    return 0;
}