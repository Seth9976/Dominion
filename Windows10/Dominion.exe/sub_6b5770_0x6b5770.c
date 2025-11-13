// 函数: sub_6b5770
// 地址: 0x6b5770
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76ff0d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* _Str2_1 = *arg2
int32_t* var_1c = *(arg1 + 0x60)
char* _Str2_2 = _Str2_1

if (_Str2_1 != 0 && *_Str2_1 != 0)
    char* eax_5 = sub_63d4e0(&_Str2_2)
    *(eax_5 + 4) += 1

char* const edi = &data_801800
int32_t var_8_1 = 0
char* const var_20 = &data_801800
var_8_1.b = 1
char* const _Str2_3 = &data_801800

if (_Str2_1 != 0)
    _Str2_3 = _Str2_1

char* eax_6 = sub_69dd70(_Str2_3, U":")

if (eax_6 != 0)
    char* const ecx_1 = *arg2
    char* const edx
    
    if (ecx_1 != 0)
        edx = ecx_1
    else
        ecx_1 = &data_801800
        edx = &data_801800
    
    char* const var_14 = &data_801800
    sub_63db30(&var_14, edx, eax_6 - ecx_1)
    var_8_1.b = 2
    sub_63d850(&_Str2_2, &var_14)
    var_8_1.b = 3
    
    if (data_cf65bc != 0)
        char* const eax_8 = var_14
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_63d4e0(&var_14)
            int32_t temp1_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                var_14 = &data_801800
    
    var_8_1.b = 1
    sub_63d8d0(&var_20, &eax_6[1])
    _Str2_1 = _Str2_2
    edi = var_20

int32_t* eax_12 = var_1c

for (int32_t i = 0; i s< 0x190; )
    char* _Str1 = *eax_12
    
    if (_Str1 == 0)
        int32_t ebx_2 = *(arg1 + 0x60)
        var_8_1.b = 4
        
        if (data_cf65bc != 0 && edi != 0 && *edi != 0)
            char* eax_18 = sub_63d4e0(&var_20)
            int32_t temp0_1 = *(eax_18 + 4)
            *(eax_18 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
        
        int32_t var_8_3 = 5
        
        if (data_cf65bc != 0 && _Str2_1 != 0 && *_Str2_1 != 0)
            char* eax_19 = sub_63d4e0(&_Str2_2)
            int32_t temp2_1 = *(eax_19 + 4)
            *(eax_19 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return ebx_2
    
    char* const _Str2 = &data_801800
    
    if (_Str2_1 != 0)
        _Str2 = _Str2_1
    
    if (_stricmp(_Str1, _Str2) == 0)
        var_8_1.b = 6
        
        if (data_cf65bc != 0 && edi != 0 && *edi != 0)
            char* eax_15 = sub_63d4e0(&var_20)
            int32_t temp3_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
        
        int32_t var_8_2 = 7
        
        if (data_cf65bc != 0 && _Str2_1 != 0 && *_Str2_1 != 0)
            char* eax_16 = sub_63d4e0(&_Str2_2)
            int32_t temp4_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return var_1c
    
    i += 1
    eax_12 = &var_1c[0x1e]
    var_1c = eax_12

sub_63b870(eax_12, &data_801800, "Halt", "C:\x\ax2017\Engine\Font.cpp", 0x4d3, 
    "WrapperLookupEscapeTag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
