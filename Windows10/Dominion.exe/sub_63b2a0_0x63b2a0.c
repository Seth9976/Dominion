// 函数: sub_63b2a0
// 地址: 0x63b2a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
sub_63b7f0("creating minidump")
char* eax_2 = sub_63c090()
sub_69db50(eax_2)
SYSTEMTIME systemTime
GetSystemTime(&systemTime)
int32_t esi = 0
char fileName[0x104]
HANDLE eax_9

while (true)
    int32_t var_13c_1 = esi
    uint32_t wSecond = zx.d(systemTime.wSecond)
    uint32_t wMinute = zx.d(systemTime.wMinute)
    uint32_t wHour = zx.d(systemTime.wHour)
    uint32_t wDay = zx.d(systemTime.wDay)
    uint32_t wMonth = zx.d(systemTime.wMonth)
    uint32_t wYear = zx.d(systemTime.wYear)
    char* var_158_1 = eax_2
    sub_63bb20(&fileName, "%sminidump_%4d%02d%02d_%02d%02d%02d_%02d.dmp")
    eax_9 = CreateFileA(&fileName, 0x40000000, FILE_SHARE_READ, nullptr, CREATE_ALWAYS, 
        FILE_ATTRIBUTE_NORMAL, nullptr)
    
    if (eax_9 != 0xffffffff)
        break
    
    esi += 1
    
    if (esi s>= 0xa)
        sub_63b7f0("Can't create minidump file handle")
        break

struct MINIDUMP_EXCEPTION_INFORMATION ExceptionParam
ExceptionParam.ThreadId = GetCurrentThreadId()
ExceptionParam.ExceptionPointers = arg1
ExceptionParam.ClientPointers = 0
BOOL eax_14 = MiniDumpWriteDump(GetCurrentProcess(), GetCurrentProcessId(), eax_9, MiniDumpNormal, 
    &ExceptionParam, nullptr, nullptr)
CloseHandle(eax_9)
char (* var_13c_3)[0x104] = &fileName
char const* const ecx_1 = "saved to write minidump file %s"

if (eax_14 != 0)
    ecx_1 = "wrote minidump file %s"

int32_t result = sub_63b7f0(ecx_1)
CookieCheckFunction(result)
return result
