// 函数: sub_6415e0
// 地址: 0x6415e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76c5ed
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
char* const _FileName = &data_801800
char* _FileName_2
char* _FileName_1 = _FileName_2

if (_FileName_1 != 0)
    _FileName = _FileName_1

FILE* _Stream = fopen(_FileName, "rb")

if (_Stream == 0)
    sub_63b870(_Stream, &data_801800, f", "C:\x\ax2017\Engine\TTFont.cpp", 0x214, 
        "TruetypeReimport")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

fseek(_Stream, 0, 2)
int32_t _ElementCount = ftell(_Stream)
fseek(_Stream, 0, 0)
void* _Buffer = sub_687730(_ElementCount)
fread(_Buffer, 1, _ElementCount, _Stream)
fclose(_Stream)
void** ebx_1 = *arg1
*ebx_1 = _Buffer
ebx_1[2] = _ElementCount
void var_94
char* _FileName_3 = sub_6d1af0(&var_94, _Buffer)

if (_FileName_3 == 0)
    int32_t var_8_2 = 1
    
    if (data_cf65bc != _FileName_3)
        _FileName_3 = _FileName_2
        
        if (_FileName_3 != 0 && *_FileName_3 != 0)
            _FileName_3 = sub_63d4e0(&_FileName_2)
            int32_t temp0_1 = *(_FileName_3 + 4)
            *(_FileName_3 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(_FileName_3, *(_FileName_3 + 0xc) + 0x10)
    
    _FileName_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return _FileName_3

int32_t var_90
int32_t var_78

if (ebx_1 != 0xfffffff0)
    ebx_1[4] = sx.d(zx.w(*(var_90 + var_78 + 4)) * 0x100 + zx.w(*(var_90 + var_78 + 5)))

if (ebx_1 != 0xffffffec)
    ebx_1[5] = sx.d(zx.w(*(var_90 + var_78 + 6)) * 0x100 + zx.w(*(var_90 + var_78 + 7)))

if (ebx_1 != 0xffffffe8)
    ebx_1[6] = sx.d(zx.w(*(var_90 + var_78 + 8)) * 0x100 + zx.w(*(var_90 + var_78 + 9)))

int32_t var_8_3 = 2
void* _FileName_4

if (data_cf65bc != 0)
    _FileName_4 = _FileName_2
    
    if (_FileName_4 != 0 && *_FileName_4 != 0)
        _FileName_4 = sub_63d4e0(&_FileName_2)
        int32_t temp1_1 = *(_FileName_4 + 4)
        *(_FileName_4 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(_FileName_4, *(_FileName_4 + 0xc) + 0x10)

_FileName_4.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return _FileName_4
