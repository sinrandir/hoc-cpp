#include <iostream>
using namespace std;
                            // HIỂU ĐƠN GIẢN
                            // TYPE CONVERSION
                            // KIỂU KIỂU DỮ LIỆU NÀY SANG DỮ LIỆU KHÁC
int main() {            // có 2 kiểu chính là implicit và explicit
                        // implicit = automatic
                        //explicit = precede value with new data type (int)


    int correct = 8;
    int question = 10;
    double score = correct/(double) question *100;
    cout << (char) 100 <<endl;
    cout << score << " %";
    return 0;
}