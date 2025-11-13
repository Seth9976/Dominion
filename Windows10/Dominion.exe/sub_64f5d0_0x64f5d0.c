// 函数: sub_64f5d0
// 地址: 0x64f5d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76ccb2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_88 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint8_t*** ebx = arg3
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_8c)(struct _EXCEPTION_REGISTRATION_RECORD**
    * arg1) = sub_63d770
int32_t var_8_1 = 0
int32_t var_58[0x10]
int32_t var_8c_1 = `eh vector constructor iterator'(&var_58, 4, 0x10, 0x5a0be0)
int32_t eax_3 = sub_64c230(*arg2, &var_58)
sub_67e8f0(eax_3, &var_58[eax_3], &var_58, eax_3 << 2 s>> 2, sub_64f580)
int32_t eax_4 = 0
int32_t var_60 = 0

if (eax_3 s> 0)
    int32_t (* const var_64_1)(char const* _Str1, char const* _Str2) = _stricmp
    
    do
        char* _Str2_1 = var_58[eax_4]
        char* const _Str2 = &data_801800
        void* esi_2 = data_147abd8
        
        if (_Str2_1 != 0)
            _Str2 = _Str2_1
        
        if (esi_2 == 0)
        label_64f6a7:
            void*** eax_6 = operator new(0x10)
            void*** var_74_1 = eax_6
            var_8_1.b = 1
            esi_2 = sub_64c140(eax_6, _Str2)
            var_8_1.b = 0
        else
            while (_stricmp(*(esi_2 + 8), _Str2) != 0)
                esi_2 = *(esi_2 + 4)
                
                if (esi_2 == 0)
                    goto label_64f6a7
            
            if (esi_2 == 0)
                goto label_64f6a7
        
        int32_t* eax_10 = ebx[2][sub_69c4d0(*(esi_2 + 8), 0) & ebx[3]]
        void* eax_11
        
        if (eax_10 == 0)
        label_64f6fb:
            int32_t* eax_12 = sub_64bfd0(0x14)
            eax_12[3] += 1
            
            if (*eax_12 == 0)
                sub_64be70(eax_12)
            
            int32_t* ecx_10 = *eax_12
            *eax_12 = *ecx_10
            __builtin_memset(ecx_10, 0, 0x14)
            ecx_10[3] = 0
            ecx_10[4] = 0
            int32_t* var_68_1 = ecx_10
            var_8_1.b = 2
            var_8_1.b = 0
            ecx_10[2] = sub_64c020(0x800)
            ecx_10[3] = 0x1ff
            sub_69c4d0(*(esi_2 + 8), 0) & ebx[3]
            int32_t* eax_18 = ebx[2][sub_69c4d0(*(esi_2 + 8), 0) & ebx[3]]
            
            if (eax_18 == 0)
            label_64f7a4:
                int32_t* eax_19 = sub_64bfd0(0xc)
                eax_19[3] += 1
                
                if (*eax_19 == 0)
                    sub_64be70(eax_19)
                
                int32_t* ecx_15 = *eax_19
                *eax_19 = *ecx_15
                *ecx_15 = *(esi_2 + 8)
                ecx_15[1] = ecx_10
                ecx_15[2] = ebx[2][sub_69c4d0(*(esi_2 + 8), 0) & ebx[3]]
                ebx[2][sub_69c4d0(*(esi_2 + 8), 0) & ebx[3]] = ecx_15
                ebx[4] += 1
            else
                while (*(esi_2 + 8) != *eax_18)
                    eax_18 = eax_18[2]
                    
                    if (eax_18 == 0)
                        goto label_64f7a4
                
                eax_18[1] = ecx_10
            
            int32_t* eax_28 = ebx[2][sub_69c4d0(*(esi_2 + 8), 0) & ebx[3]]
            
            if (eax_28 == 0)
            label_64f80b:
                eax_11 = nullptr
            else
                while (*(esi_2 + 8) != *eax_28)
                    eax_28 = eax_28[2]
                    
                    if (eax_28 == 0)
                        goto label_64f80b
                
                eax_11 = &eax_28[1]
        else
            while (*(esi_2 + 8) != *eax_10)
                eax_10 = eax_10[2]
                
                if (eax_10 == 0)
                    goto label_64f6fb
            
            eax_11 = &eax_10[1]
            
            if (eax_10 == 0xfffffffc)
                goto label_64f6fb
        
        ebx = *eax_11
        eax_4 = var_60 + 1
        var_60 = eax_4
    while (eax_4 s< eax_3)

*ebx = arg2
ebx[1] = arg4
int32_t var_8_2 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_58, 4, 0x10, sub_63d770)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
