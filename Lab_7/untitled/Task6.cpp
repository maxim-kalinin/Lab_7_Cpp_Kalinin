#include "Task6.h"

class abort_exception : public exception{};


int funcFibonacci(int n)
{
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;
try
    {
    if(n == 9) throw std::string{"Exception: Вы ввели 9-е число Фибоначчи."};

    return funcFibonacci(n-1)+funcFibonacci(n-2);
    }
catch (std::string error_message)
  {
    std::cout << error_message << std::endl;
  }
    return 0;
}



void functionZadanie6()
{
cout<< "=========================================================================" <<endl;
cout<< "                            Задание 6.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout<<"Возьмите уже написанную программу для вычисления n-го (заданного пользователем) числа Фибоначчи с помощью"<<endl;
cout<<"рекурсии. С помощью try, throw и catch обработайте исключение: нельзя вычислять 9-ое число Фибоначчи." <<endl;
cout<<endl;
cout<<"Пользователь ввел цифру 7, для получения 7-го числа Фибоначчи."<<endl;

int n = 7;

cout<<"Результат = "<< funcFibonacci(n)<<endl;
cout<<endl;
cout<<"Пользователь ввел цифру 9, для получения 9-го числа Фибоначчи."<<endl;

   n = 9;

   funcFibonacci(n);

cout<<endl<<endl<<endl;

}
















