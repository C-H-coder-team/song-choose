#include"stdc++.h"
#include"resource.h"
#pragma comment(lib,"winmm.lib")
void  main()
{
	cout << "银临 琉璃 专辑：" << endl
		<< "1.琉璃" << endl
		<< "2.迟迟" << endl
		<< "3.终身成就" << endl
		<< "4.西施江南" << endl
		<< "5.玫瑰与泪" << endl
		<< "6.美人灯" << endl
		<< "7.无际涯" << endl
		<< "8.白噪音" << endl
		<< "9.无人生还" << endl
		<< "10.记忘歌" << endl
		<< "11.海棠春睡" << endl
		<< "12.亲爱的瑞秋" << endl;
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
