// 函数: sub_4b3970
// 地址: 0x4b3970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@QBDI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char var_11

if (sub_675640(arg1, &var_11) != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return var_11

if (*arg1 != 1)
label_4b3a07:
    
    if (sub_624890(arg1) == 0)
        int32_t* eax_7
        
        if (data_147abe8[8].b != 0 && *arg1 == 1)
            eax_7 = arg1[1]
            
            if (eax_7 == 0x51)
                eax_7.b = 1
                data_cc8d6c = data_cc8d6c == 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_7
            
            if (eax_7 == 0x4e)
                int32_t ecx_9 = data_19e3980
                int32_t var_30_1 = ecx_9
                data_19e3980 = ecx_9 + 1
                int32_t* var_18
                sub_63df30(&var_18, "New Notification %d")
                int32_t* eax_9 = var_18
                char* const esi_1 = &data_801800
                
                if (eax_9 != 0)
                    esi_1 = eax_9
                
                EnterCriticalSection(data_147ac20 + 0x902c)
                void* edi_1 = data_147ac20
                
                if (*(edi_1 + 0x9020) - *(edi_1 + 0x9024) s>= 8)
                    sub_63b5f0("too many queued notifications")
                    edi_1 = data_147ac20
                
                int32_t eax_14 = *(edi_1 + 0x9020)
                int32_t ecx_11 = eax_14 & 0x80000007
                
                if (ecx_11 s< 0)
                    ecx_11 = ((ecx_11 - 1) | 0xfffffff8) + 1
                
                void* const ecx_14 = &data_801f78
                *(edi_1 + 0x9020) = eax_14 + 1
                void* ebx_2 = ecx_11 * 0x1204 + edi_1
                int32_t eax_15
                
                do
                    eax_15.b = *ecx_14
                    ecx_14 += 1
                    *(ecx_14 + ebx_2 - &data_801f78 - 1) = eax_15.b
                while (eax_15.b != 0)
                
                void* ecx_16 = ebx_2 - esi_1
                
                do
                    eax_15.b = *esi_1
                    esi_1 = &esi_1[1]
                    *(esi_1 + ecx_16 + 0xff) = eax_15.b
                while (eax_15.b != 0)
                
                *(ebx_2 + 0x1200) = 0
                LeaveCriticalSection(edi_1 + 0x902c)
                int32_t var_8_1 = 0
                
                if (data_cf65bc != 0)
                    eax_7 = var_18
                    
                    if (eax_7 != 0 && *eax_7 != 0)
                        eax_7 = sub_63d4e0(&var_18)
                        int32_t temp0_1 = eax_7[1]
                        eax_7[1] -= 1
                        
                        if (temp0_1 == 1)
                            sub_64c080(eax_7, eax_7[3] + 0x10)
        
        eax_7.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
else
    int32_t eax_4 = arg1[1]
    
    if (eax_4 != 0xd || (arg1[2].b & 4) == 0)
        if (eax_4 != 0x57)
            goto label_4b3a07
        
        sub_4aedf0()
        char* eax_6
        eax_6.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_6
    
    sub_4aed40()

fsbase->NtTib.ExceptionList = ExceptionList
return 1
