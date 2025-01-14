#include <iostream>
#include <functional>
using namespace std;
float Calc(float a, float b, function<float(float, float)> op) {
    return op(a, b);
}
int main() {
    //Lamba
    //Funcion funcional
    //funciones como parametros de una funcion, y retornar funciones
    auto sumatoria = [](int a, int b) {
        return a + b;
    };
    int s = sumatoria(5, 6);

    auto op1 = [](int a, int b) {
        return a + b;
    };
    auto v = 10;
    auto x = 5.3;

    auto r = op1(v, 20);
    cout << r << endl;

    auto op2 = [](float a, float b) {
        return a * b;
    };
    auto op3 = [](float a, float b) {
        return a / b;
    };
    cout << Calc(10., 20., op2) << endl;
    cout << Calc(10., 20., op3) << endl;
    return 0;
}