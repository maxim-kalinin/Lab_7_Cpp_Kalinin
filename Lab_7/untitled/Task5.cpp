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
cout<< "                            ������� 5.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout<< "���짮��⥫� ������ ����ࠫ쭮� ����姭�筮� �᫮. ���᭨�, ���� ��" <<endl;
cout<< "��� ������஬�� (�⠥��� ��������� ��� ᫥�� ���ࠢ�, ⠪ � �ࠢ� ������)."<<endl;
cout<< "�ᯮ���� �஢��� ����� �� �訡��."<<endl;
cout<<endl;

std::string receiver;

cout<<"����砥� ��ப�, �஢��塞 �� �訡��, ������ ��ப� � �� ᮤ�ন�, ���� ��� �㪢�."<<endl;
cout<<" std::string receiver;"<<endl;
cout<<" cin >> receiver;"<<endl;
cout<<"�᫨ ���� ���� �஢��塞 �� ������஬."<<endl;
cout<<endl;

cout<<"������ ����姭�筮� �᫮, ��� ��।������ ������஬�:"<<endl;
cout<<endl;

cout<<"���짮��⥫� ���� ��ப�:   123q"<<endl;
receiver = "123q";

bool proverka = check_error(receiver);

if(proverka == 0)
    cout<<"�� ����� ��ப� � �訡���, ᤥ���� ���� ������."<<endl;

cout<<endl;

cout<<"���짮��⥫� ���� ��ப�:   5678"<<endl;
receiver = "5678";

   if(check_polindrom(receiver))
    {
        cout << "�� ����� ��ப� ������஬.";
    }
   else
    {
        cout << "�� ����� ��ப� �� ������஬";
    }

cout<<endl<<endl;

cout<<"���짮��⥫� ���� ��ப�:   3443"<<endl;
receiver = "3443";

    if(check_polindrom(receiver))
     {
        cout << "�� ����� ��ப� ������஬.";
     }
    else
     {
        cout << "�� ����� ��ப� �� ������஬";
     }

    cout<<endl<<endl<<endl;
}













