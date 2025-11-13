// 函数: sub_60db00
// 地址: 0x60db00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$common_set_report_hook@DP6AHHPADPAH@Z@@YAHHQ6AHHPADPAH@Z@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = arg3
int32_t var_18 = 0
uint32_t eax_3
int32_t ecx
eax_3, ecx = sub_4c89a0()
int32_t var_30 = ecx
char* var_14
int32_t ecx_2 = sub_60da10(eax_3, arg2, &var_14, eax_3)
int32_t var_8_1 = 1
char* arg_8
char* edx_1 = arg_8
char* esi_1
bool cond:4_1

if (edx_1 != 0x13)
    char* edi_1
    
    if (arg4 != 2)
        if (arg4 != 0)
        label_60dcba:
            esi_1 = var_14
            *arg3 = esi_1
            
            if (esi_1 != 0 && *esi_1 != 0)
                char* eax_11 = sub_63d4e0(arg3)
                *(eax_11 + 4) += 1
            
            int32_t var_18_4 = 1
            int32_t var_8_5 = 9
            goto label_60dce0
        
        int32_t eax_8 = sub_4dc4a0(arg4 + 0x17, edx_1)
        
        if (eax_8 == 0)
            goto label_60dcba
        
        int32_t var_30_2 = arg4 + 0x17
        sub_60da10(eax_8, "dom_expansion_only1E", &arg_8, eax_3)
        var_8_1.b = 6
        char* edx_5 = &data_801800
        edi_1 = var_14
        char* eax_9 = &data_801800
        char* esi_3 = arg_8
        
        if (edi_1 != 0)
            eax_9 = edi_1
        
        if (esi_3 != 0)
            edx_5 = esi_3
        
        sub_63dfa0(eax_9, edx_5, arg3, "[expansion]", eax_9)
        int32_t var_18_3 = 1
        var_8_1.b = 7
        
        if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
            char* eax_10 = sub_63d4e0(&arg_8)
            int32_t temp2_1 = *(eax_10 + 4)
            *(eax_10 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
        
        int32_t var_8_4 = 8
    else
        int32_t var_30_1 = ecx_2
        sub_60da10(arg4, "dom_expansion_with1E", &arg_8, eax_3)
        var_8_1.b = 3
        char* const edx_2 = &data_801800
        edi_1 = var_14
        char* const eax_6 = &data_801800
        char* esi_2 = arg_8
        
        if (edi_1 != 0)
            eax_6 = edi_1
        
        if (esi_2 != 0)
            edx_2 = esi_2
        
        sub_63dfa0(eax_6, edx_2, arg3, "[expansion]", eax_6)
        int32_t var_18_2 = 1
        var_8_1.b = 4
        
        if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
            char* eax_7 = sub_63d4e0(&arg_8)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
        
        int32_t var_8_3 = 5
    
    if (data_cf65bc != 0 && edi_1 != 0)
        cond:4_1 = *edi_1 == 0
        goto label_60dcf0
else
    esi_1 = var_14
    *arg3 = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_4 = sub_63d4e0(arg3)
        *(eax_4 + 4) += 1
    
    int32_t var_18_1 = 1
    int32_t var_8_2 = 2
label_60dce0:
    
    if (data_cf65bc != 0 && esi_1 != 0)
        cond:4_1 = *esi_1 == 0
    label_60dcf0:
        
        if (not(cond:4_1))
            char* eax_12 = sub_63d4e0(&var_14)
            int32_t temp1_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
