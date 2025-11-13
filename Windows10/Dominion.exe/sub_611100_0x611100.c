// 函数: sub_611100
// 地址: 0x611100
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$common_set_report_hook@_WP6AHHPA_WPAH@Z@@YAHHQ6AHHPA_WPAH@Z@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* const result_1
char* const result_2 = result_1

if (*((result_2 << 4) + 0x7e9800) != result_2)
    sub_63b870(result_2, &data_801800, "def.type == okType", 
        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xb831, "DeclareOkButton")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* result = *((result_2 << 4) + 0x7e9804)

if (result != 0 && *result != 0)
    uint32_t eax_3 = sub_4c89a0()
    void* eax_4 = sub_68c730(*((result_2 << 4) + 0x7e9804), eax_3, (result_2 << 4) + 0x7e9800)
    
    if (eax_4 == 0)
        eax_4 = sub_68c730(*((result_2 << 4) + 0x7e9804), eax_4 + 1, (result_2 << 4) + 0x7e9800)
    
    result_1 = &data_801800
    int32_t var_8_1 = 0
    char* var_18
    int32_t* ecx_4
    
    if (eax_4 != 0)
        ecx_4 = sub_63d850(&result_1, eax_4)
    else
        int32_t var_30_1 = *((result_2 << 4) + 0x7e9804) + 0xd
        var_8_1.b = 1
        ecx_4 = sub_63d850(&result_1, sub_63df30(&var_18, "missing{br}%s"))
        var_8_1.b = 2
        
        if (data_cf65bc != 0)
            char* eax_8 = var_18
            
            if (eax_8 != 0 && *eax_8 != 0)
                ecx_4 = &var_18
                char* eax_9 = sub_63d4e0(ecx_4)
                int32_t temp0_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp0_1 == 1)
                    ecx_4 = sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
        
        var_8_1.b = 0
    
    if (*((result_2 << 4) + 0x7e9808) != 0)
        char* var_14
        
        if ((*((result_2 << 4) + 0x7e980c) & 1) == 0)
            int32_t var_30_7 = arg1
            sub_63df30(&var_18, "%d")
            var_8_1.b = 0xb
            char* result_8 = &data_801800
            char* eax_21 = var_18
            char* ecx_15 = &data_801800
            
            if (eax_21 != 0)
                ecx_15 = eax_21
            
            char* result_5 = result_1
            
            if (result_5 != 0)
                result_8 = result_5
            
            var_8_1.b = 0xc
            ecx_4 = sub_63d850(&result_1, 
                sub_63dfa0(result_5, result_8, &var_14, *((result_2 << 4) + 0x7e9808), ecx_15))
            var_8_1.b = 0xd
            
            if (data_cf65bc != 0)
                char* eax_23 = var_14
                
                if (eax_23 != 0 && *eax_23 != 0)
                    ecx_4 = &var_14
                    char* eax_24 = sub_63d4e0(ecx_4)
                    int32_t temp2_1 = *(eax_24 + 4)
                    *(eax_24 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        ecx_4 = sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
                        var_14 = &data_801800
            
            var_8_1.b = 0xe
        else
            int32_t var_30_4 = arg1
            
            if (arg1 s> 0xa)
                var_8_1.b = 7
                char* result_7 = &data_801800
                char* eax_17 = *sub_63df30(&var_18, "%d{coin_N_ok}")
                char* ecx_11 = &data_801800
                
                if (eax_17 != 0)
                    ecx_11 = eax_17
                
                char* result_4 = result_1
                
                if (result_4 != 0)
                    result_7 = result_4
                
                var_8_1.b = 8
                ecx_4 = sub_63d850(&result_1, 
                    sub_63dfa0(result_4, result_7, &var_14, *((result_2 << 4) + 0x7e9808), ecx_11))
                var_8_1.b = 9
                
                if (data_cf65bc != 0)
                    char* eax_19 = var_14
                    
                    if (eax_19 != 0 && *eax_19 != 0)
                        ecx_4 = &var_14
                        char* eax_20 = sub_63d4e0(ecx_4)
                        int32_t temp3_1 = *(eax_20 + 4)
                        *(eax_20 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            ecx_4 = sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                            var_14 = &data_801800
                
                var_8_1.b = 0xa
            else
                var_8_1.b = 3
                char* const result_6 = &data_801800
                char* eax_12 = *sub_63df30(&var_18, "{coin_%d_ok}")
                char* ecx_7 = &data_801800
                
                if (eax_12 != 0)
                    ecx_7 = eax_12
                
                char* const result_3 = result_1
                
                if (result_3 != 0)
                    result_6 = result_3
                
                var_8_1.b = 4
                ecx_4 = sub_63d850(&result_1, 
                    sub_63dfa0(result_3, result_6, &var_14, *((result_2 << 4) + 0x7e9808), ecx_7))
                var_8_1.b = 5
                
                if (data_cf65bc != 0)
                    char* eax_14 = var_14
                    
                    if (eax_14 != 0 && *eax_14 != 0)
                        ecx_4 = &var_14
                        char* eax_15 = sub_63d4e0(ecx_4)
                        int32_t temp4_1 = *(eax_15 + 4)
                        *(eax_15 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            ecx_4 = sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
                            var_14 = &data_801800
                
                var_8_1.b = 6
        
        if (data_cf65bc != 0)
            char* eax_25 = var_18
            
            if (eax_25 != 0 && *eax_25 != 0)
                ecx_4 = &var_18
                char* eax_26 = sub_63d4e0(ecx_4)
                int32_t temp5_1 = *(eax_26 + 4)
                *(eax_26 + 4) -= 1
                
                if (temp5_1 == 1)
                    ecx_4 = sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
        
        var_8_1.b = 0
    
    int32_t edx
    int32_t var_30_9 = edx
    result = sub_666380(&result_1, &data_be623c, ecx_4, &result_1)
    int32_t var_8_2 = 0xf
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
