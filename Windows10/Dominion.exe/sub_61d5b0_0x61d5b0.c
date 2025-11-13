// 函数: sub_61d5b0
// 地址: 0x61d5b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??2@YAPAXIABUnothrow_t@std@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* const esi = *arg3
int32_t result = 0

if (esi == 0)
    esi = &data_801800

while (true)
    if (*esi != 0)
        void* eax_3 = strchr(esi, 0xa)
        result += 1
        
        if (eax_3 == 0)
            sub_63d8d0(arg4, esi)
        else
            int32_t* eax_4 = arg4
            char* const var_14 = &data_801800
            arg4 = &eax_4[1]
            sub_63db30(&var_14, esi, eax_3 - esi)
            int32_t var_8_1 = 0
            char* const ecx_1 = &data_801800
            char* edx = *eax_4
            char* eax_8 = &data_801800
            char* const esi_1 = var_14
            
            if (edx != 0)
                ecx_1 = edx
            
            if (esi_1 != 0)
                eax_8 = esi_1
            
            if (ecx_1 != eax_8)
                if (data_cf65bc != 0 && edx != 0 && *edx != 0)
                    eax_8 = sub_63d4e0(eax_4)
                    int32_t temp1_1 = *(eax_8 + 4)
                    *(eax_8 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                
                *eax_4 = esi_1
                
                if (esi_1 != 0 && *esi_1 != 0)
                    eax_8 = sub_63d4e0(eax_4)
                    *(eax_8 + 4) += 1
            
            int32_t var_8_2 = 1
            
            if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                eax_8 = sub_63d4e0(&var_14)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
            
            esi = eax_3 + 1
            int32_t var_8_3 = 0xffffffff
            eax_8.b = *esi
            
            if (eax_8.b == 0xd || eax_8.b == 0xa)
                esi = &esi[1]
            
            if (esi == 0)
                break
            
            continue
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

fsbase->NtTib.ExceptionList = ExceptionList
return result
