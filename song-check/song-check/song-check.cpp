#include"stdc++.h"
#include"resource.h"
#pragma comment(lib,"winmm.lib")
void  main()
{
	cout << "���� ���� ר����" << endl
		<< "1.����" << endl
		<< "2.�ٳ�" << endl
		<< "3.����ɾ�" << endl
		<< "4.��ʩ����" << endl
		<< "5.õ������" << endl
		<< "6.���˵�" << endl
		<< "7.�޼���" << endl
		<< "8.������" << endl
		<< "9.��������" << endl
		<< "10.������" << endl
		<< "11.���Ĵ�˯" << endl
		<< "12.�װ�������" << endl;
	unsigned short song;
	cin >> song;
	bool rt;
	
	if (song == 12)
	{
		rt = PlaySound(MAKEINTRESOURCE(IDR_WAVE3), NULL, SND_RESOURCE);
		if (rt == false)
		{
			printf_s("error");
		}
	}

	if(song==11)
	{ 
	rt=PlaySound(MAKEINTRESOURCE(IDR_WAVE1), NULL, SND_RESOURCE);
	if (rt == false)
	{
		printf_s("error");
	}
	}
	if (song == 10)
	{
		rt = PlaySound(MAKEINTRESOURCE(IDR_WAVE2), NULL, SND_RESOURCE);
		if (rt == false)
		{
			printf_s("error");
		}
	}
	if (song == 9)
	{
		rt = PlaySound(MAKEINTRESOURCE(IDR_WAVE4), NULL, SND_RESOURCE);
		if (rt == false)
		{
			printf_s("error");
		}
	}
	if (song == 8)
	{
		rt = PlaySound(MAKEINTRESOURCE(IDR_WAVE5), NULL, SND_RESOURCE);
		if (rt == false)
		{
			printf_s("error");
		}
	}
	if (song == 7)
	{
		rt = PlaySound(MAKEINTRESOURCE(IDR_WAVE10), NULL, SND_RESOURCE);
		if (rt == false)
		{
			printf_s("error");
		}
	}
	if (song == 6)
	{
		rt = PlaySound(MAKEINTRESOURCE(IDR_WAVE9), NULL, SND_RESOURCE);
		if (rt == false)
		{
			printf_s("error");
		}
	}
	if (song == 5)
	{
		rt = PlaySound(MAKEINTRESOURCE(IDR_WAVE8), NULL, SND_RESOURCE);
		if (rt == false)
		{
			printf_s("error");
		}
	}
	if (song == 4)
	{
		rt = PlaySound(MAKEINTRESOURCE(IDR_WAVE11), NULL, SND_RESOURCE);
		if (rt == false)
		{
			printf_s("error");
		}
	}
	if (song == 3)
	{
		rt = PlaySound(MAKEINTRESOURCE(IDR_WAVE12), NULL, SND_RESOURCE);
		if (rt == false)
		{
			printf_s("error");
		}
	}
	if (song == 2)
	{
		rt = PlaySound(MAKEINTRESOURCE(IDR_WAVE6), NULL, SND_RESOURCE);
		if (rt == false)
		{
			printf_s("error");
		}
	}
	if (song == 1)
	{
		rt = PlaySound(MAKEINTRESOURCE(IDR_WAVE5), NULL, SND_RESOURCE);
		if (rt == false)
		{
			printf_s("error");
		}
	}
}
