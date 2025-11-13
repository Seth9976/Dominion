// 函数: sub_69e0a0
// 地址: 0x69e0a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

STARTUPINFOA startupInfo
startupInfo.cb = 0x44
startupInfo.lpReserved = 0
startupInfo.lpDesktop = 0
startupInfo.lpTitle = 0
startupInfo.dwX = 0
startupInfo.dwY = 0
startupInfo.dwXSize = 0
startupInfo.dwYSize = 0
startupInfo.dwXCountChars = 0
startupInfo.dwYCountChars = 0
startupInfo.dwFillAttribute = 0
startupInfo.dwFlags = 0
startupInfo.wShowWindow = 0
startupInfo.cbReserved2 = 0
startupInfo.lpReserved2 = 0
startupInfo.hStdInput = 0
startupInfo.hStdOutput = 0
startupInfo.hStdError = 0
PROCESS_INFORMATION processInformation
__builtin_memset(&processInformation, 0, 0x10)
BOOL eax = CreateProcessA(nullptr, arg1, nullptr, nullptr, 0, CREATE_NO_WINDOW, nullptr, nullptr, 
    &startupInfo, &processInformation)

if (eax != 0)
    WaitForSingleObject(processInformation.hProcess, 0xffffffff)
    CloseHandle(processInformation.hProcess)
    return CloseHandle(processInformation.hThread)

sub_63b870(eax, &data_801800, "result", "C:\x\ax2017\Engine\xPlatformGeneric.cpp", 0x10c, 
    "RunProcess")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
