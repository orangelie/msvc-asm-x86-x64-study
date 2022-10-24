#include <iostream>

const char* hi = "hello world";

int main()
{
	__asm
	{
		mov eax, 0
		mov ecx, dword ptr[hi]
		push ecx
		call printf
		add esp, 4
	}
}