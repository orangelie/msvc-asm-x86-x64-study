#include <iostream>

extern "C" int GetValue();
extern "C" const char* GetValue2();

int main()
{
	/*
	__asm
	{
		mov rax, 0
		mov rcx, dword ptr[hi]
		sub rsp, 8
		push rcx
		call printf
		add rsp, 8
	}
	*/

	printf("%d\n", GetValue());
	printf("%s\n", GetValue2());
}