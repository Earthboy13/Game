#include <windows.h>

void foo(void)
{
    const char *Foo = "This is a test.\n";
    OutputDebugStringA("This is a test.\n");
}

int CALLBACK WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nShowCmd
)
{
    foo();
}