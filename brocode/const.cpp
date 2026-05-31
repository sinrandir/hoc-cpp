#include <iostream>
#include <string>
#include <cmath>
using namespace std;


// const cực kì quan trọng trong việc lập trinh
// ví dụ đối với int x = 16 thì sửa được sau đó
// tuy nhiên nếu const int x = 15 thì biến này sau đó ko thay đổi được
// nói chung là kiểu read-only. 
int main() {
    const double PI = 3.14159;
    const int LIGHT_SPEED = 3*pow(10, 8);
    const int WIDTH = 1920;
    const int HEITGH = 1080;
   //  PI = 2382.2; NẾU THÊM NHƯ NÀY THÌ KO CHẠY ĐƯỢC.
    double radius = 10;
    double circumference = 2 * PI * radius;
    cout << "Chu vi hình tròn là: " << circumference << " cm" << endl;
    cout << LIGHT_SPEED;
    return 0;
}