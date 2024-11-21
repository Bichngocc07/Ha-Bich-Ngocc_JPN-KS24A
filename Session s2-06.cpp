#include <iostream>
using namespace std;


int main() {
    
    const float PI = 3.14f;
    float banKinh = 5.0f;

    
    float chuVi = 2 * PI * banKinh;
    float dienTich = PI * banKinh * banKinh;

    
    cout << "Bán kính: " << banKinh << endl;
    cout << "Chu vi: " << chuVi << endl;
    cout << "Di?n tích: " << dienTich << endl;

    return 0;
}



