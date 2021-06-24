/*
 * (c) проект "Snegopat.Module", Александр Орефков orefkov@gmail.com
 * Старт библиотеки
 */
#include "pch.h"
wchar_t argBuffer[0x1000];

unsigned getNextArg(wchar_t*& ptr, wchar_t* argBuffer) {
    while (*ptr && *ptr <= ' ')
        ptr++;
    if (!*ptr)
        return 0;
    wchar_t* pWrite = argBuffer;
    wchar_t delim = L' ';
    if (*ptr == L'\"') {
        delim = L'\"';
        ptr++;
    }

    while (*ptr && *ptr != delim && *ptr != L'\"') {
        *pWrite++ = *ptr++;
    }
    *pWrite = 0;
    if (delim == L'\"')
        ptr++;
    return unsigned(pWrite - argBuffer);
}

extern "C" __declspec(dllexport)
bool isNeedLoad() {
    // Если существует переменная окружения NOSNEGOPAT, даже не проверяем необходимость загрузки
    if (GetEnvironmentVariable(L"NOSNEGOPAT", 0, 0))
        return false;
    wchar_t* pCmdLine = GetCommandLine();
    unsigned load = 0;
    while (getNextArg(pCmdLine, argBuffer)) {
        if (0 == lstrcmpi(argBuffer, L"-nosnegopat"))
            return false;
        if (0 == (load & 1)) {	// Проверяем на designer
            if (0 == lstrcmpi(argBuffer, L"designer") || 0 == lstrcmpi(argBuffer, L"config"))
                load |= 1;
        }
        if (0 == (load & 2)) {	// Проверяем на базу
            if (0 == lstrcmpi(argBuffer, L"/f") || 0 == lstrcmpi(argBuffer, L"/s") ||
                0 == lstrcmpi(argBuffer, L"/ibname") || 0 == lstrcmpi(argBuffer, L"/ibconnectionstring"))
                load |= 2;
        }
        if (3 == load)
            return true;
    }
    return false;
}
#ifndef _DEBUG
#define Entry start
#else
#define Entry DllMain
#endif // !_DEBUG

BOOL APIENTRY Entry(HMODULE hModule, DWORD ul_reason_for_call, LPVOID) {
    return TRUE;
}
