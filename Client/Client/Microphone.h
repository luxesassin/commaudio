#ifndef MICROPHONE_H
#define MICROPHONE_H


#pragma comment(lib, "libzplay.lib")

#define WIN32_LEAN_AND_MEAN

#include <winsock2.h>
#include <windows.h>
#include <olectl.h>
#include <ole2.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <dos.h>
#include <conio.h>
#include "libzplay.h"

#define OUTPUT_FILE "output.mp3"

DWORD WINAPI microphoneStart(LPVOID lpParam);

int  __stdcall  myCallbackFunc(void* instance, void *user_data, libZPlay::TCallbackMessage message,
	unsigned int param1, unsigned int param2);


#endif