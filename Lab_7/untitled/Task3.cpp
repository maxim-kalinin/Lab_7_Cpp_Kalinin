#include "Task3.h"

#include <vector>

void functionZadanie3()
{
cout<< "=========================================================================" <<endl;
cout<< "                            ������� 3.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout<< "������� �������� ������ ���ਪ, ��࠭�/���㤠��⢠, �⮫���, �������/ॣ���, ��த�." <<endl;
cout<< "�� ���� ���짮��⥫� ������ ��த, � �ணࠬ�� �뢮����� �� �����, �� �⮬� ��த�." <<endl;
cout<< "���樠������� �������� ����᪨ � �������᪨." <<endl;
cout<<endl;
cout<<"��襭��:"<<endl;
cout<<"����� ������� ⨯� ������ �� ����� ���� ������."<<endl;
cout<<"����� �� ���� ������, ����㦠���� � ��������, ���� � ��쥪� �����."<<endl;
cout<<"��᫥ �⮣� �믮������� ࠧ���� ����樨 � ����㦥��묨 ����묨, ����� �ணࠬ��."<<endl;
cout<<"����� �믮������ ��� ����樨, ���஢��, 䨫�����, ��� ���᫥���."<<endl;
cout<<"� ������ ��砥 ���� ������ �।�⠢���� � ���� ����஢. �.� �� ����� � ��த��"<<endl;
cout<<"�࠭���� ����� ����஢. � �� ������ ���짮��⥫�, ����� � ����묨 ����㦠����"<<endl;
cout<<"� �������� � �뢮����� �� ���᮫�."<<endl;

std::vector<string> Moscow {"��࠭� �����", "�⮫�� ��᪢�", "������� ��᪮�᪠�", "���ਪ ��ࠧ��"};
std::vector<string> Paris {"��࠭� �࠭��", "�⮫�� ��ਦ", "������ ���-��-�࠭�", "���ਪ ��ࠧ��"};
std::vector<string> Washington {"��࠭� ���", "�⮫�� ��設�⮭", "���� ���㬡��", "���ਪ ����ୠ� ���ਪ�"};

struct Gorod{
    std::string strana;
    std::string stolica;
    std::string oblast;
    std::string materik;
};

Gorod obj;
std::string perem_gorod;

cout<<endl;
cout<<"������ ��த ��� ����祭�� ��� ������:    cin >> perem_gorod"<<endl;
cout<<endl;
cout<<"�� ����� ��த ��᪢�."<<endl;

perem_gorod = "��᪢�";

if(perem_gorod == "��᪢�")
{
  obj.strana = Moscow[0];
  obj.stolica = Moscow[1];
  obj.oblast = Moscow[2];
  obj.materik = Moscow[3];

  cout<<obj.strana<<"    "<<obj.stolica<<"    "<<obj.oblast<<"    "<<obj.materik<<endl;
}
cout<<endl;

cout<<"�� ����� ��த ��ਦ."<<endl;
perem_gorod = "��ਦ";

if(perem_gorod == "��ਦ")
{
  obj.strana = Paris[0];
  obj.stolica = Paris[1];
  obj.oblast = Paris[2];
  obj.materik = Paris[3];

  cout<<obj.strana<<"    "<<obj.stolica<<"    "<<obj.oblast<<"    "<<obj.materik<<endl;
}
cout<<endl;

cout<<"�� ����� ��த ��設�⮭."<<endl;
perem_gorod = "��設�⮭";

if(perem_gorod == "��設�⮭")
{
  obj.strana = Washington[0];
  obj.stolica = Washington[1];
  obj.oblast = Washington[2];
  obj.materik = Washington[3];

  cout<<obj.strana<<"    "<<obj.stolica<<"    "<<obj.oblast<<"    "<<obj.materik<<endl;

  cout<<endl<<endl<<endl;
}




}











