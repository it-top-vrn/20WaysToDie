/*
    ��������� ����� 20WaysToDie
	������� ������ 
	(c) ������� ��������
	(c) ������������ �������� ��� . �������
	������ 1.0 (08.04.2019)
*/

#include "pch.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int endings[21];
int menu_choice;

/*-----------------------------------------------------------------------*/
// ����
void Menu();
// ������� ��� ����
void Endings_Output();
void Game();
/*-----------------------------------------------------------------------*/
// ������������� ������� ������
int Choice();
/*-----------------------------------------------------------------------*/
// ������������ ���������� �������� (21 ����� ���� �����)
void WinTheGame(); // ������
/*-----------------------------------------------------------------------*/
// ��� ��� � �������� �������, ��, ����� ������ ��� ������ ������ ��������, �� ������ �����
void Death1(); // ������
void Death2(); // ������
void Death3(); // ������
void Death4(); // ������
void Death5(); // ������
void Death6(); // ������
void Death7(); // ������
void Death8(); // ������
void Death9(); // ������
void Death10(); // ������
void Death11(); // ������
void Death12(); // ������
void Death13(); // ������
void Death14(); // ������
void Death15(); // ������
void Death16(); // ������
void Death17(); // ������
void Death18(); // ������
void Death19(); // ������
void Death20(); // ������
/*-----------------------------------------------------------------------*/
// �������� ��� ����� ���� ����� �������� ��������, ����� � ���������������
void Scene1(); void subScene1(); // ������
void Scene2(); // ������ 
void Scene3(); void subScene3_1(); void subScene3_2(); // ������
void Scene4(); // ������
void Scene5(); // ������
void Scene6(); // ������
void Scene7(); void subScene7_1(); void subScene7_2(); void subScene7_3(); // ������
void Scene8(); void subScene8(); // ������
void Scene9(); void subScene9_1(); void subScene9_2(); void subScene9_3();  void subScene9_4(); // ������
void Scene10(); void subScene10(); // ������
void Scene11(); void subScene11_1(); void subScene11_2(); void subScene11_3(); // ������
void Scene12(); void subScene12_1(); void subScene12_2(); void subScene12_3(); void subScene12_4(); // ������
void Scene13(); void subScene13_1(); void subScene13_2(); void subScene13_3();// ������
void Scene14(); // ������
void Scene15(); void subScene15_1(); void subScene15_2(); // ������
void Scene16(); // ������
void Scene17(); // ������
void Scene18(); // ������
void Scene19(); // ������
void Scene20(); // ������
void Scene21(); // ������
void Scene22(); void subScene22_1(); void subScene22_2(); void subScene22_3(); void subScene22_4(); void subScene22_5(); void subScene22_6(); void subScene22_7(); void subScene22_8(); void subScene22_9(); void subScene22_10(); // ������
void Scene23(); void subScene23(); // ������
void Scene24(); void subScene24(); // ������
void Scene25(); // ������
void Scene26(); void subScene26(); // ������
void Scene27(); // ������
void Scene28(); // ������
void Scene29(); // ������
void Scene30(); void subScene30_1(); void subScene30_2(); // ������
void Scene31(); // ������
void Scene32(); // ������
void Scene33(); // ������
/*-----------------------------------------------------------------------*/

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "��������� ����� 20WaysToDie" << endl << "(c) ������� ��������" << endl << "(c) ������������ �������� ��� . �������" << endl << "������ 1.0 (08.04.2019)" << endl << endl;
	system("pause");
	system("cls");
	Menu();
}

/*-----------------------------------------------------------------------*/
// ������� ��� �������� ����
void Endings_Output()
{
	cout << "���������������� ��������: " << endl << endl;
	for (int i = 0; i < 21; i++)
	{
		switch (i)
		{
		case 0:
			if (endings[i] == 1)
			{
				cout << "1. ����, ��� � �� ���������� ������������� ����" << endl;
			}
			break;
		case 1:
			if (endings[i] == 1)
			{
				cout << "2. ������������ ����������� ��������� � ���� ������ ������ ��������" << endl;
			}
			break;
		case 2:
			if (endings[i] == 1)
			{
				cout << "3. ����� ������ �� ������ \"� ��� ����� �����?\" �� ����� �� �������" << endl;
			}
			break;
		case 3:
			if (endings[i] == 1)
			{
				cout << "4. ��������� ������ ����� ���������� �����������" << endl;
			}
			break;
		case 4:
			if (endings[i] == 1)
			{
				cout << "5. ���������� ���� (�� �������������)" << endl;
			}
			break;
		case 5:
			if (endings[i] == 1)
			{
				cout << "���� � �������� ��������, ���� ���������� ����� ����" << endl;
			}
			break;
		case 6:
			if (endings[i] == 1)
			{
				cout << "���������� �� ����� ������, ������������� � �����" << endl;
			}
			break;
		case 7:
			if (endings[i] == 1)
			{
				cout << "���� � �������� �������. ����, ��� ������ ����" << endl;
			}
			break;
		case 8:
			if (endings[i] == 1)
			{
				cout << "���� ����� ������� ��������, ����� ������������ � ����������� ���������" << endl;
			}
			break;
		case 9:
			if (endings[i] == 1)
			{
				cout << "��������������� �������� ���������" << endl;
			}
			break;
		case 10:
			if (endings[i] == 1)
			{
				cout << "������ �������� ��� �������, ������ ���. ������� � ����" << endl;
			}
		case 11:
			if (endings[i] == 1)
			{
				cout << "���� ����� ��-�������, ������ ��� ����� ��� �������" << endl;
			}
			break;
		case 12:
			if (endings[i] == 1)
			{
				cout << "������ �������� ��������� �� �����" << endl;
			}
			break;
		case 13:
			if (endings[i] == 1)
			{
				cout << "���������� �������" << endl;
			}
			break;
		case 14:
			if (endings[i] == 1)
			{
				cout << "����� ��-�� �������������� ����� ��������" << endl;
			}
			break;
		case 15:
			if (endings[i] == 1)
			{
				cout << "�������� ��������� �������" << endl;
			}
			break;
		case 16:
			if (endings[i] == 1)
			{
				cout << "��� �� ������ ��������� �������" << endl;
			}
			break;
		case 17:
			if (endings[i] == 1)
			{
				cout << "���������� ������� �� ����" << endl;
			}
			break;
		case 18:
			if (endings[i] == 1)
			{
				cout << "�������� �������� ���������" << endl;
			}
			break;
		case 19:
			if (endings[i] == 1)
			{
				cout << "����, ������ ��� �� ���� �������� ������� �������" << endl;
			}
			break;
		case 20:
			if (endings[i] == 1)
			{
				cout << "�������� �� ��� ������� � ������ ���� ������� �����" << endl;
			}
			break;
		default:
			break;
		}
	}
	cout << endl;
	Menu();
}

void Game()
{
	Scene1();
}

// ���� ������� ����
void Menu()
{
	cout << "����: " << endl;
	cout << "1. ������" << endl;
	cout << "2. �������� �������� �������� (����� �� 21 �����)" << endl;
	cout << "3. �����" << endl;
	cout << "����� �������� (1, 2 ��� 3): ";
	cin >> menu_choice;
	cout << endl;
	system("cls");
	switch (menu_choice)
	{
	case 1:
		Game();
		break;
	case 2:
		Endings_Output();
		break;
	case 3:
		exit(0);
		break;
	}
}
/*-----------------------------------------------------------------------*/
// ������� ������
int Choice()
{
	int choice;
Retry:
	cout << "����� �������� (1, 2 ��� 3): "; cin >> choice;
	if (choice < 1 || choice > 3)
	{
		cout << "�������� ������������: " << endl;
		goto Retry;
	}
	cout << endl << endl;
	return choice;
}
/*-----------------------------------------------------------------------*/
// ������
void Death1() // �������������
{
	cout << "�� ���� �� ���������, ��� � �� ���������� ������������� ����" << endl << endl;
	endings[0] = 1;
	Menu();
}

void Death2() // �������������
{
	cout << "�� ���� �� �������� ���������� ���������" << endl << "������ ���� ����� �� �������, ��� ���� �������� ������" << endl << endl;
	endings[1] = 1;
	Menu();
}

void Death3() // �������������
{
	cout << "�� ��� � �� ������� ������ �� ������ � ������ �����, ��� ����� �� ���� �� ����������������� �������" << endl << endl;
	endings[2] = 1;
	Menu();
}

void Death4() // �������������
{
	cout << "�������� ����� 10 ����� ����� ������� ���� ������� �������� � ���� �������� ����������." << endl << "����� �� ��� ����������� � ����������� ����������� � ������ ����� � ������� ���� �� �����" << endl << endl;
	endings[3] = 1;
	Menu();
}

void Death5() // �������������
{
	cout << "���� ���� �����, ��� �� ������ �� ������� ����� �������, � ����������" << endl << endl;
	endings[4] = 1;
	Menu();
}

void Death6() // �������������
{
	cout << "���� ����� �������� ���, ��� �� ���� � �������� �������� ����� ������ ������" << endl << "������: �� ���� ������ ���������� ��������" << endl << endl;
	endings[5] = 1;
	Menu();
}

void Death7() // �������������
{
	cout << "��� ������ �� ������� �������� � �������� �������, ������ ������ ������� ������������� ������ �������� � ���������� ���� � �����" << endl << endl;
	endings[6] = 1;
	Menu();
}

void Death8() // �������������
{
	cout << "�� � ������� ������� � ����. ������� ������ ���� � �������� ����� � ������ �����" << endl << "� ����� ��������� ����� ������� � �� ������� ������� ���� �����" << endl << "� ����� ������� ���� �����" << endl << endl;
	endings[7] = 1;
	Menu();
}

void Death9() // �������������
{
	cout << "������ ��� �������� �� ����� ����� �����. ����� ��� �� ����� �� ���� ����" << endl << endl;
	endings[8] = 1;
	Menu();
}

void Death10() // �������������
{
	cout << "�� ��� � �� �����, ���������� �� � ���� ��������� � ������� � ��������, ������ ��� ���� ������������������ ��������" << endl << endl;
	endings[9] = 1;
	Menu();
}

void Death11() // �������������
{
	cout << "���� ��������� �� ���������� � ��� ������, ���������, �����-���� �������� � ������ ���� �� �� �� ����" << endl << "����� �������, ��� �� �����" << endl << endl;
	endings[10] = 1;
	Menu();
}

void Death12() // �������������
{
	cout << "����� ������� ����� ����? ��, �� ����, ������ ��� � ��� ������." << endl << "� �� �����, � �����, ��� ������" << endl << endl;
	endings[11] = 1;
	Menu();
}

void Death13() // �������������
{
	cout << "�� ���� ���-�� ����� ��� ������? ���? � ��� ������� ������" << endl << "� ������ ���������, ������ ��� ����� �� ��������� ����� � ���� � �����" << endl << endl;
	endings[12] = 1;
	Menu();
}

void Death14() // �������������
{
	cout << "���� ����� ������������ ����� ����� � ���� ��������� ������� � ���������" << endl << "� ����� �� ��� ���������� �� ��� ���" << endl << endl;
	endings[13] = 1;
	Menu();
}

void Death15() // �������������
{
	cout << "������ � ���, �� ������� ��� ��� ���� ��������, �� ������� ����� ���� ��������� ����������" << endl << "���� ������ �������� �� ������� ��������, ����� ���������� �� ���" << endl << "������, �� � ����������? ���� ���� ������ �������, ������ ��� ������� �� ������ ����" << endl << endl;
	endings[14] = 1;
	Menu();
}

void Death16() // �������������
{
	cout << "������ ������� ���� ������ �����, ����� �������� �������� ����" << endl << "� ���� � ���� ������ ����������� ������� ����� � �� ����� ����� �����" << endl << endl;
	endings[15] = 1;
	Menu();
}

void Death17() // �������������
{
	cout << "�� ��������� �� ������, ��� � �� ������� ��� ����� ������� ���������� �� ������" << endl << "������: �� ������, ��������������� ������" << endl << endl;
	endings[16] = 1;
	Menu();
}

void Death18() // �������������
{
	cout << "�� ����� ������������� ������ ������ (����, ��� �����������), ����� ���� � ��������������������� ����� - ������ ���� ���������� ���������" << endl << "����� ���������� ���� � ����������� ��� � �������� �����" << endl << endl;
	endings[17] = 1;
	Menu();
}

void Death19() // �������������
{
	cout << "��� ��� �������, ��� ��� ������ �� ����� ����" << endl << "��������� ������� ����� �������� �������, �� ��������� �� ���������. � �� ������ � ���" << endl << endl;
	endings[18] = 1;
	Menu();
}

void Death20() // �������������
{
	cout << "��� ��� � ��������������: �� �����" << endl << endl;
	endings[19] = 1;
	Menu();
}


/*-----------------------------------------------------------------------*/
// ���������� ��������
void WinTheGame() // �������������
{
	cout << "���� ������� ��������� �� ���� ��������� ����� � ����������. �������!" << endl << endl;
	endings[20] = 1;
	Menu();
}
/*-----------------------------------------------------------------------*/
// �����
void Scene1()
{
	cout << "�� ������� � ������ ���������, ����������� ������ ������ �� �����." << endl << "� ����� ������ �������� ������� ����� ��������� ������." << endl << endl;
	cout << "1. �������� �� ��������" << endl;
	cout << "2. ������� �������" << endl;
	cout << "3. ���������� ���� � �������� ����� ����" << endl;
	switch (Choice())
	{
	case 1:
		Scene2();
		break;
	case 2:
		Scene3();
		break;
	case 3:
		subScene1();
		break;
	}
}

void subScene1()
{
	cout << "����� ����� ������ ������������� ����� ������ ������� " << endl << "\"���� ������ �� �������� ���� �������, " << endl << "����� ��������� � ������� 2 - 10 ����� ������� ���\"" << endl << endl;
	cout << "1. �������� �� ��������" << endl;
	cout << "2. ������� �������" << endl;
	cout << "3. ����� 2 - 10 ����� ������� ���" << endl;
	switch (Choice())
	{
	case 1:
		Scene2();
		break;
	case 2:
		Scene3();
		break;
	case 3:
		Death1();
		break;
	}
}

void Scene2()
{
	cout << "������� � ���� �� ��������, �� �������� ������ ���� ���������" << endl << "�� ��� ������� ����� 1% �������." << endl << "��� ������ ��� ����� ��������� ������ ���� ���" << endl;
	cout << "1. ��������� � �������" << endl;
	cout << "2. �������� � 20WaysToDie" << endl;
	cout << "3. ��������� ����" << endl;
	switch (Choice())
	{
	case 1:
		Scene5();
		break;
	case 2:
		Scene6();
		break;
	case 3:
		Scene7();
		break;
	}
}

void Scene3()
{
	cout << "����� � ������ ������, �� ������ � �����." << endl << "� �����: ����, �����, ����, �����, ����, ����� �����" << endl << "������ ��� ������� �������." << endl << " �� ����� �� ���� �� ������� �����" << endl;
	cout << "1. ������� �����" << endl;
	cout << "2. ������ ����� �����, ��� ��� ������ �� ���� ��������" << endl;
	cout << "3. ���������� � ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene4();
		break;
	case 2:
		Scene4();
		break;
	case 3:
		subScene3_1();
		break;
	}
}

void subScene3_1()
{
	cout << "�� ������ ��������?" << endl;
	cout << "1. ������� �����" << endl;
	cout << "2. ������ ����� �����, ��� ��� ������ �� ���� ��������" << endl;
	cout << "3. ��, �� � ������ ���?" << endl;
	switch (Choice())
	{
	case 1:
		Scene4();
		break;
	case 2:
		Scene4();
		break;
	case 3:
		subScene3_2();
		break;
	}
}

void subScene3_2()
{
	cout << "���, ������ ��� ����� ������, ����� ���� ��� �����?" << endl;
	cout << "1. ������� �����" << endl;
	cout << "2. ����������� �������� �� ����� ������" << endl;
	cout << "3. ������� �� �����" << endl;
	switch (Choice())
	{
	case 1:
		Scene4();
		break;
	case 2:
		Death5();
		break;
	case 3:
		Death5();
		break;
	}
}

void Scene4()
{
	cout << "����� ����� ��� ������ ���������� �������" << endl << "�� ���� ����� ���������� ���, ������� � ������-�� �������� � ���� ����" << endl;
	cout << "1. �������� ���" << endl;
	cout << "2. �������� ������ � ��������" << endl;
	cout << "3. ���������� �� ����� ���� �� ��������� ����" << endl;
	switch (Choice())
	{
	case 1:
		Scene11();
		break;
	case 2:
		Scene12();
		break;
	case 3:
		Scene13();
		break;
	}
}

void Scene5()
{
	cout << "\"��������� ��������� �������, � �������� ��������, � ��� ������\"" << endl;
	cout << "1. ����, �������, � ������ � �����-�� ������ �������" << endl << "�����, ��������!" << endl;
	cout << "2. �����, � ���� ����� ����������� �����, ��� � ������" << endl;
	cout << "3. ���� �������� �����, �������� ����������" << endl << "�����: ������ �������, ���� ����� ���" << endl;
	switch (Choice())
	{
	case 1:
		Scene9();
		break;
	case 2:
		Scene10();
		break;
	case 3:
		subScene9_3();
		break;
	}
}

void Scene6()
{
	cout << "������ �� ����� �������� ���� ��������, ��� ������� ����������" << endl << "��� ������ ������ ������?" << endl;
	cout << "1. �������� �������" << endl;
	cout << "2. ������ �������" << endl;
	cout << "3. �������� � ���, ��� �� ��������� �� ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void Scene7()
{
	cout << "\"��, ����������, �����, ������� ��� ��������" << endl << "�� ��� � ����� ����� �����������, �� �������� ��� ��� � ����?" << endl << "��� �����? ��� ������? � ������� �� ���� �����?" << endl << "� �������� �����? ���� �� ���� ��������, ������ �������� ��." << endl << "������ ��� �� ������ ���������, � �� ��� ������ �����" << endl << "� ��� ���� �� ��� ����� ����...\"" << endl;
	cout << "1. ���, � ��� � �����-�� ������� ������ ����, ��� ������ �����..." << endl;
	cout << "2. ����������" << endl;
	cout << "3. ������� ������" << endl;
	switch (Choice())
	{
	case 1:
		subScene7_1();
		break;
	case 2:
		subScene7_2();
		break;
	case 3:
		subScene7_3();
		break;
	}
}

void subScene7_1()
{
	cout << "\"��� ������ ������ � ������ �������?!?" << endl << "����� ������ ��������� �� ������ ��������-�����������!" << endl << "������ ������� ��� ���� ����� ������� �������� ������-������!" << endl << "� ���, � ���� ��� ��� ������ ������� ��������!" << endl << "� ����� ������ �� ����� ������� � ������ � ���! � �� ��...\"" << endl << "���� �� ������ ����������, ��� ��� ������� ����� ���������� �����������";
	cout << "1. �������� �������" << endl;
	cout << "2. ������ �������" << endl;
	cout << "3. �������� � ���, ��� �� ��������� �� ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void subScene7_2()
{
	cout << "\"�� ��� ������� ��?" << endl << "��� ��� �� ��� ����?" << endl << "���, ������� ��������! � �� ������ ������, ��� ��� ���?!!?" << endl << "��� � ������ �� ����� � �������!!! ��� ���...\"" << endl << "������ �� ����� ������� ����, ����� ��� ��� ���� ��������� � �������, ��� ������� ����������" << endl;
	cout << "1. �������� �������" << endl;
	cout << "2. ������ �������" << endl;
	cout << "3. �������� � ���, ��� �� ��������� �� ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void subScene7_3()
{
	cout << "��� ������ �� ������ ������, ������� ����������." << endl << "����, ������ �� ��� ������ ������?" << endl;
	cout << "1. �������� �������" << endl;
	cout << "2. ������ �������" << endl;
	cout << "3. �������� � ���, ��� �� ��������� �� ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void Scene8()
{
	cout << "� ���� ���� �� ��� ������ �������..." << endl << "�����������, �������� ������, ������, ���� ������ ���� ����� �� � ������" << endl << "��� �� ����� ����� �� ���?" << endl;
	cout << "1. ������ ��� �������, ��� ������ ���� �������..." << endl;
	cout << "2. ����� ������� ������, �� � ��������� ��" << endl;
	cout << "3. � ���� ��� ��� � �����, �� ������� �� � ���������?" << endl;
	switch (Choice())
	{
	case 1:
		subScene8();
		break;
	case 2:
		subScene8();
		break;
	case 3:
		subScene8();
		break;
	}
}

void subScene8()
{
	cout << "�� ��� ����� ��� ��� ���� ��������?" << endl << "�� ��������� ������, � ������� ���� ���� �������� �������" << endl;
	cout << "1. �������?!?! ��� � ���� �������� ��������!!!" << endl;
	cout << "2. � � ��� ����� ����� ��������?" << endl;
	cout << "3. ��� ������ ������� ������? ��� ��� ������? ��� ��� ���������?" << endl << "� �� �������� ���� ��������..." << endl;
	switch (Choice())
	{
	case 1:
		Death3();
		break;
	case 2:
		Death3();
		break;
	case 3:
		Death3();
		break;
	}
}

void Scene9()
{
	cout << "\"����� ������� ��������, ����������\"" << endl;
	cout << "1. �� ������ � ����?!? ����� �����, ������� � � �� ����, ��� ���� �����!" << endl;
	cout << "2. ���������� ��� �������, ����� ������� �� ������� ��� �!" << endl;
	cout << "3. ������-�����, 221b" << endl;
	switch (Choice())
	{
	case 1:
		subScene9_1();
		break;
	case 2:
		subScene9_2();
		break;
	case 3:
		subScene9_3();
		break;
	}
}

void subScene9_1()
{
	cout << "����������� ������� �����, � ����� ������� ����������" << endl;
	cout << "1. �������� �������" << endl;
	cout << "2. ������ �������" << endl;
	cout << "3. �������� � ���, ��� �� ��������� �� ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void subScene9_2()
{
	cout << "\"�� ��� ��� �� ���, � ��� �� ��������� ����������� ����������" << endl << "��� ������ �� ���� ��� ����� ������\"" << endl;
	cout << "1. �� ����� ��!" << endl;
	cout << "2. ����� ������! ���������� � ����������! ��� �� ������!" << endl;
	cout << "3. �� ������ � ����?!? ����� �����, ������� � � �� ����, ��� ���� �����!" << endl;
	switch (Choice())
	{
	case 1:
		subScene9_4();
		break;
	case 2:
		Death4();
		break;
	case 3:
		subScene9_1();
		break;
	}
}

void subScene9_3()
{
	cout << "\"����� ������\", - ������� ������� � �������� ������" << endl << "� ����� ������� ����������" << endl;
	cout << "1. �������� �������" << endl;
	cout << "2. ������ �������" << endl;
	cout << "3. �������� � ���, ��� �� ��������� �� ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void subScene9_4()
{
	cout << "\"�� �� � �����\", - ������� �������� � ������� ������" << endl << "�������, ���� �����, ����������" << endl;
	cout << "1. �������� �������" << endl;
	cout << "2. ������ �������" << endl;
	cout << "3. �������� � ���, ��� �� ��������� �� ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void Scene10()
{
	cout << "\"�������, ��� �������, ��������, ��� ���������, ����� � ������ ������\"" << endl;
	cout << "1. �����, �� ���� ��������� ��..." << endl;
	cout << "2. � ������� � �����-�� ������ ������� � ��� ����� ������" << endl;
	cout << "3. ������ � ������� �� ������, �������� ������" << endl;
	switch (Choice())
	{
	case 1:
		subScene9_1();
		break;
	case 2:
		Scene9();
		break;
	case 3:
		subScene10();
		break;
	}
}

void subScene10()
{
	cout << "�� ������� ������, � ������� �� �������� ������ ������ � ����������" << endl;
	cout << "1. �������� �������" << endl;
	cout << "2. ������ �������" << endl;
	cout << "3. �������� � ���, ��� �� ��������� �� ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene3();
		break;
	case 2:
		Death2();
		break;
	case 3:
		Scene8();
		break;
	}
}

void Scene11()
{
	cout << "��� ����� ������ ���?" << endl;
	cout << "1. ��� �������" << endl;
	cout << "2. ��� �����" << endl;
	cout << "3. ��� �������" << endl;
	switch (Choice())
	{
	case 1:
		subScene11_1();
		break;
	case 2:
		subScene11_2();
		break;
	case 3:
		subScene11_3();
		break;
	}
}

void subScene11_1()
{
	cout << "����� ��� � �������� ������ �����, �� �������� ���� ������ � ���� � �������" << endl << "���������, �� �����, ��� ������ �� �����-�� ����" << endl;
	cout << "1. ������� ���" << endl;
	cout << "2. ���, ��������!" << endl;
	cout << "3. ��������� ���� � ����, ������������ ��������������� �����������, ����� ������� ���" << endl;
	switch (Choice())
	{
	case 1:
		Scene14();
		break;
	case 2:
		Scene14();
		break;
	case 3:
		Scene14();
		break;
	}
}

void subScene11_2()
{
	cout << "������� � ����, �� ����� ������ ������� ������, ������� ���������� � ���� � �����" << endl;
	cout << "1. ��������� �����" << endl;
	cout << "2. ��������� ����� ��� ���� ��������" << endl;
	cout << "3. �������� ������ � ��������" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		Scene15();
		break;
	case 3:
		Scene12();
		break;
	}
}

void subScene11_3()
{
	cout << "� ������� � ������� ������� �� ����, �� �������������� � ��������� ����� � �����" << endl << "�� ��������� ���������" << endl;
	cout << "1. �������� �����, ������ ���, ��� ��� � ��������" << endl;
	cout << "2. �������� ����� � ����������� ����������" << endl;
	cout << "3. �������� ������ � ��������" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		subScene15_1();
		break;
	case 3:
		Scene12();
		break;
	}
}

void Scene12()
{
	cout << "\"�� ���� ������� ������ ���. �� ����� ���� � ����. � ��� ��� ����� ���������" << endl << "��, �� � ��� �� ������ ���\"" << endl;
	cout << "1. ��������� �����" << endl;
	cout << "2. ������� ���" << endl;
	cout << "3. ������ ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		Scene14();
		break;
	case 3:
		subScene12_1();
		break;
	}
}

void subScene12_1()
{
	cout << "\"������ ����� ������� � ���� �������, ������ ��� ������ �� ��� ���!" << endl << "����� ����. � ����\"" << endl;
	cout << "1. ��������� �����" << endl;
	cout << "2. ������� ���" << endl;
	cout << "3. ������ ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		Scene14();
		break;
	case 3:
		subScene12_2();
		break;
	}
}

void subScene12_2()
{
	cout << "\"��� ���, ��������� ��������? ��� ���� � ����, � ����� ���������!" << endl << "��� ��� ������, ������ ������\"" << endl;
	cout << "1. ��������� �����" << endl;
	cout << "2. ������� ���" << endl;
	cout << "3. ������ ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		Scene14();
		break;
	case 3:
		subScene12_3();
		break;
	}
}

void subScene12_3()
{
	cout << "\"��, ������ �� �����, ��� �����\"" << endl;
	cout << "1. ��������� �����" << endl;
	cout << "2. ������� ���" << endl;
	cout << "3. ������ ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		Scene14();
		break;
	case 3:
		subScene12_4();
		break;
	}
}

void subScene12_4()
{
	cout << "�� ��������� �������� ��������� ��������, �� � ���� ������ �� ����������" << endl << "�����, ����� ������ ��� ��� ������?" << endl;
	cout << "1. ��������� �����" << endl;
	cout << "2. ������� ���" << endl;
	cout << "3. ������ ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		Scene14();
		break;
	case 3:
		subScene12_4();
		break;
	}
}

void Scene13()
{
	cout << "����������, �� � ���� ������ �� ����������" << endl;
	cout << "1. �������� ���" << endl;
	cout << "2. �������� ������ � ��������" << endl;
	cout << "3. ����������� ��� ���" << endl;
	switch (Choice())
	{
	case 1:
		Scene11();
		break;
	case 2:
		Scene12();
		break;
	case 3:
		subScene13_1();
		break;
	}
}

void subScene13_1()
{
	cout << "����� �� ����������, ��� ��� ��?" << endl;
	cout << "1. �������� ���" << endl;
	cout << "2. �������� ������ � ��������" << endl;
	cout << "3. ����������� ��� ���" << endl;
	switch (Choice())
	{
	case 1:
		Scene11();
		break;
	case 2:
		Scene12();
		break;
	case 3:
		subScene13_2();
		break;
	}
}

void subScene13_2()
{
	cout << "����� ������. ���� ������� �������� ������� ������� �� ��� ��������������" << endl;
	cout << "1. �������� ���" << endl;
	cout << "2. �������� ������ � ��������" << endl;
	cout << "3. �, ����, �� ���� ��� ����� ������?" << endl;
	switch (Choice())
	{
	case 1:
		Scene11();
		break;
	case 2:
		Scene12();
		break;
	case 3:
		subScene13_3();
		break;
	}
}

void subScene13_3()
{
	cout << "�� �����, � �� ����� ��������, ��� ������ ���� ������-��" << endl;
	cout << "1. �������� ���" << endl;
	cout << "2. �������� ������ � ��������" << endl;
	cout << "3. ������ �� ������ ����" << endl;
	switch (Choice())
	{
	case 1:
		Scene11();
		break;
	case 2:
		Scene12();
		break;
	case 3:
		subScene13_3();
		break;
	}
}

void subScene13_4()
{
	cout << "����� ���� � ���������� ����, �� ��������� � �����" << endl << "���� ������� �� ��������. �������� ������ �����" << endl;
	cout << "1. ��������� �����" << endl;
	cout << "2. �������� ������ ����� �� ������� ������ ������ �����" << endl;
	cout << "3. �������� ������ � ��������" << endl;
	switch (Choice())
	{
	case 1:
		Scene15();
		break;
	case 2:
		Scene15();
		break;
	case 3:
		Scene12();
		break;
	}
}

void Scene14()
{
	cout << "������ ��� � ����������� �� ��������, �� ������������ � �����-�� ����������" << endl << "����� ����� ��� ��������� ������ ������ �������" << endl;
	cout << "1. ����� � ����� ������" << endl;
	cout << "2. ����� � ������� ������" << endl;
	cout << "3. ����� � ������ ������" << endl;
	switch (Choice())
	{
	case 1:
		Scene16();
		break;
	case 2:
		Scene17();
		break;
	case 3:
		Scene18();
		break;
	}
}

void Scene15()
{
	cout << "�������� �����, �� ������ ��� �������" << endl << "������ ������� ����� �������� ������" << endl << "�� ������ � ������� ������ �����-�� ��������" << endl << "�� ���� �������� �������� ������������� �����" << endl << "����� ��� �������?" << endl;
	cout << "1. �����" << endl;
	cout << "2. ����" << endl;
	cout << "3. �����" << endl;
	switch (Choice())
	{
	case 1:
		Scene19();
		break;
	case 2:
		Scene20();
		break;
	case 3:
		Scene21();
		break;
	}
}

void subScene15_1()
{
	cout << "�������� ����� � ���� �� �������� ���� ����, �� ������ ��� �������" << endl << "������ ������� ����� �������� ������" << endl << "�� ������ � ������� ������ �����-�� ��������" << endl << "�� ���� �������� �������� ������������� �����" << endl << "����� ��� �������?" << endl;
	cout << "1. �����" << endl;
	cout << "2. ����" << endl;
	cout << "3. �����" << endl;
	switch (Choice())
	{
	case 1:
		Scene19();
		break;
	case 2:
		Scene20();
		break;
	case 3:
		Scene21();
		break;
	}
}

void subScene15_2()
{
	cout << "�� ������ ��� �������" << endl << "������ ������� ����� �������� ������" << endl << "�� ������ � ������� ������ �����-�� ��������" << endl << "�� ���� �������� �������� ������������� �����" << endl << "����� ��� �������?" << endl;
	cout << "1. �����" << endl;
	cout << "2. ����" << endl;
	cout << "3. �����" << endl;
	switch (Choice())
	{
	case 1:
		Scene19();
		break;
	case 2:
		Scene20();
		break;
	case 3:
		Scene21();
		break;
	}
}

void Scene16()
{
	cout << "���� �� ��� �� ������ �������, ����� �� ����� ������ ����� ��������� �������� �����" << endl << "������ �� ������ ���� ������ ������, ����� ��� �������" << endl;
	cout << "1. ������ ��� �����!" << endl;
	cout << "2. ������ ������!" << endl;
	cout << "3. �������, ��� ���� ��� �����!" << endl;
	switch (Choice())
	{
	case 1:
		Scene22();
		break;
	case 2:
		Scene22();
		break;
	case 3:
		Scene22();
		break;
	}
}

void Scene17()
{
	cout << "�� ������ � ������������� ������, � ������ ����������, � ������� ������� ��� ���������� �������" << endl << "��� ����� ���� � ����!" << endl << "�� ����� ��������� ������ ����-�� ���" << endl;
	cout << "1. ���� ����� ���� �� ������������� � ����������� ������ � ��������, ������ ������" << endl;
	cout << "2. �������������� � ��������" << endl;
	cout << "3. �������� �� ������� ����� � ��������� �������" << endl;
	switch (Choice())
	{
	case 1:
		Scene23();
		break;
	case 2:
		Death8();
		break;
	case 3:
		Scene14();
		break;
	}
}

void Scene18()
{
	cout << "��� �� �������, �� �������� �������, ������ ���� ����� ��� ������, � � ��� ��� ����� ������� � �������" << endl << "\"������ �� ������ ��������? ������ ����� ������! ����� ����������\", - ������ ������" << endl;
	cout << "1. ����������� �����" << endl;
	cout << "2. ������� ������� � �������" << endl;
	cout << "3. ���������� � ����� ������" << endl;
	switch (Choice())
	{
	case 1:
		Death6();
		break;
	case 2:
		Death7();
		break;
	case 3:
		Scene20();
		break;
	}
}

void Scene19()
{
	cout << "�� ������������ � ������� � �������� ������� ���������" << endl << "����� ����, ��� �������� �����������" << endl;
	cout << "1. �������� �� �������� ���� �������" << endl;
	cout << "2. ����� �� �����������" << endl;
	cout << "3. ����� �� \"������� ������ ����\"" << endl;
	switch (Choice())
	{
	case 1:
		subScene15_2();
		break;
	case 2:
		Scene25();
		break;
	case 3:
		Death9();
		break;
	}
}

void Scene20()
{
	cout << "�� ������ � ��������������� ����� ������, ����� ������������ ��������� �������� �� �����" << endl << "����� �� ���� �� ���� ������ �������� ���������������� ��������" << endl << "����, �� ���� ��� �� �������!" << endl;
	cout << "1. ���������� ��������� � ��� � �������, ������ \"����-���-��-��\"" << endl;
	cout << "2. ���������� ��������� � ��� � �������, ������ \"I am murloc!\"" << endl;
	cout << "3. ������� �������" << endl;
	switch (Choice())
	{
	case 1:
		Death13();
		break;
	case 2:
		Death10();
		break;
	case 3:
		subScene15_2();
		break;
	}
}

void Scene21()
{
	cout << "�� ��������� � ����� ����� �������� ���, �� ������� ����� ����� � ����� �������� � ����: \"�� �� ��������!\"" << endl;
	cout << "1. �� ��, ����� �������" << endl;
	cout << "2. ������" << endl;
	cout << "3. ��������� ������" << endl;
	switch (Choice())
	{
	case 1:
		subScene15_2();
		break;
	case 2:
		Scene27();
		break;
	case 3:
		Scene26();
		break;
	}
}

void Scene22()
{
	cout << "����� ��� �������. ���� ����?" << endl;
	cout << "1. ������ ��� �����!" << endl;
	cout << "2. ������ ������!" << endl;
	cout << "3. �������, ��� ���� ��� �����!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_1();
		break;
	case 2:
		subScene22_1();
		break;
	case 3:
		subScene22_1();
		break;
	}
}

void subScene22_1()
{
	cout << "� ����� ��� �������. ���� ����?" << endl;
	cout << "1. ������ ��� �����!" << endl;
	cout << "2. ������ ������!" << endl;
	cout << "3. �������, ��� ���� ��� �����!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_2();
		break;
	case 2:
		subScene22_2();
		break;
	case 3:
		subScene22_2();
		break;
	}
}

void subScene22_2()
{
	cout << "����� ��� �������. ���� ����?" << endl;
	cout << "1. ������ ��� �����!" << endl;
	cout << "2. ������ ������!" << endl;
	cout << "3. �������, ��� ���� ��� �����!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_3();
		break;
	case 2:
		subScene22_3();
		break;
	case 3:
		subScene22_3();
		break;
	}
}

void subScene22_3()
{
	cout << "� ����� ��� �������. ���� ����?" << endl;
	cout << "1. ������ ��� �����!" << endl;
	cout << "2. ������ ������!" << endl;
	cout << "3. �������, ��� ���� ��� �����!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_4();
		break;
	case 2:
		subScene22_4();
		break;
	case 3:
		subScene22_4();
		break;
	}
}

void subScene22_4()
{
	cout << "����� ��� �������. ���� ����?" << endl;
	cout << "1. ������ ��� �����!" << endl;
	cout << "2. ������ ������!" << endl;
	cout << "3. �������, ��� ���� ��� �����!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_5();
		break;
	case 2:
		subScene22_5();
		break;
	case 3:
		subScene22_5();
		break;
	}
}

void subScene22_5()
{
	cout << "� ����� ��� �������. ���� ����?" << endl;
	cout << "1. ������ ��� �����!" << endl;
	cout << "2. ������ ������!" << endl;
	cout << "3. �������, ��� ���� ��� �����!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_6();
		break;
	case 2:
		subScene22_6();
		break;
	case 3:
		subScene22_6();
		break;
	}
}

void subScene22_6()
{
	cout << "����� ��� �������. ���� ����?" << endl;
	cout << "1. ������ ��� �����!" << endl;
	cout << "2. ������ ������!" << endl;
	cout << "3. �������, ��� ���� ��� �����!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_7();
		break;
	case 2:
		subScene22_7();
		break;
	case 3:
		subScene22_7();
		break;
	}
}

void subScene22_7()
{
	cout << "� ����� ��� �������. ���� ����?" << endl;
	cout << "1. ������ ��� �����!" << endl;
	cout << "2. ������ ������!" << endl;
	cout << "3. �������, ��� ���� ��� �����!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_8();
		break;
	case 2:
		subScene22_8();
		break;
	case 3:
		subScene22_8();
		break;
	}
}

void subScene22_8()
{
	cout << "����� ��� �������. ���� ����?" << endl;
	cout << "1. ������ ��� �����!" << endl;
	cout << "2. ������ ������!" << endl;
	cout << "3. �������, ��� ���� ��� �����!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_9();
		break;
	case 2:
		subScene22_9();
		break;
	case 3:
		subScene22_9();
		break;
	}
}

void subScene22_9()
{
	cout << "� ����� ��� �������. ���� ����?" << endl;
	cout << "1. ������ ��� �����!" << endl;
	cout << "2. ������ ������!" << endl;
	cout << "3. �������, ��� ���� ��� �����!" << endl;
	switch (Choice())
	{
	case 1:
		subScene22_10();
		break;
	case 2:
		subScene22_10();
		break;
	case 3:
		subScene22_10();
		break;
	}
}

void subScene22_10()
{
	cout << "�� ��������� ��������� � ����� ������� ����� ����" << endl << "������ ���, ������" << endl << "���� ����, ��� �� ������! �� ����� �����" << endl;
	cout << "1. �������-��! �������!" << endl;
	cout << "2. ����, ��" << endl;
	cout << "3. ��������� �� �������" << endl;
	switch (Choice())
	{
	case 1:
		WinTheGame();
		break;
	case 2:
		WinTheGame();
		break;
	case 3:
		WinTheGame();
		break;
	}
}

void Scene23()
{
	cout << "�� ����� ����� ����� ������, � ����� ������������ � ��������� ����� �������" << endl << "� ��� ��������� ������ ���, ����� ������ �����������" << endl;
	cout << "1. ������ �� ������" << endl;
	cout << "2. �������� ������ ������ � ��������" << endl;
	cout << "3. ������� ���-������" << endl;
	switch (Choice())
	{
	case 1:
		Death11();
		break;
	case 2:
		Death11();
		break;
	case 3:
		subScene23();
		break;
	}
}

void subScene23()
{
	cout << "�� ����� �� ���� ����, ������� ���� �� ������" << endl << "� ����� ��������� �� ���� Smells Like Teen Spirit �� ��������� �����" << endl << "�����, ������� ��� �����, ���� �� ����� � ���� �������� �� ����" << endl << "����������, �� ��� ��������� - � ����� ����� �������� ������ ������ " << endl;
	cout << "1. ���� � ������" << endl;
	cout << "2. � ������ ����" << endl;
	cout << "3. ������ ���� �" << endl;
	switch (Choice())
	{
	case 1:
		Scene24();
		break;
	case 2:
		Scene24();
		break;
	case 3:
		Scene24();
		break;
	}
}

void Scene24()
{
	cout << "�� �������� � ��������� ������� ������� � ���� ����� ��������� ���� �� ������� ��������, ����� ����� ������ ��������� ����" << endl;
	cout << "1. ������ ��������" << endl;
	cout << "2. �������� 2" << endl;
	cout << "3. Action �3" << endl;
	switch (Choice())
	{
	case 1:
		subScene24();
		break;
	case 2:
		Death12();
		break;
	case 3:
		subScene24();
		break;
	}
}

void subScene24()
{
	cout << "��, ���! �� �� ������ � ���������! ��� � ����������� �� ����� ������ ������!" << endl;
	cout << "1. ���" << endl;
	cout << "2. ��, ��� ��������!" << endl;
	cout << "3. �����, �� ����" << endl;
	switch (Choice())
	{
	case 1:
		Scene1();
		break;
	case 2:
		Scene1();
		break;
	case 3:
		Scene1();
		break;
	}
}

void Scene25()
{
	cout << "�������� ������� ���������, � ����� ��������� � ����� �������" << endl << "����� � ��� �� ������ ���" << endl;
	cout << "1. �������� � ���" << endl;
	cout << "2. ��������� ��������� � ���" << endl;
	cout << "3. �� �����, ������ �������" << endl;
	switch (Choice())
	{
	case 1:
		Death15();
		break;
	case 2:
		Scene29();
		break;
	case 3:
		subScene15_2();
		break;
	}
}

void Scene26()
{
	cout << "�� ��������� �� ������ � ��� ���� ������������� ����" << endl << "\"������, ������...\" - ������ ��, ����� ���, ��� �� ��� ������ ������" << endl;
	cout << "1. ���� � �����" << endl;
	cout << "2. ���� � ������" << endl;
	cout << "3. ���������� � ��������" << endl;
	switch (Choice())
	{
	case 1:
		Death14();
		break;
	case 2:
		Death14();
		break;
	case 3:
		subScene26();
		break;
	}
}

void subScene26()
{
	cout << "\"������� ���������� �� ������ � �����������, �� ������, ���� ���\"" << endl << "� ������, ����� �� ����!" << endl;
	cout << "1. �������� ����" << endl;
	cout << "2. ������� �������" << endl;
	cout << "3. ������ � ����" << endl;
	switch (Choice())
	{
	case 1:
		Death14();
		break;
	case 2:
		Death14();
		break;
	case 3:
		Death14();
		break;
	}
}

void Scene27()
{
	cout << "���� ������� �������� ������ ����" << endl << "\"��, �����, �� �� ������ ����, � �� ������: �� �� ��������\"" << endl;
	cout << "1. �� ��� ��������" << endl;
	cout << "2. ����������� � ������ ������" << endl;
	cout << "3. ������ ������ � ������ �����" << endl;
	switch (Choice())
	{
	case 1:
		Scene28();
		break;
	case 2:
		Scene28();
		break;
	case 3:
		Scene28();
		break;
	}
}

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

void Scene29()
{
	cout << "�� ��������� � ��� � ������� ������ �� ��������, ������ ��� �������� ��������� ������ � �������" << endl << "������ ����� ����� � �����, ��� ��� �� ���� ������ ����� �� �������" << endl;
	cout << "1. ���� ������ ����" << endl;
	cout << "2. ���������� ������" << endl;
	cout << "3. ��������� ���� ������, ��� �����" << endl;
	switch (Choice())
	{
	case 1:
		Scene33();
		break;
	case 2:
		Scene30();
		break;
	case 3:
		Death16();
		break;
	}
}

void Scene30()
{
	cout << "\"��������, �� �� � �������, � ��� � ����� ��� ����� �� �����?\"" << endl << "\"��������, � �����, ���� ����.\" - �� ��������� �������������� �������� ������" << endl;
	cout << "1. ��, ���� �� �����!" << endl;
	cout << "2. �� ����-�� �����, ����������?!?!" << endl;
	cout << "3. ����������� � ����� ������" << endl;
	switch (Choice())
	{
	case 1:
		subScene30_1();
		break;
	case 2:
		subScene30_1();
		break;
	case 3:
		Scene33();
		break;
	}
}

void subScene30_1()
{
	cout << "\"���������, ��� �����������, ��� � �������� ����� ������ �� ������ �������?\"" << endl;
	cout << "1. �������� ������!" << endl;
	cout << "2. �� ������ ���!" << endl;
	cout << "3. ����������� � ����� ������" << endl;
	switch (Choice())
	{
	case 1:
		subScene30_2();
		break;
	case 2:
		subScene30_2();
		break;
	case 3:
		Scene33();
		break;
	}
}

void subScene30_2()
{
	cout << "\"��, ������ ��? ������? ��� ��� ��� �\"" << endl;
	cout << "1. ���������" << endl;
	cout << "2. �������� ������ ����� ���������� ���� ��������������" << endl;
	cout << "3. ����������� � ����� ������" << endl;
	switch (Choice())
	{
	case 1:
		Death17();
		break;
	case 2:
		Death17();
		break;
	case 3:
		Scene33();
		break;
	}
}


void Scene31()
{
	cout << "������ ����� �����, �� �������, ��� ��� ��� ����� ���� � ���� �������" << endl << "��� ���� �������, ����� ������������������ ���� ������� ������ � ���� ����" << endl << "���������� ������� ����� ���������, �� ��� ����� ������� \"�������!\"" << endl << "��� �� ����, �� ����� ��� ����, ��� ���� �������� - ��� ���������� ����� �� �� ��" << endl;
	cout << "1. ������� ����" << endl;
	cout << "2. �������� ���� ���� �� ��������" << endl;
	cout << "3. ��������� ��������� ������� ��� ������ ������" << endl;
	switch (Choice())
	{
	case 1:
		Death18();
		break;
	case 2:
		Scene32();
		break;
	case 3:
		Death19();
		break;
	}
}

void Scene32()
{
	cout << "�� ���� ������ ���� � ������� ����" << endl << "����� � ����� ��������� ����� �� �����, � �� ����� ����������� �������:" << endl <<"\"�������, � �����, ��� ������ �� ������ ���� ���������\"" << endl << "��� ����� �������, ����� ������ ����?" << endl;
	cout << "1. GGWP" << endl;
	cout << "2. ������� �� ����" << endl;
	cout << "3. Ez" << endl;
	switch (Choice())
	{
	case 1:
		void WinTheGame();
		break;
	case 2:
		void WinTheGame();
		break;
	case 3:
		void WinTheGame();
		break;
	}
}

void Scene33()
{
	cout << "�� ���������� ������ � ������ ����" << endl << "���� ������ �� ������ ������ � ���������, �� ��� ��������:" << endl << "\"������� ���� ��� ��������� ���������. ���� ���������� �������� �������" << endl << "������� ������: �������� - ������� ������, �� �������� - ������" << endl << "����� �������: ��� ����� ������, ����� ������ ������� ���������?\"" << endl;
	cout << "1. ������" << endl;
	cout << "2. ������� ������� ���� �� ������" << endl;
	cout << "3. ���������� ������" << endl;
	switch (Choice())
	{
	case 1:
		Death20();
		break;
	case 2:
		Death20();
		break;
	case 3:
		WinTheGame();
		break;
	}
}