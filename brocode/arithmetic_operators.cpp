#include <iostream>
using namespace std;


int main() {

    int students = 20;

    //when we have new one students join the class then
    // students = students + 1; <we should change this to another way shorter.
    //students += 1; tương tự đối với trừ


    //students ++;
    // đối với ++ thì chỉ thêm 1 học sinh tương tự với -- 


    //subtraction
    //students --; chỉ trừ 1 so với giá trị ban đầu

    //students *= 2;
    //students /= 3;

    ////   % là chia xong lấy phần dư 
    int remainder = students % 3;
    //remainder kiểu là số dư còn lại
    cout << students << endl;
    cout << remainder;
    return 0;
}