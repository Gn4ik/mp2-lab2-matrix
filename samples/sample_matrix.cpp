// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
  TMatrix<int> a(5), b(5), c(5);

  setlocale(LC_ALL, "Russian");
  cout << "������������ �������� ��������� ������������� ����������� ������"
    << endl;
  for (int i = 0; i < 5; i++)
    for (int j = i; j < 5; j++ )
    {
      a[i][j] =  i * 10 + j;
      b[i][j] = (i * 10 + j) * 100;
    }
  c = a + b;
  cout << "Matrix a = " << endl << a << endl;
  cout << "Matrix b = " << endl << b << endl;
  cout << "Matrix c = a + b" << endl << c << endl;
  c = c - c - a;
  cout << "Matrix c = c - c - a" << endl << c << endl;

  a = b;
  cout << "����������� (a = b)" << endl << "Matrix a = " << endl << a << endl;
  bool compare = (a == b);
  if (compare == true)
  cout << "��������� (a == b)" << endl << "TRUE" << endl;
  compare = (a == c);
  if (compare == false)
      cout << "��������� (a == c)" << endl << "FALSE" << endl;
}
//---------------------------------------------------------------------------
