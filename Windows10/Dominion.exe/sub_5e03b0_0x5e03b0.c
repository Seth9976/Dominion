// 函数: sub_5e03b0
// 地址: 0x5e03b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_769e6d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* const result_1 = &data_801800
int32_t var_8_1 = 0
char* arg_4
char* esi = arg_4
char* var_18

if (esi == 0 || (*(arg2 + 0x9c) & 0x100000) != 0)
    int32_t var_34_8 = *(arg2 + 0x58)
    sub_63df30(&arg_4, "dom_ability_%s")
    var_8_1.b = 1
    uint32_t eax_20 = sub_4c89a0()
    char* edx_10 = arg_4
    char* esi_2 = &data_801800
    char* ecx_16 = &data_801800
    
    if (edx_10 != 0)
        ecx_16 = edx_10
    
    void* eax_21 = sub_68c730(ecx_16, eax_20, &data_801800)
    
    if (eax_21 != 0)
        sub_63d850(&result_1, eax_21)
    else
        char* eax_22 = arg_4
        char* ecx_17 = &data_801800
        
        if (eax_22 != 0)
            ecx_17 = eax_22
        
        eax_21 = sub_68c730(ecx_17, 1, &data_801800)
        
        if (eax_21 != 0)
            sub_63d850(&result_1, eax_21)
        else
            char* eax_23 = arg_4
            
            if (eax_23 != 0)
                esi_2 = eax_23
            
            char* var_34_9 = esi_2
            var_8_1.b = 2
            sub_63d850(&result_1, sub_63df30(&var_18, "**missing:%s**"))
            var_8_1.b = 3
            
            if (data_cf65bc != 0)
                char* eax_25 = var_18
                
                if (eax_25 != 0 && *eax_25 != 0)
                    char* eax_26 = sub_63d4e0(&var_18)
                    int32_t temp3_1 = *(eax_26 + 4)
                    *(eax_26 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
    
    var_8_1.b = 4
else
    int32_t var_34 = *(arg2 + 0x58)
    sub_63df30(&arg_4, "dom_card_ability_%s")
    var_8_1.b = 5
    void* eax_4 = arg2 + 0x648
    int32_t ecx = 0
    
    while (true)
        if (*eax_4 != esi)
            ecx += 1
            eax_4 += 8
            
            if (ecx s< 4)
                continue
        else if (eax_4 != 0)
            char* eax_9 = *(eax_4 + 4)
            char* const esi_1 = &data_801800
            
            if (eax_9 != 0 && *eax_9 != 0)
                char* var_34_3 = eax_9
                var_8_1.b = 8
                char* ecx_6 = &data_801800
                char* eax_11 = *sub_63df30(&var_18, "__%s")
                
                if (eax_11 != 0)
                    ecx_6 = eax_11
                
                sub_63d960(&arg_4, ecx_6)
                var_8_1.b = 9
                
                if (data_cf65bc != 0)
                    char* eax_12 = var_18
                    
                    if (eax_12 != 0 && *eax_12 != 0)
                        char* eax_13 = sub_63d4e0(&var_18)
                        int32_t temp4_1 = *(eax_13 + 4)
                        *(eax_13 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                
                var_8_1.b = 5
            
            uint32_t eax_14 = sub_4c89a0()
            char* edx_6 = arg_4
            char* ecx_10 = &data_801800
            
            if (edx_6 != 0)
                ecx_10 = edx_6
            
            void* eax_15 = sub_68c730(ecx_10, eax_14, &data_801800)
            
            if (eax_15 != 0)
                sub_63d850(&result_1, eax_15)
            else
                char* eax_16 = arg_4
                
                if (eax_16 != 0)
                    esi_1 = eax_16
                
                eax_15 = sub_68c730(esi_1, 1, esi_1)
                
                if (eax_15 != 0)
                    sub_63d850(&result_1, eax_15)
                else
                    int32_t var_34_5 = *(arg2 + 0x58)
                    var_8_1.b = 0xa
                    sub_63d850(&result_1, sub_63df30(&var_18, "**missing:%s**"))
                    var_8_1.b = 0xb
                    
                    if (data_cf65bc != 0)
                        char* eax_18 = var_18
                        
                        if (eax_18 != 0 && *eax_18 != 0)
                            char* eax_19 = sub_63d4e0(&var_18)
                            int32_t temp5_1 = *(eax_19 + 4)
                            *(eax_19 + 4) -= 1
                            
                            if (temp5_1 == 1)
                                sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
            
            break
        
        int32_t var_34_1 = *(arg2 + 0x58)
        char* var_38_1 = esi
        var_8_1.b = 6
        sub_63d850(&result_1, sub_63df30(&var_18, "missing:%d_%s"))
        var_8_1.b = 7
        
        if (data_cf65bc != 0)
            char* eax_6 = var_18
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_63d4e0(&var_18)
                int32_t temp1_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
        
        var_8_1.b = 5
        uint32_t eax_8 = sub_64e7a0(arg1)
        sub_665db0(eax_8, &data_be35e8, eax_8, 0x3f800000, 0xffffffff, 0)
        break
    
    var_8_1.b = 0xc

if (data_cf65bc != 0)
    char* eax_27 = arg_4
    
    if (eax_27 != 0 && *eax_27 != 0)
        char* eax_28 = sub_63d4e0(&arg_4)
        int32_t temp0_1 = *(eax_28 + 4)
        *(eax_28 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)

var_8_1.b = 0
int32_t var_34_12 = 0xffffffff
int32_t* result = sub_666380(&result_1, &data_be35dc, arg1, &result_1)
int32_t var_8_2 = 0xd

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp2_1 = result[1]
        result[1] -= 1
        
        if (temp2_1 == 1)
            result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
