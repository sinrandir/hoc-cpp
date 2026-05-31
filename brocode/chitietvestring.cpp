#include <iostream> 
using namespace std;

int main() {
/*
    int a, b, c, d; 
    cin >> a;// output 12 vì lúc này nhập thêm nút enter // đây là lỗi riêng của getline
                // do getline() khi gặp enter sẽ dừng
    cin.ignore();
    string s; 
    getline(cin, s);
    cout << s[2] << endl; // OUTPUT LÀ CHỮ A

    return 0;
*/
    string s = "python";
    cout << s.length() << endl; //length() bộ đếm độ dài string 
    cout << s.size() << endl;
    for(int i = 0;i < s.length(); i++) { /// hàm for này là chạy i++ tức là thêm 1
        cout << s[i] << " ";
    }
    return 0;//output 
}