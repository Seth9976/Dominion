// 函数: sub_5f6da0
// 地址: 0x5f6da0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76a460
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* edx = __chkstk(0x7530)
int32_t __saved_ebp
uint32_t eax_2 = __security_cookie ^ &__saved_ebp
uint32_t var_18 = eax_2
int32_t edi
int32_t var_1c = edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_5ba8[0x664]
void var_29a8
memcpy(&var_5ba8, sub_4e49d0(arg1, &var_29a8), 0x1990)
void var_4218
int32_t eax_5 = sub_5f69b0(&var_5ba8, &var_4218)
uint32_t eax_6 = sub_4c89a0()
int32_t* ecx_2 = edx[2]
char* const esi = &data_801800
uint32_t var_24_1 = eax_6

if (ecx_2 != 0)
    esi = ecx_2

uint32_t eax_7 = sub_5f5a60(esi, ecx_2, &var_4218, eax_5)
int32_t* result = sub_63d850(&data_8dbf68, &edx[2])

if (eax_7 s< 3)
    void* i = &(&data_8dbf70)[eax_7 * 4]
    
    do
        *i = 0
        i += 0x10
    while (i s< &data_8dbfa0)

if (edx[4].b != 0)
    if (data_8dbf70 == 0)
        char* _Source_1 = edx[2]
        char* _Source_2 = _Source_1
        
        if (_Source_1 != 0 && *_Source_1 != 0)
            char* eax_8 = sub_63d4e0(&_Source_2)
            *(eax_8 + 4) += 1
        
        int32_t var_8_1 = 0
        char* const _Source = &data_801800
        
        if (_Source_1 != 0)
            _Source = _Source_1
        
        char _Destination[0xfe8]
        strncpy(&_Destination, _Source, 0x1000)
        var_1c:3.b = 0
        sub_4ddbb0(eax_2, var_1c, arg1)
        int32_t var_7538[0x664]
        sub_5f6a90(&var_7538, &var_5ba8, arg2, &var_7538)
        result = sub_66cc40(*edx, 0)
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0 && _Source_1 != 0 && *_Source_1 != 0)
            result = sub_63d4e0(&_Source_2)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                result = sub_64c080(result, result[3] + 0x10)
    else
        int32_t ecx_5
        result, ecx_5 = sub_5f6410(result, &var_5ba8, arg2, &data_8dbf70)
        
        if (result.b != 0)
            data_8dbf70 = 0
            int32_t var_24_4 = ecx_5
            result = sub_66cc40(*edx, 0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
