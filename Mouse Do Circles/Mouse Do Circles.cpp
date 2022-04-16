#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	int width = GetSystemMetrics(SM_CXSCREEN);
	int height = GetSystemMetrics(SM_CYSCREEN);
	double i = 0;
	POINT point = { 0, 0 };

	cout << "Use alt + f4 to stop the circle" << endl;
	system("pause");

	while (true)
	{
		point.x = sin(i) * (height / 2) + (width / 2);
		point.y = sin(i + 30) * (height / 2) + (height / 2);

		cout << "Screen Coords [X: " << point.x << " | Y: " << point.y << "] // Normalized Coords [X: " << float(point.x) / float(width) << "| Y: " << float(point.y) / float(height) << "]" << endl;
		SetCursorPos(point.x, point.y);
		i += 0.01;
		Sleep(10);
	}
}