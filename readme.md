��������� ����� 20WaysToDie
===========
������� ������ �������� ���
***********
�������� ���� 
-----------
��������� ����� � ������������� ����, ��� ����� ������ ������� �������� �� ������������ ��� ������ ��������� ��������, ������� �������� �����, ����� ������������ ������ �� ������.

���� ����� ������������� ����� (���� ��, ��� � �������, ������ ����� ������� �������) � ������� ���������� �������� (21), ������� ������������ ����� ������. ����� ������, ��� 20 �� ��� -  ������, ������ ��� ������ ������� �������� - �����������. ������ ������, ������ � �������� ���� - "20 �����, ����� �������".

�������� ���� ��������� 
-----------
����������� ��������� � ������������ ����:
```cpp
#include "pch.h" // ���������� ������������������� ����������
#include <iostream> // ���������� ����� � ������ ����������
#include <stdlib.h> // ����������� ���������� ��� �������� ���������� ���������
using namespace std; // ������������� ������������ ������������ ����
```
��������� ��������� ������ � ���������� � ���������� ��� ������ � ������� ����:
```cpp
int endings[21];
int menu_choice;
```
�������� �������:
```cpp
void Menu(); // ������� ��������� ����
// ������� ��� ����
void Endings_Output(); // ������� ��� ������ ���������������� ��������
void Game(); // ������� ������� ����
int Choice(); // ������������� ������� ������
```
�������� ���� ������� �� ���������������� ����������� ����� �������:
```cpp
void Scene1(); void subScene1(); 
void Scene2(); 
void Scene3(); void subScene3_1(); void subScene3_2(); 
void Scene4(); 
void Scene5(); 
void Scene6(); 
void Scene7(); void subScene7_1(); void subScene7_2(); void subScene7_3(); 
void Scene8(); void subScene8(); 
void Scene9(); void subScene9_1(); void subScene9_2(); void subScene9_3();  void subScene9_4(); 
void Scene10(); void subScene10(); 
void Scene11(); void subScene11_1(); void subScene11_2(); void subScene11_3(); 
void Scene12(); void subScene12_1(); void subScene12_2(); void subScene12_3(); void subScene12_4(); 
void Scene13(); void subScene13_1(); void subScene13_2(); void subScene13_3();
void Scene14();
void Scene15(); void subScene15_1(); void subScene15_2(); 
void Scene16(); 
void Scene17();
void Scene18(); 
void Scene19(); 
void Scene20(); 
void Scene21();
void Scene22(); void subScene22_1(); void subScene22_2(); void subScene22_3(); void subScene22_4(); void subScene22_5(); void subScene22_6(); void subScene22_7(); void subScene22_8(); void subScene22_9(); void subScene22_10(); 
void Scene23(); void subScene23();
void Scene24(); void subScene24();
void Scene25();
void Scene26(); void subScene26(); 
void Scene27(); 
void Scene28(); 
void Scene29(); 
void Scene30(); void subScene30_1(); void subScene30_2(); 
void Scene31(); 
void Scene32(); 
void Scene33(); 
```
���� ������ ����� ��������� �� ������ ��������, ��������� ��������, ������ ������ ������ � ����������� �� ��������� �����, ��������:
```cpp
void Scene28()
{
	cout << "����� ����� ��� �����, ���� �������?" << endl;
	cout << "1. � ������" << endl;
	cout << "2. �� ������" << endl;
	cout << "3. � ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene31();
		break;
	case 2:
		Scene31();
		break;
	case 3:
		Scene31();
		break;
	}
}
```
������� ��� ��������:
```cpp
void WinTheGame(); 
void Death1(); 
void Death2(); 
void Death3(); 
void Death4(); 
void Death5(); 
void Death6(); 
void Death7(); 
void Death8(); 
void Death9();
void Death10(); 
void Death11(); 
void Death12(); 
void Death13(); 
void Death14(); 
void Death15(); 
void Death16(); 
void Death17(); 
void Death18(); 
void Death19(); 
void Death20(); 
```
������ ���� ������� ��������:
```cpp
void Death1() 
{
	cout << "�� ���� �� ���������, ��� � �� ���������� ������������� ����" << endl << endl;
	endings[0] = 1;
	Menu();
}
```
