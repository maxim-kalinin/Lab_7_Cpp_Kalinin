#include "Task6.h"

class abort_exception : public exception{};


int funcFibonacci(int n)
{
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;
try
    {
    if(n == 9) throw std::string{"Exception: �� ����� 9-� �᫮ ��������."};

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
cout<< "                            ������� 6.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout<<"���쬨� 㦥 ����ᠭ��� �ணࠬ�� ��� ���᫥��� n-�� (��������� ���짮��⥫��) �᫠ �������� � �������"<<endl;
cout<<"४��ᨨ. � ������� try, throw � catch ��ࠡ�⠩� �᪫�祭��: ����� ������� 9-�� �᫮ ��������." <<endl;
cout<<endl;
cout<<"���짮��⥫� ���� ���� 7, ��� ����祭�� 7-�� �᫠ ��������."<<endl;

int n = 7;

cout<<"������� = "<< funcFibonacci(n)<<endl;
cout<<endl;
cout<<"���짮��⥫� ���� ���� 9, ��� ����祭�� 9-�� �᫠ ��������."<<endl;

   n = 9;

   funcFibonacci(n);

cout<<endl<<endl<<endl;

}
















