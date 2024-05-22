#include "Task4.h"


class Book{
  private:
    int stranica;
    int stroka;

  public:
    void NapisatTextNaStranice(int stranica, int stroka, std::string text);

};


void functionZadanie4()
{
cout<< "=========================================================================" <<endl;
cout<< "                            Задание 4.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout<< "Написать программу, по (заданному пользователем) номеру строки и странице, напечатать на этой странице," <<endl;
cout<< "текст введеный пользователем. Реализовать это в классе который будет ловить исключения с операциями."<<endl;
cout<<endl;

cout<<"1. Пользователь ввел страницу 4-ю, строку 5-ю."<<endl;
cout<<endl;

 Book *obj = new Book;
 obj->NapisatTextNaStranice(4, 5, "  \" Это мой введеный текст \"");

 cout<<endl;
 cout<<"2. Пользователь ввел страницу 400-ю, строку 5-ю. В книге только 200 страниц."<<endl;
 cout<<"Получаем выброс исключения throw."<<endl;
 cout<<endl;

 obj->NapisatTextNaStranice(400, 5, "  \" Это мой введеный текст \"");

 cout<<endl<<endl<<endl;
}

//==========================================================================================================

void Book::NapisatTextNaStranice(int stranica, int stroka, string text)
{
   try
     {
        if(stranica > 0 && stranica < 200)
        {
            cout<<"На странице "<< stranica <<"-ой, в строке "<< stroka <<"-ой напечатан текст:"<<endl;
            cout<< text <<endl;
        }
        else
            throw std::string{"Exception:  В книге такая страница отсутствует."};
     }
   catch (std::string error_message)
     {
        std::cout << error_message << std::endl;
     }
}















