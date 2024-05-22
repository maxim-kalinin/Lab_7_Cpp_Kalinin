#include "Task3.h"

#include <vector>

void functionZadanie3()
{
cout<< "=========================================================================" <<endl;
cout<< "                            Задание 3.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout<< "Создайте структуру данных материк, страны/государства, столицы, область/регион, города." <<endl;
cout<< "То есть пользователь вводит город, в программе выводятся все данные, по этому городу." <<endl;
cout<< "Инициализируйте структуру статически и динамически." <<endl;
cout<<endl;
cout<<"Решение:"<<endl;
cout<<"Задачи данного типа решаются при помощи базы данных."<<endl;
cout<<"Данные из базы данных, загружаются в структуру, либо в обьект класса."<<endl;
cout<<"После этого выполняются различные операции с загруженными данными, внутри программы."<<endl;
cout<<"Могут выполнятся любые операции, сортировка, фильтрация, любые вычисления."<<endl;
cout<<"В данном случае База Данных представлена в виде векторов. Т.е все данные о городах"<<endl;
cout<<"хранятся внутри векторов. И по запросу пользователя, вектора с данными загружаются"<<endl;
cout<<"в структуру и выводятся на консоль."<<endl;

std::vector<string> Moscow {"страна Россия", "столица Москва", "область Московская", "материк Евразия"};
std::vector<string> Paris {"страна Франция", "столица Париж", "Регион Иль-де-Франс", "материк Евразия"};
std::vector<string> Washington {"страна США", "столица Вашингтон", "округ Колумбия", "материк Северная Америка"};

struct Gorod{
    std::string strana;
    std::string stolica;
    std::string oblast;
    std::string materik;
};

Gorod obj;
std::string perem_gorod;

cout<<endl;
cout<<"Введите город для получения всех данных:    cin >> perem_gorod"<<endl;
cout<<endl;
cout<<"Вы ввели город Москва."<<endl;

perem_gorod = "Москва";

if(perem_gorod == "Москва")
{
  obj.strana = Moscow[0];
  obj.stolica = Moscow[1];
  obj.oblast = Moscow[2];
  obj.materik = Moscow[3];

  cout<<obj.strana<<"    "<<obj.stolica<<"    "<<obj.oblast<<"    "<<obj.materik<<endl;
}
cout<<endl;

cout<<"Вы ввели город Париж."<<endl;
perem_gorod = "Париж";

if(perem_gorod == "Париж")
{
  obj.strana = Paris[0];
  obj.stolica = Paris[1];
  obj.oblast = Paris[2];
  obj.materik = Paris[3];

  cout<<obj.strana<<"    "<<obj.stolica<<"    "<<obj.oblast<<"    "<<obj.materik<<endl;
}
cout<<endl;

cout<<"Вы ввели город Вашингтон."<<endl;
perem_gorod = "Вашингтон";

if(perem_gorod == "Вашингтон")
{
  obj.strana = Washington[0];
  obj.stolica = Washington[1];
  obj.oblast = Washington[2];
  obj.materik = Washington[3];

  cout<<obj.strana<<"    "<<obj.stolica<<"    "<<obj.oblast<<"    "<<obj.materik<<endl;

  cout<<endl<<endl<<endl;
}




}











