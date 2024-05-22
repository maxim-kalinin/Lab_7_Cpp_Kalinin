#include "Task2.h"

#include <complex>

struct NewView{

  std::string name_jivotnogo;
  std::string pokrov_tela;
  int kolvo_lap;
  int kolvo_krilev;

};


void functionZadanie2()
{
cout<< "=========================================================================" <<endl;
cout<< "                            Задание 2.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "Создайте программу \"Новый вид\", есть структура о данных животного." <<endl;
cout << "Пользователю выводится сообщение побыть создателем и ввести рандомную" <<endl;
cout << "последовательность которую от него просят, после чего выводится \"Новый вид \"" <<endl;
cout << "существа который вы создали." <<endl;
cout<<endl;

NewView obj;

cout<< "Создана структура:" <<endl;
cout<<endl;
cout<< "struct NewView{" <<endl;
cout<<endl;
cout<< "     std::string name_jivotnogo;" <<endl;
cout<< "     std::string pokrov_tela;" <<endl;
cout<< "     int kolvo_lap;" <<endl;
cout<< "     int kolvo_krilev;" <<endl;
cout<<endl;
cout<< "} obj;" <<endl;
cout<<endl;
cout<<"Введите название животного:     ПрограмЗавр"<<endl;
cout<< "cin>> obj.name_jivotnogo" <<endl;
//cin>> obj.name_jivotnogo;
cout<<"Введите покров тела шерсть, чешуя или другое:     Перья"<<endl;
cout<< "cin>> obj.pokrov_tela" <<endl;
//cin>> obj.pokrov_tela;
cout<<"Введите количество лап у животного:   4"<<endl;
cout<< "cin>> obj.kolvo_lap" <<endl;
//cin>> obj.kolvo_lap;
cout<<"Введите количество крыльев у животного:    2"<<endl;
cout<< "cin>> obj.kolvo_krilev" <<endl;
//cin>> obj.kolvo_krilev;

cout<<endl;
cout<< "Вы создали животного под названием:   " << "ПрограмЗавр" <<endl;
cout<< "Тело вашего животного покрывает:   " << "Перья" <<endl;
cout<< "Количество лап у вашего животного равно:   " << 4 <<endl;
cout<< "Количество крыльев у вашего животного равно:   " << 2 <<endl;

cout<<endl<<endl<<endl;
}













