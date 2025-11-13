// 函数: sub_5f5700
// 地址: 0x5f5700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76a3a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t __saved_ebp
int32_t var_fc = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result_2 = 0
int32_t i = 0
int128_t var_a8
__builtin_memcpy(&var_a8, 
    "\x13\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x06\x00\x00\x00\x"
"07\x00\x00\x00\x08\x00\x00\x00\x09\x00\x00\x00\x0a\x00\x00\x00\x0b\x00\x00\x00\x0c\x00\x00\x00\x0d"
"00\x00\x00\x0e\x00\x00\x00\x0f\x00\x00\x00\x10\x00\x00\x00\x11\x00\x00\x00\x12\x00\x00\x00\x14\x00"
"00\x00", 
    0x4c)
uint32_t result_1 = 0
int32_t i_1 = 0
uint32_t result

do
    int32_t esi = *(&var_a8 + (i << 2))
    void* var_d0
    int32_t eax_4 = sub_571770(esi, &var_d0)
    int32_t edx_1 = 0
    int32_t var_b4_1 = 0
    
    if (eax_4 s> 0)
        int32_t* esi_3 = (result_2 << 4) + arg3
        int32_t* edi_1 = var_d0 + 0x8c
        int32_t* var_ac_1 = esi_3
        int32_t* var_c8_1 = edi_1
        
        while (true)
            int32_t ecx_1 = *edi_1
            
            if (ecx_1 - (esi << 8) == edx_1)
                int32_t var_dc
                char eax_9
                int32_t ecx_2
                eax_9, ecx_2 = sub_5f54a0(ecx_1, &var_dc)
                
                if (eax_9 != 0)
                    result = result_1
                    
                    if (result == 0x3e8)
                        goto label_5f5a44
                    
                    var_ac_1 = &var_ac_1[4]
                    int32_t var_100_1 = 0
                    int32_t var_104_1 = ecx_2
                    int32_t var_108_1 = arg4
                    result_1 = result + 1
                    int32_t eax_11 = *edi_1
                    *esi_3 = eax_11
                    char* const var_b0
                    int32_t* eax_12 = sub_4e3fa0(eax_11, &edi_1[-0x23], &var_b0)
                    int32_t var_14_1 = 0
                    char* const edx_4 = &data_801800
                    char* eax_13 = esi_3[2]
                    
                    if (eax_13 != 0)
                        edx_4 = eax_13
                    
                    char* eax_14 = *eax_12
                    char* const ecx_5 = &data_801800
                    
                    if (eax_14 != 0)
                        ecx_5 = eax_14
                    
                    if (edx_4 != ecx_5)
                        if (data_cf65bc != 0)
                            char* eax_15 = esi_3[2]
                            
                            if (eax_15 != 0 && *eax_15 != 0)
                                char* eax_16 = sub_63d4e0(&esi_3[2])
                                int32_t temp1_1 = *(eax_16 + 4)
                                *(eax_16 + 4) -= 1
                                
                                if (temp1_1 == 1)
                                    edx_4 = sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
                                    esi_3[2] = &data_801800
                        
                        char* eax_18 = *eax_12
                        esi_3[2] = eax_18
                        
                        if (eax_18 != 0 && *eax_18 != 0)
                            char* eax_19 = sub_63d4e0(&esi_3[2])
                            *(eax_19 + 4) += 1
                    
                    int32_t var_14_2 = 1
                    
                    if (data_cf65bc != 0)
                        char* eax_20 = var_b0
                        
                        if (eax_20 != 0 && *eax_20 != 0)
                            char* eax_21 = sub_63d4e0(&var_b0)
                            int32_t temp0_1 = *(eax_21 + 4)
                            *(eax_21 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                edx_4 = sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                                var_b0 = &data_801800
                    
                    int32_t* esi_4 = esi_3
                    int32_t var_14_3 = 0xffffffff
                    esi_4[1] = var_dc
                    esi_4[3].b = 0
                    int32_t ecx_11 = *(&var_a8 + (i_1 << 2))
                    uint32_t eax_25
                    
                    if (ecx_11 == 0x13)
                        int32_t eax_24 = *edi_1
                        void* var_ec
                        void* var_e0
                        uint32_t edi_2 = sub_4daf40(&var_e0, &var_ec)
                        int32_t esi_5 = 0
                        
                        if (edi_2 s<= 0)
                        label_5f59ae:
                            esi_4 = esi_3
                            eax_25.b = 0
                            edi_1 = var_c8_1
                        else
                            while (true)
                                if (sub_4db7a0(*(var_e0 + (esi_5 << 2)), eax_24).b != 0)
                                    esi_4 = esi_3
                                    eax_25.b = 1
                                    edi_1 = var_c8_1
                                    break
                                
                                esi_5 += 1
                                
                                if (esi_5 s>= edi_2)
                                    goto label_5f59ae
                    else if (ecx_11 != 0x14)
                        int128_t var_10c = *(edi_1 - 0x8c)
                        eax_25 = sub_5f4f40(&var_10c, edx_4, ecx_11, var_10c.d)
                    else
                        eax_25 = sub_5f5000(*edi_1)
                    
                    esi_4[3].b = eax_25.b
                    esi_3 = var_ac_1
            
            edi_1 = &edi_1[0x1a6]
            int32_t eax_29 = var_b4_1 + 1
            var_c8_1 = edi_1
            edx_1 = eax_29
            var_b4_1 = eax_29
            
            if (eax_29 s>= eax_4)
                result_2 = result_1
                break
    
    i = i_1 + 1
    i_1 = i
while (i s< 0x13)

result = result_2
label_5f5a44:
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
