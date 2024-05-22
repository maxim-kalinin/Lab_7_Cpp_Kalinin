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
cout<< "                            ������� 1.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout << "������� �������� ��� �࠭���� �஡�� � ����४��� �ᥫ �ᯮ���� " <<endl;
cout << "�����������. ������ �㭪�� multiply, ����� �㤥� 㬭����� �᫠ ��������" <<endl;
cout << "�� �᫠ ������� ���짮��⥫�� � �뢮���� १���� ���᫥��� ����� �᫮�." <<endl;
cout << "�㭪�� multiply ������ ���� ��ॣ�㦥��." <<endl;

cout<<endl<<endl;

StractDoubleChisla obj;

multiply(12.34, 56.78, obj);

multiply(5, 7, 9, obj);

cout<<endl<<endl<<endl;
}



void multiply(double x, double y, StractDoubleChisla &obj)
{
  cout<< "����� � ������ன ����⢥���� �ᥫ." <<endl;
  cout<< "���짮��⥫� ���� �᫠: 12.34 � 56.78" <<endl;
  cout<<endl;

  obj.dbl_perem1 = x;
  obj.dbl_perem2 = y;

  cout<< "������� ���᫥��� ࠢ��:  " << obj.dbl_perem1 * obj.dbl_perem2 <<endl;
  cout<<endl<<endl;
}


void multiply(int x, int y, int z, StractDoubleChisla &obj)
{
  cout<< "����� � ������ன ���������� �ᥫ." <<endl;
  cout<< "���짮��⥫� ���� �᫠: 5, 7, 9" <<endl;
  cout<< "����稫� ��� ���������� �᫠, �� �᫠ ��६������." <<endl;
  cout<<endl;

  obj.complecsObj1.cmplsValue1 = complex<int>(x, y);
  obj.complecsObj1.cmplsValue2 = complex<int>(y, z);


  std::complex<int> value;

  value = obj.complecsObj1.cmplsValue1 * obj.complecsObj1.cmplsValue2;

  cout<< "�������, �������᭮� �᫮ ࠢ��:  " << value <<endl;
}















