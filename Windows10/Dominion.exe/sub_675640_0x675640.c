// 函数: sub_675640
// 地址: 0x675640
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = __ehhandler$?consume@?$source_block@V?$multi_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@UAEPAV?$message@I@2@HPAV?$ITarget@I@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg2 = 0
int32_t ecx = data_c23be0
char* eax_3

if (ecx != 0)
    eax_3 = zx.d(ecx.w)
    
    if (eax_3 u< data_c23bac && *(eax_3 * 0x18d0 + data_c23ba8 + 0x18c8) == ecx)
        char* esi_1 = sub_64e7a0(ecx)
        
        if (*(esi_1 + 0x15f8) == 3)
            eax_3 = *arg1
            int128_t var_48
            
            if (eax_3 == 1)
                int32_t eax_5 = arg1[1]
                
                if (eax_5 == 0x1b || eax_5 == 9 || eax_5 == 0xd)
                    data_1777484 = 0
                    data_177748e = 0
                    int32_t eax_7 = *(esi_1 + 0x1724)
                    *(esi_1 + 0x172c) = eax_7
                    *(esi_1 + 0x1789) = 0
                    sub_66ca90(eax_7, arg1[1] == 0xd, data_c23be0, 1)
                    *arg2 = 1
                    char* eax_8
                    eax_8.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_8
                
                if (eax_5 != 0x56 || arg1[2] != 2)
                    goto label_6757a4
                
                __builtin_memset(&var_48, 0, 0x20)
                var_48:4.d = &data_801800
                int32_t var_30_1 = 9
                int32_t var_3c_1 = 7
                
                if (sub_67ad40(eax_5, &var_48, esi_1, 1, 0) == 0)
                    goto label_6757a4
                
            label_675885:
                *arg2 = 1
                char* eax_18
                eax_18.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_18
            
            if (eax_3 == 2 || eax_3 == 0 || eax_3 == 0x19)
            label_6757a4:
                int32_t var_58_1 = 0
                int32_t var_5c_1 = 0
                char** var_60_1 = arg1
                sub_6ea1d0(&esi_1[0x1720])
                
                if (esi_1[0x1569] != 0)
                    char* eax_9 = *arg1
                    
                    if (eax_9 == 0 || eax_9 == 0x19)
                        char* const var_34 = &data_801800
                        int32_t var_14_1 = 0
                        int32_t var_3c_2 = data_c23be0
                        int32_t eax_11 = *(esi_1 + 0x158c)
                        
                        if (eax_11 == 0)
                            char* eax_12 = *(esi_1 + 0x15e0)
                            char* const ecx_6 = &data_801800
                            
                            if (eax_12 != 0)
                                ecx_6 = eax_12
                            
                            char* const var_38_2 = ecx_6
                        else
                            int32_t var_38_1 = eax_11
                        
                        sub_63d850(&var_34, &esi_1[0x1720])
                        int32_t var_30_2 = *(esi_1 + 0x16b0)
                        int32_t eax_15 = *(esi_1 + 0x18c0)
                        char var_2c_1 = 0
                        
                        if (eax_15 != 0)
                            eax_15(&var_48:0xc, eax_2)
                        else
                            void* ecx_8 = *(esi_1 + 0x1718)
                            
                            if (ecx_8 != 0)
                                sub_66ca60(ecx_8, &var_48:0xc)
                        
                        int32_t var_14_2 = 1
                        
                        if (data_cf65bc != 0)
                            char* const eax_16 = var_34
                            
                            if (eax_16 != 0 && *eax_16 != 0)
                                char* eax_17 = sub_63d4e0(&var_34)
                                int32_t temp0_1 = *(eax_17 + 4)
                                *(eax_17 + 4) -= 1
                                
                                if (temp0_1 == 1)
                                    sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                
                goto label_675885

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
