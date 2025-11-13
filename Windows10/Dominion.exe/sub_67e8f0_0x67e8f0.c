// 函数: sub_67e8f0
// 地址: 0x67e8f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76db55
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = arg2
char* var_18 = esi
int32_t* edi = arg3
int32_t eax_6 = arg5
int32_t eax_16

if (((esi - edi) & 0xfffffffc) s<= 0x80)
label_67e9a3:
    eax_16 = sub_67f8c0(eax_6, esi, edi, eax_6)
else
    int32_t ebx_1 = arg4
    
    while (true)
        if (ebx_1 s<= 0)
            int32_t eax_19 = (esi - edi) s>> 2
            int32_t var_14 = eax_19
            int32_t i = eax_19 s>> 1
            
            if (i s> 0)
                do
                    int32_t eax_20 = edi[i - 1]
                    i -= 1
                    var_14 = eax_20
                    
                    if (eax_20 != 0 && *eax_20 != 0)
                        char* eax_21 = sub_63d4e0(&var_14)
                        *(eax_21 + 4) += 1
                    
                    int32_t var_8_1 = 0
                    sub_6806b0(&var_14, i, edi, eax_19, &var_14, arg5)
                    int32_t var_8_2 = 1
                    
                    if (data_cf65bc != 0)
                        int32_t eax_23 = var_14
                        
                        if (eax_23 != 0 && *eax_23 != 0)
                            char* eax_24 = sub_63d4e0(&var_14)
                            int32_t temp0_1 = *(eax_24 + 4)
                            *(eax_24 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
                    
                    int32_t var_8_3 = 0xffffffff
                while (i s> 0)
                
                esi = var_18
            
            eax_16 = (esi - edi) & 0xfffffffc
            
            if (eax_16 s< 8)
                break
            
            int32_t esi_2 = esi - edi
            int32_t i_1
            
            do
                char* eax_27 = *(edi + esi_2 - 4)
                var_18 = eax_27
                
                if (eax_27 != 0 && *eax_27 != 0)
                    char* eax_28 = sub_63d4e0(&var_18)
                    *(eax_28 + 4) += 1
                
                int32_t var_8_4 = 2
                sub_63d850(edi + esi_2 - 4, edi)
                esi_2 -= 4
                int32_t eax_30 = esi_2 s>> 2
                sub_6806b0(eax_30, 0, edi, eax_30, &var_18, arg5)
                int32_t var_8_5 = 3
                
                if (data_cf65bc != 0)
                    char* eax_31 = var_18
                    
                    if (eax_31 != 0 && *eax_31 != 0)
                        char* eax_32 = sub_63d4e0(&var_18)
                        int32_t temp1_1 = *(eax_32 + 4)
                        *(eax_32 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                
                int32_t var_8_6 = 0xffffffff
                i_1 = esi_2 & 0xfffffffc
            while (i_1 s>= 8)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return i_1
        
        char* var_20
        sub_67fb40(eax_6, edi, &var_20, esi, eax_6)
        ebx_1 = (ebx_1 s>> 1) + (ebx_1 s>> 2)
        int32_t* var_1c
        
        if (((var_20 - edi) & 0xfffffffc) s>= ((esi - var_1c) & 0xfffffffc))
            sub_67e8f0(ebx_1, arg5, eax_2)
            esi = var_20
            var_18 = esi
        else
            sub_67e8f0(ebx_1, arg5, eax_2)
            edi = var_1c
        
        eax_6 = arg5
        
        if (((esi - edi) & 0xfffffffc) s<= 0x80)
            goto label_67e9a3

fsbase->NtTib.ExceptionList = ExceptionList
return eax_16
