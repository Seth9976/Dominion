// 函数: sub_6f31b0
// 地址: 0x6f31b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771f95
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_147ded0
int32_t var_28 = 0

if (ecx != 0 && ecx[1] == 0x19)
    result = sub_5af880(ecx)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    
    if (result != 0)
        result = SendMessageA(GetDlgItem(data_147d470, 0x76), 0x188, 0, 0)
        
        if (result != 0xffffffff)
            int32_t eax_4 = sub_6ef080(result)
            int32_t i = 0
            int32_t i_1 = 0
            void* ecx_2 = result + eax_4
            void* var_48_1 = ecx_2
            
            if (eax_4 + 1 s> 0)
                void* esi_2 = ecx_2 + 1
                void* var_40_1 = esi_2
                void* var_1c_1 = result * 0x168
                void* var_20_1 = (ecx_2 + 1) * 0x168
                
                do
                    void* var_64_2 = ecx_2
                    int32_t* eax_8 = sub_69dd00(data_177750c, 0)
                    sub_6fb630(eax_8, eax_8, result_1, esi_2)
                    sub_6f2600(esi_2)
                    int32_t j_1 = 0
                    struct _EXCEPTION_REGISTRATION_RECORD* eax_9 = *result_1
                    void* edx_4 = var_1c_1 + eax_9
                    ecx_2 = var_20_1
                    void* var_38_1 = edx_4
                    int32_t* esi_3 = ecx_2 + eax_9
                    esi_3[4] = *(edx_4 + 0x10)
                    int32_t* var_2c_1 = esi_3
                    
                    if (*edx_4 s> 0)
                        ecx_2 = nullptr
                        void* var_34_1 = nullptr
                        int32_t j
                        
                        do
                            void* eax_12 = *(edx_4 + 8) + ecx_2
                            int32_t ecx_7 = *eax_12
                            char* edi_1 = *(eax_12 + 8)
                            
                            if (ecx_7 != 1)
                                char* var_60_5 = edi_1
                                sub_6dce10(eax_12, esi_3, &data_8cc5f8, ecx_7)
                            else
                                char* esi_4 = edi_1
                                void* ecx_8 = &esi_4[1]
                                
                                do
                                    eax_12.b = *esi_4
                                    esi_4 = &esi_4[1]
                                while (eax_12.b != 0)
                                
                                void* k_1 = esi_4 - ecx_8
                                
                                if (esi_4 != ecx_8)
                                    void* k
                                    
                                    do
                                        eax_12 = isdigit(sx.d(*(edi_1 + k_1 - 1)))
                                        
                                        if (eax_12 == 0)
                                            break
                                        
                                        k = k_1
                                        k_1 -= 1
                                    while (k != 1)
                                
                                if (edi_1 == 0)
                                    sub_63b870(eax_12, &data_801800, "str", 
                                        "C:\x\ax2017\Engine\xString.cpp", 0x9a, "XString::XString")
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                                
                                char* const var_18 = &data_801800
                                sub_63db30(&var_18, edi_1, k_1)
                                var_28 |= 1
                                int32_t var_8_1 = 0
                                char* const esi_5 = var_18
                                char* const var_14
                                sub_6f2c70(&var_14)
                                char* const ecx_11 = &data_801800
                                var_8_1.b = 1
                                char* eax_14 = var_14
                                
                                if (eax_14 != 0)
                                    ecx_11 = eax_14
                                
                                char* const var_60_4 = ecx_11
                                sub_6dce10(eax_14, var_2c_1, &data_8cc5f8, 1)
                                var_8_1.b = 2
                                
                                if (data_cf65bc != 0)
                                    char* eax_15 = var_14
                                    
                                    if (eax_15 != 0 && *eax_15 != 0)
                                        char* eax_16 = sub_63d4e0(&var_14)
                                        int32_t temp2_1 = *(eax_16 + 4)
                                        *(eax_16 + 4) -= 1
                                        
                                        if (temp2_1 == 1)
                                            sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
                                            var_14 = &data_801800
                                
                                int32_t var_8_2 = 3
                                
                                if (data_cf65bc != 0 && esi_5 != 0 && *esi_5 != 0)
                                    char* eax_17 = sub_63d4e0(&var_18)
                                    int32_t temp3_1 = *(eax_17 + 4)
                                    *(eax_17 + 4) -= 1
                                    
                                    if (temp3_1 == 1)
                                        sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                                        var_18 = &data_801800
                                
                                esi_3 = var_2c_1
                                int32_t var_8_3 = 0xffffffff
                            
                            j = j_1 + 1
                            ecx_2 = var_34_1 + 0x10
                            j_1 = j
                            edx_4 = var_38_1
                            var_34_1 = ecx_2
                        while (j s< *var_38_1)
                        i = i_1
                    
                    i += 1
                    var_1c_1 += 0x168
                    esi_2 = var_40_1 + 1
                    var_20_1 += 0x168
                    i_1 = i
                    var_40_1 = esi_2
                while (i s< eax_4 + 1)
                
                ecx_2 = var_48_1
            
            void* eax_19 = data_147ded0
            void* ecx_17 = ecx_2 + 1
            
            if (eax_19 != 0)
                int32_t eax_20 = *(eax_19 + 4)
                
                if (eax_20 == 0x19)
                    ecx_17 = sub_6f0170(ecx_17, 0xffffffff)
                else if (eax_20 == 0x1b)
                    ecx_17 = sub_6f0970(ecx_17)
            
            sub_6ee530(ecx_17)
            sub_73d740()
            result = sub_73d5c0()

fsbase->NtTib.ExceptionList = ExceptionList
return result
