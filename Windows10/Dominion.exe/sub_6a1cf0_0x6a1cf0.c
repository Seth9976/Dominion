// 函数: sub_6a1cf0
// 地址: 0x6a1cf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f566
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_20 = arg1
int32_t var_18 = 0
int32_t var_8_1 = 1
char* _Str1_1 = *data_147d094
char* _Str1_2 = _Str1_1

if (_Str1_1 != 0 && *_Str1_1 != 0)
    char* eax_3 = sub_63d4e0(&_Str1_2)
    *(eax_3 + 4) += 1

int32_t var_18_1 = 2
var_8_1.b = 2
uint32_t _MaxCount

if (_Str1_1 == 0 || *_Str1_1 == 0)
    _MaxCount = 0
else
    _MaxCount = *(sub_63d4e0(&_Str1_2) + 8)

char* _Str2_2
char* _Str2_1 = _Str2_2
int32_t ecx_3

if (_Str2_1 == 0 || *_Str2_1 == 0)
    ecx_3 = 0
else
    ecx_3 = *(sub_63d4e0(&_Str2_2) + 8)
    _Str2_1 = _Str2_2

bool cond:2_1

if (ecx_3 s> _MaxCount)
    char* const _Str2 = &data_801800
    
    if (_Str2_1 != 0)
        _Str2 = _Str2_1
    
    char* _Str1 = &data_801800
    
    if (_Str1_1 != 0)
        _Str1 = _Str1_1
    
    cond:2_1 = _strnicmp(_Str1, _Str2, _MaxCount) != 0
    _Str2_1 = _Str2_2

if (ecx_3 s<= _MaxCount || cond:2_1)
    *arg1 = _Str2_1
    
    if (_Str2_1 != 0 && *_Str2_1 != 0)
        char* eax_10 = sub_63d4e0(arg1)
        *(eax_10 + 4) += 1
        _Str2_1 = _Str2_2
    
    int32_t var_18_3 = 3
    var_8_1.b = 7
    
    if (data_cf65bc != 0 && _Str1_1 != 0 && *_Str1_1 != 0)
        char* eax_11 = sub_63d4e0(&_Str1_2)
        int32_t temp0_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
        
        _Str2_1 = _Str2_2
    
    int32_t var_8_3 = 8
    
    if (data_cf65bc != 0)
        goto label_6a1ed9
else
    char* const _Str2_3 = &data_801800
    
    if (_Str2_1 != 0)
        _Str2_3 = _Str2_1
    
    if (_Str2_3 == neg.d(_MaxCount))
        sub_63b870(_Str2_1, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
            "XString::XString")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    char* var_1c
    sub_63d720(&var_1c, &_Str2_3[_MaxCount])
    var_8_1.b = 3
    char* edi = var_1c
    *arg1 = edi
    
    if (edi != 0 && *edi != 0)
        char* eax_7 = sub_63d4e0(arg1)
        *(eax_7 + 4) += 1
    
    int32_t var_18_2 = 3
    var_8_1.b = 4
    
    if (data_cf65bc != 0 && edi != 0 && *edi != 0)
        char* eax_8 = sub_63d4e0(&var_1c)
        int32_t temp3_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
    
    var_8_1.b = 5
    
    if (data_cf65bc != 0 && _Str1_1 != 0 && *_Str1_1 != 0)
        char* eax_9 = sub_63d4e0(&_Str1_2)
        int32_t temp4_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
    
    int32_t var_8_2 = 6
    
    if (data_cf65bc != 0)
        _Str2_1 = _Str2_2
    label_6a1ed9:
        
        if (_Str2_1 != 0 && *_Str2_1 != 0)
            char* eax_12 = sub_63d4e0(&_Str2_2)
            int32_t temp2_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
