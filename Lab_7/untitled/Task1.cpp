#include "Task1.h"

#include <complex>


struct StractDoubleChisla{

    struct StractComplecsChisla{

       std::complex<int> cmplsValue1;
       std::complex<int> cmplsValue2;

    }complecsObj1;

  double dbl_perem1;
  double dbl_perem2;

};

void multiply(double, double, StractDoubleChisla &);

void multiply(int, int, int, StractDoubleChisla &);


void functionZadanie1()
{

cout<< "=========================================================================" <<endl;
cout<< "                            Задание 1.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "Создайте структуру для хранения дробей и компрексных чисел используя " <<endl;
cout << "вложенность. Напишите функцию multiply, которая будет умножать числа структуры" <<endl;
cout << "на числа вводимые пользователем и выводить результат вычисления одним числом." <<endl;
cout << "Функция multiply должна быть перегружена." <<endl;

cout<<endl<<endl;

StractDoubleChisla obj;

multiply(12.34, 56.78, obj);

multiply(5, 7, 9, obj);

cout<<endl<<endl<<endl;
}



void multiply(double x, double y, StractDoubleChisla &obj)
{
  cout<< "Работа со структурой вещественных чисел." <<endl;
  cout<< "Пользователь ввел числа: 12.34 и 56.78" <<endl;
  cout<<endl;

  obj.dbl_perem1 = x;
  obj.dbl_perem2 = y;

  cout<< "Результат вычисления равен:  " << obj.dbl_perem1 * obj.dbl_perem2 <<endl;
  cout<<endl<<endl;
}


void multiply(int x, int y, int z, StractDoubleChisla &obj)
{
  cout<< "Работа со структурой комплексных чисел." <<endl;
  cout<< "Пользователь ввел числа: 5, 7, 9" <<endl;
  cout<< "Получили два комплексных числа, эти числа перемножили." <<endl;
  cout<<endl;

  obj.complecsObj1.cmplsValue1 = complex<int>(x, y);
  obj.complecsObj1.cmplsValue2 = complex<int>(y, z);


  std::complex<int> value;

  value = obj.complecsObj1.cmplsValue1 * obj.complecsObj1.cmplsValue2;

  cout<< "Результат, комплексное число равно:  " << value <<endl;
}















