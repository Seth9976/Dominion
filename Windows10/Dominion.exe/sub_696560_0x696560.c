// 函数: sub_696560
// 地址: 0x696560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f045
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_90 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_24
int32_t result
int32_t var_1c

if (sub_696240(arg3, &var_24).b == 0)
    result.b = 0
else if (var_1c != 0)
    uint32_t _ElementSize = var_1c * 0xa8
    int32_t _Buffer = sub_687730(_ElementSize)
    int32_t eax_3 = fseek(*arg3, arg3[1], 0)
    uint32_t eax_4
    
    if (eax_3 == 0)
        eax_4 = fread(_Buffer, _ElementSize, 1, *arg3)
    
    if (eax_3 == 0 && eax_4 == 1)
        arg3[1] += _ElementSize
        char var_29_1 = eax_4.b
        int32_t var_38_1 = 0
        int32_t ebx_1
        
        if (var_1c u<= 0)
        label_69683c:
            ebx_1.b = var_29_1
        else
            ebx_1 = _Buffer + 4
            
            while (true)
                int32_t eax_5 = *(ebx_1 - 4)
                
                if (eax_5 u> 0x25)
                    sub_63b870(eax_5, &data_801800, 
                        "assetType >= 0 && assetType < ASSET_TYPE_COUNT", 
                        "C:\x\ax2017\Engine\AssetTypeRegistry.cpp", 0xc3, "AssetTypeGetInfo")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                void* edi_3 = (eax_5 << 5) + data_147b07c
                void* esi_1 = *(edi_3 + 0x1c)
                char* var_28
                sub_69fd50(eax_5, ebx_1 + 0x24, &var_28, eax_5)
                int32_t var_8_1 = 0
                
                if (*ebx_1 == *(esi_1 + 0x18))
                    if ((*(edi_3 + 0x18) & 1) != 0 || *(ebx_1 + 4) == *(edi_3 + 0x14))
                        char* const var_80 = &data_801800
                        var_8_1.b = 5
                        sub_63d850(&var_80, &var_28)
                        int32_t eax_10 = *(ebx_1 - 4)
                        int32_t ecx_5 = *(ebx_1 + 0x18)
                        int32_t var_7c_1 = eax_10
                        int32_t eax_11 = *(ebx_1 + 0x14)
                        int32_t var_68_1 = eax_11
                        int32_t eax_12 = *(ebx_1 + 0x1c)
                        int32_t var_60_1 = eax_12
                        int32_t eax_13 = *(ebx_1 + 8)
                        int32_t var_64_1 = ecx_5
                        int32_t ecx_6 = *(ebx_1 + 0x20)
                        int32_t var_78_1 = eax_13
                        int32_t eax_14 = *(ebx_1 + 0xc)
                        int32_t var_5c_1 = ecx_6
                        int32_t var_74_1 = eax_14
                        int32_t eax_15 = *(ebx_1 + 0x10)
                        int32_t var_70_1 = eax_15
                        int32_t* eax_16 = sub_64bfd0(0x30)
                        eax_16[3] += 1
                        
                        if (*eax_16 == 0)
                            sub_64be70(eax_16)
                        
                        char** esi_2 = *eax_16
                        *eax_16 = *esi_2
                        memset(esi_2, 0, 0x30)
                        char* const edi_5 = var_80
                        *esi_2 = edi_5
                        
                        if (edi_5 != 0 && *edi_5 != 0)
                            char* eax_18 = sub_63d4e0(esi_2)
                            *(eax_18 + 4) += 1
                        
                        esi_2[1] = eax_10
                        esi_2[2] = eax_13
                        esi_2[3] = eax_14
                        esi_2[4] = eax_15
                        esi_2[6] = eax_11
                        esi_2[7] = ecx_5
                        esi_2[8] = eax_12
                        esi_2[9] = ecx_6
                        esi_2[0xa] = 0
                        esi_2[0xb] = arg2[1]
                        void* eax_28 = arg2[1]
                        
                        if (eax_28 == 0)
                            *arg2 = esi_2
                        else
                            *(eax_28 + 0x28) = esi_2
                        
                        arg2[2] += 1
                        arg2[1] = esi_2
                        var_8_1.b = 6
                        
                        if (data_cf65bc != 0 && edi_5 != 0 && *edi_5 != 0)
                            char* eax_29 = sub_63d4e0(&var_80)
                            int32_t temp2_1 = *(eax_29 + 4)
                            *(eax_29 + 4) -= 1
                            
                            if (temp2_1 == 1)
                                sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                        
                        int32_t var_8_4 = 7
                        goto label_6967ef
                    
                    char* eax_9 = var_28
                    char* ecx_3 = &data_801800
                    
                    if (eax_9 != 0)
                        ecx_3 = eax_9
                    
                    char* var_94_4 = ecx_3
                    sub_63b5f0("Can't load pack asset because hash doesn't match '%s'")
                    
                    if (arg4 == 0)
                        int32_t var_8_3 = 4
                        goto label_6967ef
                    
                    ebx_1.b = 0
                    int32_t var_8_7 = 3
                else
                    char* eax_7 = var_28
                    char* const ecx_2 = &data_801800
                    
                    if (eax_7 != 0)
                        ecx_2 = eax_7
                    
                    char* const var_94_3 = ecx_2
                    sub_63b5f0("Can't load pack asset because version doesn't match '%s'")
                    
                    if (arg4 != 0)
                        ebx_1.b = 0
                        int32_t var_8_6 = 1
                    else
                        int32_t var_8_2 = 2
                    label_6967ef:
                        
                        if (data_cf65bc != 0)
                            char* eax_30 = var_28
                            
                            if (eax_30 != 0 && *eax_30 != 0)
                                char* eax_31 = sub_63d4e0(&var_28)
                                int32_t temp1_1 = *(eax_31 + 4)
                                *(eax_31 + 4) -= 1
                                
                                if (temp1_1 == 1)
                                    sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
                                    var_28 = &data_801800
                        
                        ebx_1 += 0xa8
                        int32_t ecx_15 = var_38_1 + 1
                        int32_t var_8_5 = 0xffffffff
                        var_38_1 = ecx_15
                        
                        if (ecx_15 u>= var_1c)
                            goto label_69683c
                        
                        continue
                
                if (data_cf65bc == 0)
                    break
                
                char* eax_32 = var_28
                
                if (eax_32 != 0 && *eax_32 != 0)
                    char* eax_33 = sub_63d4e0(&var_28)
                    int32_t temp0_1 = *(eax_33 + 4)
                    *(eax_33 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                
                break
        
        if (_Buffer != 0)
            _aligned_free(_Buffer)
        
        result.b = ebx_1.b
    else if (_Buffer == 0)
        result.b = 0
    else
        _aligned_free(_Buffer)
        result.b = 0
else
    result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
