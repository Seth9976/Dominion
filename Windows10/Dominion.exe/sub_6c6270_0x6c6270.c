// 函数: sub_6c6270
// 地址: 0x6c6270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint8_t var_a40[0x108]
GetCurrentDirectoryA(0x104, &var_a40)
char var_518
GetModuleFileNameA(nullptr, &var_518, 0x104)
int32_t _Drive
char _Dir[0x100]
int32_t var_938
char _Ext[0x104]
_splitpath(&var_518, &_Drive, &_Dir, &var_938, &_Ext)
char var_b48[0x108]
_makepath(&var_b48, &_Drive, &_Dir, nullptr, nullptr)
SetCurrentDirectoryA(&var_b48)
HANDLE hProcess = GetCurrentProcess()
int32_t i = 0

if (*arg1 s> 0)
    void* edi_1 = &arg1[1]
    
    do
        _Drive = *edi_1
        uint64_t pdwDisplacement_1 = 0
        memset(&var_938, 0, 0x420)
        int32_t qwAddr
        int32_t edx_1
        edx_1:qwAddr = sx.q(_Drive)
        var_938 = 0x20
        int32_t var_920_1 = 0x400
        int32_t var_cac_2 = edx_1
        
        if (SymGetSymFromAddr64(hProcess, qwAddr, &pdwDisplacement_1, &var_938) != 0)
            var_518 = 0
            void var_517
            memset(&var_517, 0, 0x3ff)
            void name
            UnDecorateSymbolName(&name, &var_518, 0x400, 0x1000)
            uint32_t pdwDisplacement = 0
            int32_t var_cac_5 = edx_1
            struct IMAGEHLP_LINE64 Line64
            __builtin_memset(&Line64, 0, 0x18)
            Line64.SizeOfStruct = 0x18
            
            if (SymGetLineFromAddr64(hProcess, qwAddr, &pdwDisplacement, &Line64) != 0)
                void* var_ca4_6 = &name
                uint32_t LineNumber = Line64.LineNumber
                CHAR* FileName = Line64.FileName
                sub_63b6f0("  %s(%d): %s")
            else
                sub_63b6f0("  unknown file")
        else
            enum WIN32_ERROR var_ca4_4 = GetLastError()
            int32_t _Drive_1 = _Drive
            sub_63b6f0("  unknown symbol 0x%X (error %d)")
        
        i += 1
        edi_1 += 4
    while (i s< *arg1)

BOOL result = SetCurrentDirectoryA(&var_a40)
CookieCheckFunction(result)
return result
