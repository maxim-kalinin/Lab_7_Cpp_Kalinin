#include "Task7.h"

#include <fstream>

//#include <conio.h>
#include <iomanip>
//#include <stdlib.h>


void functionZadanie7()
{
cout<< "=========================================================================" <<endl;
cout<< "                            Задание 7.                                   " <<endl;
cout<< "=========================================================================" <<endl;
cout<<endl;
cout<<"Сделать запись в файл OUTPUT.TXT двух картинок."<<endl;
cout<<"Файл после создания и записи распологается в директории с программой."<<endl;
cout<<endl;

   std::ofstream out;
   out.open("OUTPUT.TXT");

   if (out.is_open())
    {
      out << "" << std::endl;
      out << "             _" << std::endl;
      out << "            ( \\" << std::endl;
      out << "             ) )" << std::endl;
      out << "            ( (  .-\"\"-.  A.-.A" << std::endl;
      out << "             \\ \\/      \\/ , , \\" << std::endl;
      out << "              \\   \\    =;  t  /=" << std::endl;
      out << "               \\   |\"\".  ,__./" << std::endl;
      out << "                / //   | ||" << std::endl;
      out << "               /_,))   |_,))" << std::endl;
      out << std::endl;
    }
   out << "\n";
   out << "\n";

   //---------------------------------------------------------------------------------------

   const unsigned min_char = 32;
   const unsigned max_char = 60;
   const unsigned max_col  = 3;

   for (unsigned asc_char = min_char, col_num = 1; asc_char <= max_char; asc_char++, col_num++)
    {
       if (col_num > max_col)
          {
             col_num = 1;
             out << "\n"; // start new row
          }

       out << std::setw(6) << asc_char << std::setw(3) << static_cast<char>(asc_char);
     }

   //-----------------------------------------------------------------------------------------

   cout << "" << std::endl;
   cout << "             _" << std::endl;
   cout << "            ( \\" << std::endl;
   cout << "             ) )" << std::endl;
   cout << "            ( (  .-\"\"-.  A.-.A" << std::endl;
   cout << "             \\ \\/      \\/ , , \\" << std::endl;
   cout << "              \\   \\    =;  t  /=" << std::endl;
   cout << "               \\   |\"\".  ,__./" << std::endl;
   cout << "                / //   | ||" << std::endl;
   cout << "               /_,))   |_,))" << std::endl;
   cout<<endl<<endl<<endl;

   //-----------------------------------------------------------------------------------------

   for (unsigned asc_char = min_char, col_num = 1; asc_char <= max_char; asc_char++, col_num++)
    {
     if (col_num > max_col)
       {
          col_num = 1;
          std::cout << "\n";
       }

     std::cout << std::setw(6) << asc_char << std::setw(3) << static_cast<char>(asc_char);
    }

   cout<<endl<<endl<<endl;

   cout<<"Все что отображено в консоле, было выведено в файл OUTPUT.TXT"<<endl;

}



















