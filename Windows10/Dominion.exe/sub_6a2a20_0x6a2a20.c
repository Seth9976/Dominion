// 函数: sub_6a2a20
// 地址: 0x6a2a20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f666
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_20 = arg1
int32_t var_1c = 0
FILE* _Stream = fopen(arg2, "rb")

if (_Stream == 0)
    *arg1 = &data_801800
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

fseek(_Stream, 0, 2)
int32_t _ElementCount_1 = ftell(_Stream)
fseek(_Stream, 0, 0)
int32_t _ElementCount = _ElementCount_1
char* _Buffer = sub_687730(_ElementCount + 1)
uint32_t eax_5 = fread(_Buffer, 1, _ElementCount, _Stream)
fclose(_Stream)
int32_t _ElementCount_2 = _ElementCount_1

if (eax_5 != _ElementCount_2)
    if (_Buffer != 0)
        _aligned_free(_Buffer)
    
    *arg1 = &data_801800
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

_Buffer[_ElementCount_2] = 0

if (_Buffer == 0)
    sub_63b870(_ElementCount_2, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63d720(&_ElementCount_1, _Buffer)
int32_t var_8_1 = 1
_aligned_free(_Buffer)
int32_t _ElementCount_3 = _ElementCount_1
*arg1 = _ElementCount_3

if (_ElementCount_3 != 0 && *_ElementCount_3 != 0)
    char* eax_7 = sub_63d4e0(arg1)
    *(eax_7 + 4) += 1

int32_t var_1c_1 = 1
int32_t var_8_2 = 2

if (data_cf65bc != 0 && _ElementCount_3 != 0 && *_ElementCount_3 != 0)
    char* eax_8 = sub_63d4e0(&_ElementCount_1)
    int32_t temp0_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
