// 函数: sub_64f870
// 地址: 0x64f870
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76ccf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_74 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = sub_6dd1e0(&ExceptionList, arg1, &data_8cae70, data_1724a80, 0x69)
int32_t* var_60 = ecx
int32_t edi_1

if (ecx != 0)
    edi_1 = 0

int32_t* result

if (ecx == 0 || ecx[2] s<= 0)
label_64f970:
    result.b = 0
else
    result = nullptr
    int32_t* result_1 = nullptr
    
    while (true)
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_78_1)(struct 
            _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_63d770
        void* esi_2 = *ecx + result
        int32_t var_8_1 = 0
        int32_t var_54[0x10]
        int32_t var_78_2 = `eh vector constructor iterator'(&var_54, 4, 0x10, 0x5a0be0)
        
        if (sub_64c230(*esi_2, &var_54) == 1)
            int32_t esi_3 = 0
            
            while (true)
                char* _Str1_1 = var_54[esi_3]
                char* const _Str1 = &data_801800
                
                if (_Str1_1 != 0)
                    _Str1 = _Str1_1
                
                if (_stricmp(_Str1, arg2) == 0)
                    int32_t var_8_3 = 0xffffffff
                    `eh vector vbase constructor iterator'(&var_54, 4, 0x10, sub_63d770)
                    result.b = 1
                    break
                
                esi_3 += 1
                
                if (esi_3 s>= 1)
                    goto label_64f94d
            
            break
        
    label_64f94d:
        int32_t var_8_2 = 0xffffffff
        `eh vector vbase constructor iterator'(&var_54, 4, 0x10, sub_63d770)
        ecx = var_60
        edi_1 += 1
        result = &result_1[0xc]
        result_1 = result
        
        if (edi_1 s>= ecx[2])
            goto label_64f970

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
