// 函数: sub_6c4220
// 地址: 0x6c4220
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770176
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1
int32_t* result_1 = result
int32_t var_20 = 0
char* _MaxCount = arg1

if (arg2 == 0)
    sub_63b870(&ExceptionList, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63d720(&_MaxCount, arg2)
char* _Str2_4
sub_6a0010(&_Str2_4)
int32_t var_8_1 = 1
sub_63d720(&_MaxCount, &data_147cf90)
char* _Str1_9
sub_6a0010(&_Str1_9)
var_8_1.b = 2
char* _Str1_6 = _Str1_9
char* _MaxCount_2

if (_Str1_6 == 0 || *_Str1_6 == 0)
    _MaxCount_2 = nullptr
else
    char* eax_4 = sub_63d4e0(&_Str1_9)
    _Str1_6 = _Str1_9
    _MaxCount_2 = *(eax_4 + 8)

char* _Str2_2 = _Str2_4
char* const _Str2 = &data_801800
_MaxCount = _MaxCount_2

if (_Str2_2 != 0)
    _Str2 = _Str2_2

char* _Str1 = &data_801800

if (_Str1_6 != 0)
    _Str1 = _Str1_6

int32_t eax_5
char* _MaxCount_1
eax_5, _MaxCount_1 = _strnicmp(_Str1, _Str2, _MaxCount)
int32_t eax_8
char* _Str2_6

if (eax_5 != 0)
    _MaxCount = _MaxCount_1
    sub_63d720(&_MaxCount, 0x147d098)
    char* _Str1_8
    sub_6a0010(&_Str1_8)
    var_8_1.b = 7
    char* _Str1_7 = _Str1_8
    char* _MaxCount_3
    
    if (_Str1_7 == 0 || *_Str1_7 == 0)
        _MaxCount_3 = nullptr
    else
        char* eax_12 = sub_63d4e0(&_Str1_8)
        _Str1_7 = _Str1_8
        _MaxCount_3 = *(eax_12 + 8)
    
    char* _Str2_3 = _Str2_4
    char* _Str2_1 = &data_801800
    _MaxCount = _MaxCount_3
    
    if (_Str2_3 != 0)
        _Str2_1 = _Str2_3
    
    char* _Str1_1 = &data_801800
    
    if (_Str1_7 != 0)
        _Str1_1 = _Str1_7
    
    bool cond:5_1 = _strnicmp(_Str1_1, _Str2_1) != 0
    char* _Str2_7 = _Str2_4
    
    if (cond:5_1)
        *result = _Str2_7
        
        if (_Str2_7 != 0 && *_Str2_7 != 0)
            char* eax_21 = sub_63d4e0(result)
            *(eax_21 + 4) += 1
        
        int32_t var_20_5 = 1
        var_8_1.b = 0xe
        
        if (data_cf65bc != 0)
            char* _Str1_17 = _Str1_8
            
            if (_Str1_17 != 0 && *_Str1_17 != 0)
                char* eax_22 = sub_63d4e0(&_Str1_8)
                int32_t temp0_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
                    _Str1_8 = &data_801800
        
        var_8_1.b = 0xf
        
        if (data_cf65bc != 0)
            char* _Str1_18 = _Str1_9
            
            if (_Str1_18 != 0 && *_Str1_18 != 0)
                char* eax_23 = sub_63d4e0(&_Str1_9)
                int32_t temp2_1 = *(eax_23 + 4)
                *(eax_23 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                    _Str1_9 = &data_801800
        
        int32_t var_8_6 = 0x10
    label_6c4691:
        
        if (data_cf65bc == 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        _Str2_6 = _Str2_4
        
        if (_Str2_6 != 0)
            goto label_6c46a4
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    char* _Str2_10 = &data_801800
    
    if (_Str2_7 != 0)
        _Str2_10 = _Str2_7
    
    char* _Str1_12 = _Str1_8
    void* const eax_15
    
    if (_Str1_12 == 0 || *_Str1_12 == 0)
        eax_15 = nullptr
    else
        eax_15 = *(sub_63d4e0(&_Str1_8) + 8)
    
    void* _Str1_5 = eax_15 + _Str2_10
    _MaxCount = 4
    void* _Str1_3 = _Str1_5 + 1
    
    if (*_Str1_5 != 0x2f)
        _Str1_3 = _Str1_5
    
    eax_8 = strncmp(_Str1_3, "sys/")
    
    if (eax_8 != 0)
        char* _Str2_8 = _Str2_4
        *result = _Str2_8
        
        if (_Str2_8 != 0 && *_Str2_8 != 0)
            char* eax_16 = sub_63d4e0(result)
            *(eax_16 + 4) += 1
        
        int32_t var_20_3 = 1
        var_8_1.b = 8
        
        if (data_cf65bc != 0)
            char* _Str1_13 = _Str1_8
            
            if (_Str1_13 != 0 && *_Str1_13 != 0)
                char* eax_17 = sub_63d4e0(&_Str1_8)
                int32_t temp6_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                    _Str1_8 = &data_801800
        
        var_8_1.b = 9
        
        if (data_cf65bc != 0)
            char* _Str1_14 = _Str1_9
            
            if (_Str1_14 != 0 && *_Str1_14 != 0)
                char* eax_18 = sub_63d4e0(&_Str1_9)
                int32_t temp8_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp8_1 == 1)
                    sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                    _Str1_9 = &data_801800
        
        int32_t var_8_4 = 0xa
        goto label_6c4691
    
    if (_Str1_3 != 0)
        sub_63d720(result, _Str1_3)
        int32_t var_20_4 = 1
        var_8_1.b = 0xb
        
        if (data_cf65bc != 0)
            char* _Str1_15 = _Str1_8
            
            if (_Str1_15 != 0 && *_Str1_15 != 0)
                char* eax_19 = sub_63d4e0(&_Str1_8)
                int32_t temp5_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                    _Str1_8 = &data_801800
        
        var_8_1.b = 0xc
        
        if (data_cf65bc != 0)
            char* _Str1_16 = _Str1_9
            
            if (_Str1_16 != 0 && *_Str1_16 != 0)
                char* eax_20 = sub_63d4e0(&_Str1_9)
                int32_t temp7_1 = *(eax_20 + 4)
                *(eax_20 + 4) -= 1
                
                if (temp7_1 == 1)
                    sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                    _Str1_9 = &data_801800
        
        int32_t var_8_5 = 0xd
        goto label_6c4691
else
    char* _Str2_5 = _Str2_4
    char* const _Str2_9 = &data_801800
    
    if (_Str2_5 != 0)
        _Str2_9 = _Str2_5
    
    char* _Str1_10 = _Str1_9
    void* const eax_7
    
    if (_Str1_10 == 0 || *_Str1_10 == 0)
        eax_7 = nullptr
    else
        eax_7 = *(sub_63d4e0(&_Str1_9) + 8)
    
    void* _Str1_4 = eax_7 + _Str2_9
    _MaxCount = 4
    void* _Str1_2 = _Str1_4 + 1
    
    if (*_Str1_4 != 0x2f)
        _Str1_2 = _Str1_4
    
    eax_8 = strncmp(_Str1_2, "res/")
    
    if (eax_8 != 0)
        _MaxCount = 5
        eax_8 = strncmp(_Str1_2, "xbin/", _MaxCount)
        
        if (eax_8 == 0)
            goto label_6c43b1
        
        _Str2_6 = _Str2_4
        *result = _Str2_6
        
        if (_Str2_6 != 0 && *_Str2_6 != 0)
            char* eax_9 = sub_63d4e0(result)
            *(eax_9 + 4) += 1
            _Str2_6 = _Str2_4
        
        int32_t var_20_1 = 1
        var_8_1.b = 3
        
        if (data_cf65bc != 0)
            char* _Str1_19 = _Str1_9
            
            if (_Str1_19 != 0 && *_Str1_19 != 0)
                char* eax_10 = sub_63d4e0(&_Str1_9)
                int32_t temp3_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                    _Str1_9 = &data_801800
                
                _Str2_6 = _Str2_4
        
        int32_t var_8_2 = 4
        
        if (data_cf65bc == 0 || _Str2_6 == 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
    label_6c46a4:
        
        if (*_Str2_6 != 0)
            char* eax_24 = sub_63d4e0(&_Str2_4)
            int32_t temp4_1 = *(eax_24 + 4)
            *(eax_24 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
label_6c43b1:
    
    if (_Str1_2 != 0)
        sub_63d720(result, _Str1_2)
        int32_t var_20_2 = 1
        var_8_1.b = 5
        
        if (data_cf65bc != 0)
            char* _Str1_11 = _Str1_9
            
            if (_Str1_11 != 0 && *_Str1_11 != 0)
                char* eax_11 = sub_63d4e0(&_Str1_9)
                int32_t temp1_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                    _Str1_9 = &data_801800
        
        int32_t var_8_3 = 6
        goto label_6c4691
_MaxCount = "XString::XString"
sub_63b870(eax_8, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, _MaxCount)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
