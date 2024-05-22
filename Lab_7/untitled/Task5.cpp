#include "Task5.h"


bool check_error(string word)
{
   int len = word.length();

   if(len != 4) return 0;

   if(len == 4)
    {
      for(int i=0; i<4; i++)
      {
        bool bl = isdigit(word[i]);
        if(bl == 0) return 0;
      }
    }
   return 1;
}


bool check_polindrom(string word)
{
    int len = word.length();

    for(int i = 0; i < len/2; ++i)
    {
        if(word[i] != word[len-i-1])
        {
            return false;
        }
    }
    return true;
}

void functionZadanie5()
{
cout<< "=========================================================================" <<endl;
cout<< "                            Задание 5.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout<< "Пользователь вводит натуральное четырехзначное число. Выясните, является ли" <<endl;
cout<< "оно палиндромом (читается одинаково как слева направо, так и справа налево)."<<endl;
cout<< "Используйте проверку ввода на ошибки."<<endl;
cout<<endl;

std::string receiver;

cout<<"Получаем строку, проверяем на ошибки, длинну строки и что содержит, цифры или буквы."<<endl;
cout<<" std::string receiver;"<<endl;
cout<<" cin >> receiver;"<<endl;
cout<<"Если ввод верный проверяем на полиндром."<<endl;
cout<<endl;

cout<<"Введите четырехзначное число, для определения палиндрома:"<<endl;
cout<<endl;

cout<<"Пользователь ввел строку:   123q"<<endl;
receiver = "123q";

bool proverka = check_error(receiver);

if(proverka == 0)
    cout<<"Вы ввели строку с ошибкой, сделайте ввод заново."<<endl;

cout<<endl;

cout<<"Пользователь ввел строку:   5678"<<endl;
receiver = "5678";

   if(check_polindrom(receiver))
    {
        cout << "Вы ввели строку палиндром.";
    }
   else
    {
        cout << "Вы ввели строку НЕ палиндром";
    }

cout<<endl<<endl;

cout<<"Пользователь ввел строку:   3443"<<endl;
receiver = "3443";

    if(check_polindrom(receiver))
     {
        cout << "Вы ввели строку палиндром.";
     }
    else
     {
        cout << "Вы ввели строку НЕ палиндром";
     }

    cout<<endl<<endl<<endl;
}













