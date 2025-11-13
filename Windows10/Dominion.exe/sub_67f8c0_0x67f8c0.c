// 函数: sub_67f8c0
// 地址: 0x67f8c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76c84d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_24 = arg2
int32_t* ebx = arg3
int32_t* var_1c = ebx

if (ebx != arg2)
    int32_t* edi_1 = &ebx[1]
    int32_t* var_20_1 = edi_1
    
    if (edi_1 != arg2)
        int32_t* var_18_1 = ebx
        
        do
            char* eax_3 = *edi_1
            int32_t* esi_1 = edi_1
            char* var_14 = eax_3
            
            if (eax_3 != 0 && *eax_3 != 0)
                char* eax_4 = sub_63d4e0(&var_14)
                *(eax_4 + 4) += 1
            
            int32_t var_8_1 = 0
            char* eax_16
            
            if (arg4(&var_14, ebx, eax_2) == 0)
                int32_t* edi_3 = var_18_1
                
                if (arg4(&var_14, var_18_1) != 0)
                    char i
                    
                    do
                        char* ebx_2 = *esi_1
                        char* const edx_3 = &data_801800
                        char* eax_12 = *edi_3
                        char* const ecx_6 = &data_801800
                        
                        if (ebx_2 != 0)
                            edx_3 = ebx_2
                        
                        if (eax_12 != 0)
                            ecx_6 = eax_12
                        
                        if (edx_3 != ecx_6)
                            if (data_cf65bc != 0 && ebx_2 != 0 && *ebx_2 != 0)
                                char* eax_13 = sub_63d4e0(esi_1)
                                int32_t temp2_1 = *(eax_13 + 4)
                                *(eax_13 + 4) -= 1
                                
                                if (temp2_1 == 1)
                                    sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                                    *esi_1 = &data_801800
                            
                            char* eax_14 = *edi_3
                            *esi_1 = eax_14
                            
                            if (eax_14 != 0 && *eax_14 != 0)
                                char* eax_15 = sub_63d4e0(esi_1)
                                *(eax_15 + 4) += 1
                        
                        esi_1 = edi_3
                        edi_3 -= 4
                        i = arg4(&var_14, edi_3)
                    while (i != 0)
                    ebx = var_1c
                
                char* edi_4 = *esi_1
                char* const edx_6 = &data_801800
                eax_16 = var_14
                char* ecx_10 = &data_801800
                
                if (edi_4 != 0)
                    edx_6 = edi_4
                
                if (eax_16 != 0)
                    ecx_10 = eax_16
                
                if (edx_6 != ecx_10)
                    if (data_cf65bc != 0 && edi_4 != 0 && *edi_4 != 0)
                        char* eax_17 = sub_63d4e0(esi_1)
                        int32_t temp1_1 = *(eax_17 + 4)
                        *(eax_17 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                        
                        eax_16 = var_14
                    
                    *esi_1 = eax_16
                    
                    if (eax_16 != 0 && *eax_16 != 0)
                        char* eax_18 = sub_63d4e0(esi_1)
                        *(eax_18 + 4) += 1
                        eax_16 = var_14
            else
                char** esi_3 = &var_18_1[2]
                
                if (edi_1 != ebx)
                    int32_t* ebx_1 = &esi_3[-1]
                    
                    do
                        char* edi_2 = esi_3[-1]
                        esi_3 -= 4
                        char* eax_6 = ebx_1[-1]
                        ebx_1 -= 4
                        char* const edx = &data_801800
                        char* const ecx_1 = &data_801800
                        
                        if (edi_2 != 0)
                            edx = edi_2
                        
                        if (eax_6 != 0)
                            ecx_1 = eax_6
                        
                        if (edx != ecx_1)
                            if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
                                char* eax_7 = sub_63d4e0(esi_3)
                                int32_t temp3_1 = *(eax_7 + 4)
                                *(eax_7 + 4) -= 1
                                
                                if (temp3_1 == 1)
                                    sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                                    *esi_3 = &data_801800
                            
                            char* eax_8 = *ebx_1
                            *esi_3 = eax_8
                            
                            if (eax_8 != 0 && *eax_8 != 0)
                                char* eax_9 = sub_63d4e0(esi_3)
                                *(eax_9 + 4) += 1
                    while (ebx_1 != var_1c)
                    
                    ebx = var_1c
                
                sub_63d850(ebx, &var_14)
                eax_16 = var_14
            
            int32_t var_8_2 = 1
            
            if (data_cf65bc != 0 && eax_16 != 0 && *eax_16 != 0)
                char* eax_19 = sub_63d4e0(&var_14)
                int32_t temp0_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
            
            var_18_1 = &var_18_1[1]
            edi_1 = &var_20_1[1]
            arg2 = var_24
            int32_t var_8_3 = 0xffffffff
            var_20_1 = edi_1
        while (edi_1 != arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
