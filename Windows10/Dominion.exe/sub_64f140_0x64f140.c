// 函数: sub_64f140
// 地址: 0x64f140
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76cc48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_a4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_4 = sub_6dd1e0(arg3, arg3, &data_8cae70, data_1724a80, 0x69)
int32_t* edx_1 = eax_4
int32_t* var_80 = edx_1
int32_t var_6c_1
int32_t edi_1
int32_t edi_2

if (edx_1 != 0)
    edi_1 = edx_1[2]
    edi_2 = edi_1 - 1
    var_6c_1 = edi_2

int128_t xmm0_1

if (edx_1 == 0 || edi_1 - 1 s< 0)
label_64f323:
    xmm0_1 = *sub_6dd1e0(eax_4, arg3, &data_8cae70, data_1777578, 0x76)
else
    int32_t ecx_1 = edi_2 * 0x30
    int32_t var_7c_1 = ecx_1
    
    while (true)
        int32_t* esi_2 = *edx_1 + ecx_1
        int32_t ecx_2 = 0
        int32_t edx_2 = esi_2[6]
        eax_4 = &esi_2[6]
        void* var_84_1 = eax_4
        
        if (edx_2 s> 0)
            eax_4 = *(eax_4 + 8)
            
            while (*eax_4 != 0x76)
                ecx_2 += 1
                eax_4 += 0x10
                
                if (ecx_2 s>= edx_2)
                    goto label_64f2b1
            
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_a8_1)(struct 
                _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_63d770
            int32_t var_14_1 = 0
            void var_68
            int32_t var_a8_2 = `eh vector constructor iterator'(&var_68, 4, 0x10, 0x5a0be0)
            int32_t ecx_5 = sub_64c230(*esi_2, &var_68)
            int32_t esi_3 = 0
            int32_t var_78_1 = ecx_5
            int32_t eax_7
            
            if (ecx_5 != 1)
                int32_t edi_4 = 0
                
                if (arg5 s> 0)
                    void** eax_8 = arg2
                    void** var_70_2 = eax_8
                    
                    while (true)
                        void* eax_9 = *eax_8
                        eax_7 = sub_64ee20(eax_9, ecx_5, &var_68, *(eax_9 + 8))
                        ecx_5 = var_78_1
                        
                        if (eax_7.b != 0)
                            esi_3 += 1
                            
                            if (esi_3 == ecx_5)
                                break
                        
                        edi_4 += 1
                        eax_8 = &var_70_2[7]
                        var_70_2 = eax_8
                        
                        if (edi_4 s>= arg5)
                            goto label_64f292
                    
                label_64f2df:
                    int128_t xmm0 = *sub_6dd1e0(eax_7, var_84_1, &data_8cae70, data_1777578, 0x76)
                    int32_t var_14_3 = 0xffffffff
                    `eh vector vbase constructor iterator'(&var_68, 4, 0x10, sub_63d770)
                    xmm0_1 = xmm0
                    break
                
            label_64f292:
                edi_2 = var_6c_1
            else if (arg5 s> 0)
                int32_t* edi_3 = arg2
                
                while (true)
                    eax_7 = _stricmp(*(*edi_3 + 8), *esi_2)
                    
                    if (eax_7 == 0)
                        break
                    
                    esi_3 += 1
                    edi_3 = &edi_3[7]
                    
                    if (esi_3 s>= arg5)
                        goto label_64f292
                
                goto label_64f2df
            int32_t var_14_2 = 0xffffffff
            eax_4 = `eh vector vbase constructor iterator'(&var_68, 4, 0x10, sub_63d770)
        
    label_64f2b1:
        edi_2 -= 1
        ecx_1 = var_7c_1 - 0x30
        var_6c_1 = edi_2
        var_7c_1 = ecx_1
        
        if (edi_2 s< 0)
            goto label_64f323
        
        edx_1 = var_80

*arg4 = xmm0_1
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(arg4)
return arg4
