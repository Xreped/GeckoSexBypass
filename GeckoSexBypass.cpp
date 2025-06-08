#include <windows.h>
#include <winternl.h>
#include <iostream>

#pragma comment(lib, "cecko.lib")
int main() {
    HMODULE sex = LoadLibraryA("cecko.dll");

    if (!sex) {
        std::cerr << "ERROR cecko.dll" << std::endl;
        return 1;
    }

    CeckoBrainSet("genderSex", 0)
    return 0;
}
