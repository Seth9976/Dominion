// 函数: sub_63b6f0
// 地址: 0x63b6f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char _Buffer
void arg_8
int32_t eax_3 = Mod1::CheckFCreateWriter(&arg_8, 0x400, &_Buffer, arg1, &arg_8)
int32_t __saved_esi

if (*(&__saved_esi:3 + eax_3) != 0xa)
    if (eax_3 s>= 0x3ff)
        *(&__saved_esi:3 + eax_3) = 0xa
    else
        *(&_Buffer + eax_3) = 0xa

FILE* _Stream = data_cf64ac

if (_Stream == 0)
    sub_69db50(&data_cf64b0)
    _Stream = fopen(&data_cf64b0, U"a")
    
    if (_Stream == 0)
        uint32_t eax_4 = OutputDebugStringA("Failed to open log file\n")
        CookieCheckFunction(eax_4)
        return eax_4

char* ecx_3 = &_Buffer
data_cf64ac = _Stream

do
    eax_3.b = *ecx_3
    ecx_3 = &ecx_3[1]
while (eax_3.b != 0)

void var_407

if (fwrite(&_Buffer, ecx_3 - &var_407, 1, _Stream) != 1)
    OutputDebugStringA("Failed to write to log file\n")

int32_t eax_6 = fflush(_Stream)
CookieCheckFunction(eax_6)
return eax_6
