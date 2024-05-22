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
cout<< "                            ������� 4.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout<< "������� �ணࠬ��, �� (��������� ���짮��⥫��) ������ ��ப� � ��࠭��, �������� �� �⮩ ��࠭��," <<endl;
cout<< "⥪�� ������� ���짮��⥫��. ����������� �� � ����� ����� �㤥� ������ �᪫�祭�� � �����ﬨ."<<endl;
cout<<endl;

cout<<"1. ���짮��⥫� ���� ��࠭��� 4-�, ��ப� 5-�."<<endl;
cout<<endl;

 Book *obj = new Book;
 obj->NapisatTextNaStranice(4, 5, "  \" �� ��� ������� ⥪�� \"");

 cout<<endl;
 cout<<"2. ���짮��⥫� ���� ��࠭��� 400-�, ��ப� 5-�. � ����� ⮫쪮 200 ��࠭��."<<endl;
 cout<<"����砥� ���� �᪫�祭�� throw."<<endl;
 cout<<endl;

 obj->NapisatTextNaStranice(400, 5, "  \" �� ��� ������� ⥪�� \"");

 cout<<endl<<endl<<endl;
}

//==========================================================================================================

void Book::NapisatTextNaStranice(int stranica, int stroka, string text)
{
   try
     {
        if(stranica > 0 && stranica < 200)
        {
            cout<<"�� ��࠭�� "<< stranica <<"-��, � ��ப� "<< stroka <<"-�� �����⠭ ⥪��:"<<endl;
            cout<< text <<endl;
        }
        else
            throw std::string{"Exception:  � ����� ⠪�� ��࠭�� ���������."};
     }
   catch (std::string error_message)
     {
        std::cout << error_message << std::endl;
     }
}















