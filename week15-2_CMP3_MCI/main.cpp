#include "CMP3_MCI.h"
#include <stdio.h>
CMP3_MCP myMP3;
int main()
{
    myMP3.Load("filename.mp3");
    myMP3.Play();

    int a;///�����d��A�{�����n�ֳt����
    scandf("%d",&a);
}
