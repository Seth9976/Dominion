// 函数: sub_6e31b0
// 地址: 0x6e31b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7713a6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0
char* var_14
sub_63d720(&var_14, &data_801800)
int32_t var_8_1 = 1
char* esi = var_14
char* ebx = arg2[1]
char* edi = &ebx[1]
int32_t* result

while (true)
    char* ecx_1
    ecx_1.b = *ebx
    int32_t edx_1 = sx.d(ecx_1.b)
    char* const var_18 = edi
    void* eax_5
    
    if (edx_1 u> 0x5d)
    label_6e32a3:
        
        if (ecx_1.b == 0)
            goto label_6e32fc
        
        char* edi_3
        
        if (esi != 0 && *esi != 0)
            edi_3 = *(sub_63d4e0(&var_14) + 8)
            eax_5 = edi_3 + esi
            
            if (eax_5 u< ebx || var_18 u< esi)
                sub_63d5e0(eax_5, &edi_3[1], &var_14, 1)
                goto label_6e32ec
            
        label_6e3482:
            sub_63b870(eax_5, &data_801800, 
                "mMagicDataPtr + originalLength < str || str + length < mMagicDataPtr", 
                "C:\x\ax2017\Engine\xString.cpp", 0x145, "XString::AppendLength")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        sub_63d540(&var_14, 1)
        edi_3 = nullptr
    label_6e32ec:
        esi = var_14
        *(edi_3 + esi) = *ebx
        *(edi_3 + esi + 1) = 0
        edi = var_18
    label_6e32fc:
        ebx = &ebx[1]
        edi = &edi[1]
    else
        switch (edx_1)
            case 0, 0x5d
                int32_t edi_4 = arg2[1]
                void* eax_16 = sub_6e17c0(*arg2)
                int32_t var_1c_3 = 1
                *(eax_16 + 4) = edi_4
                result = arg1
                *eax_16 = 1
                *(eax_16 + 8) = ebx - edi_4
                arg2[1] = ebx
                result[2] = &data_801800
                *result = 3
                result[1] = eax_16
                int32_t var_8_4 = 6
                break
            case 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                    0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 
                    0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 
                    0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 
                    0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 
                    0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 
                    0x55, 0x56, 0x57, 0x58, 0x59, 0x5a
                goto label_6e32a3
            case 0x5b
                int32_t var_34_2 = edx_1
                sub_63df30(&var_18, "invalid char %c")
                result = arg1
                int32_t var_1c_2 = 1
                result[2] = &data_801800
                *result = 1
                var_8_1.b = 4
                
                if (data_cf65bc != 0)
                    char* eax_13 = var_18
                    
                    if (eax_13 != 0 && *eax_13 != 0)
                        char* eax_14 = sub_63d4e0(&var_18)
                        int32_t temp0_1 = *(eax_14 + 4)
                        *(eax_14 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                            var_18 = &data_801800
                
                int32_t var_8_3 = 5
                break
            case 0x5c
                uint32_t eax_3
                eax_3.b = *edi
                
                if (eax_3.b != 0x5b && eax_3.b != 0x5d)
                    int32_t var_34_1 = sx.d(eax_3.b)
                    sub_63df30(&var_18, "unknown escape char %c")
                    result = arg1
                    result[2] = &data_801800
                    *result = 1
                    int32_t var_1c_1 = 1
                    var_8_1.b = 2
                    
                    if (data_cf65bc != 0)
                        char* const eax_11 = var_18
                        
                        if (eax_11 != 0 && *eax_11 != 0)
                            char* eax_12 = sub_63d4e0(&var_18)
                            int32_t temp2_1 = *(eax_12 + 4)
                            *(eax_12 + 4) -= 1
                            
                            if (temp2_1 == 1)
                                sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
                                var_18 = &data_801800
                    
                    int32_t var_8_2 = 3
                    break
                
                if (ecx_1.b == 0)
                    goto label_6e329c
                
                if (esi == 0 || *esi == 0)
                    sub_63d540(&var_14, 1)
                    esi = var_14
                    *esi = *ebx
                    *(esi + 1) = 0
                label_6e329c:
                    ebx = &ebx[2]
                    edi = &edi[2]
                    continue
                
                char* ecx_3 = *(sub_63d4e0(&var_14) + 8)
                eax_5 = ecx_3 + esi
                
                if (eax_5 u>= ebx && edi u>= esi)
                    goto label_6e3482
                
                sub_63d5e0(eax_5, &ecx_3[1], &var_14, 1)
                esi = var_14
                char eax_6 = *ebx
                ebx = &ebx[2]
                edi = &edi[2]
                *(ecx_3 + esi) = eax_6
                *(ecx_3 + esi + 1) = 0
                continue

if (data_cf65bc != 0 && esi != 0 && *esi != 0)
    char* eax_17 = sub_63d4e0(&var_14)
    int32_t temp1_1 = *(eax_17 + 4)
    *(eax_17 + 4) -= 1
    
    if (temp1_1 == 1)
        sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
