// 函数: sub_637940
// 地址: 0x637940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76c265
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2
void* var_14 = esi
int32_t* edi = arg3
int32_t eax_5 = arg5
int32_t eax_16

if (esi - edi s< 0x18c)
label_637a14:
    eax_16 = sub_6384d0(eax_5, esi, edi, eax_5)
else
    int32_t ebx_1 = arg4
    
    while (true)
        if (ebx_1 s<= 0)
            int32_t ecx_11 = esi - edi
            eax_16 = ecx_11 s/ 0xc
            int32_t* var_18_1 = eax_16
            int32_t i = eax_16 s>> 1
            
            if (i s> 0)
                void* ebx_5 = &edi[i + ((i + 1) << 1)]
                
                do
                    int32_t eax_20 = *(ebx_5 - 0x14)
                    ebx_5 -= 0xc
                    int32_t var_30 = eax_20
                    i -= 1
                    char* eax_21 = *(ebx_5 - 4)
                    char* var_2c = eax_21
                    
                    if (eax_21 != 0 && *eax_21 != 0)
                        char* eax_22 = sub_63d4e0(&var_2c)
                        *(eax_22 + 4) += 1
                    
                    int32_t var_28_1 = *ebx_5
                    int32_t var_8_1 = 0
                    eax_16 = sub_639020(&var_30, i, edi, var_18_1, &var_30, arg5)
                    int32_t var_8_2 = 1
                    
                    if (data_cf65bc != 0)
                        eax_16 = var_2c
                        
                        if (eax_16 != 0 && *eax_16 != 0)
                            eax_16 = sub_63d4e0(&var_2c)
                            int32_t temp0_1 = *(eax_16 + 4)
                            *(eax_16 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                eax_16 = sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
                                var_2c = &data_801800
                    
                    int32_t var_8_3 = 0xffffffff
                while (i s> 0)
            
            if (ecx_11 s< 0x18)
                break
            
            void* esi_6 = var_14 - 4
            int32_t i_1
            
            do
                if ((4 - edi + esi_6) s/ 0xc s>= 2)
                    int32_t var_3c = *(esi_6 - 8)
                    char* eax_31 = *(esi_6 - 4)
                    char* var_38 = eax_31
                    
                    if (eax_31 != 0 && *eax_31 != 0)
                        char* eax_32 = sub_63d4e0(&var_38)
                        *(eax_32 + 4) += 1
                    
                    int32_t var_34_1 = *esi_6
                    int32_t var_8_4 = 2
                    *(esi_6 - 8) = *edi
                    sub_63d850(esi_6 - 4, &edi[1])
                    *esi_6 = edi[2]
                    int32_t eax_40 = (0xfffffff8 - edi + esi_6) s/ 0xc
                    sub_639020(eax_40, 0, edi, eax_40, &var_3c, arg5)
                    int32_t var_8_5 = 3
                    
                    if (data_cf65bc != 0)
                        char* eax_41 = var_38
                        
                        if (eax_41 != 0 && *eax_41 != 0)
                            char* eax_42 = sub_63d4e0(&var_38)
                            int32_t temp1_1 = *(eax_42 + 4)
                            *(eax_42 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)
                                var_38 = &data_801800
                    
                    int32_t var_8_6 = 0xffffffff
                
                esi_6 -= 0xc
                i_1 = 4 - edi + esi_6
            while (i_1 s>= 0x18)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return i_1
        
        void* var_24
        sub_638640(eax_5, edi, &var_24, esi, eax_5)
        ebx_1 = (ebx_1 s>> 1) + (ebx_1 s>> 2)
        int32_t* var_20
        
        if ((var_24 - edi) s/ 0xc s>= (esi - var_20) s/ 0xc)
            sub_637940(ebx_1, arg5, eax_2)
            esi = var_24
            var_14 = esi
        else
            sub_637940(ebx_1, arg5, eax_2)
            edi = var_20
            esi = var_14
        
        eax_5 = arg5
        
        if (esi - edi s< 0x18c)
            goto label_637a14

fsbase->NtTib.ExceptionList = ExceptionList
return eax_16
