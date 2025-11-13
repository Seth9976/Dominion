// 函数: sub_6e4320
// 地址: 0x6e4320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771536
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
sub_6e1920(arg2)
int32_t var_24
sub_6e1d60(&var_24, arg2)
int32_t var_8_1 = 1
int32_t eax_3 = var_24
int32_t* result
void* var_20
char* var_1c
char* eax_5

if (eax_3 == 2 || eax_3 == 3 || eax_3 == 4)
    sub_6e1920(arg2)
    void* esi_1
    int32_t xmm0_1
    
    if (strncmp(U":", arg2[1], 1) == 0)
        arg2[1] += 1
        sub_6e1920(arg2)
        xmm0_1 = (data_cb2f08).d
        esi_1 = data_cb2f10
    else
        xmm0_1 = (data_cb2f14.q).d
        esi_1 = data_cb2f1c
    
    void* var_28 = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_8 = sub_63d4e0(&var_28)
        *(eax_8 + 4) += 1
    
    int32_t var_14_2 = 6
    var_8_1.b = 3
    
    if (xmm0_1 == 2 || xmm0_1 == 3 || xmm0_1 == 4)
        int32_t var_3c
        sub_6e3750(xmm0_1, arg2, &var_3c, &data_882130, 2)
        int32_t var_14_4 = 0xe
        var_8_1.b = 4
        int32_t ebx_1 = var_3c
        int32_t var_38
        char* var_34
        
        if (ebx_1 == 2 || ebx_1 == 3 || ebx_1 == 4)
            void* eax_18 = sub_6e17c0(*arg2)
            void* ecx_16 = eax_18
            *ecx_16 = 0xb
            int32_t var_54_2
            char* ecx_17
            
            if (var_24 != 3)
                char const* const var_50 = "UI2ExprMakeBinary"
                var_54_2 = 0xdf
                ecx_17 = "resultLeft.result == UIPARSERESULT_SUCCESS_EXPRESSION"
            label_6e46bb:
                sub_63b870(eax_18, &data_801800, ecx_17, "C:\x\ax2017\Engine\UI2Expr.cpp", 
                    var_54_2, "UI2ExprMakeBinary")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            eax_18 = var_20
            *(ecx_16 + 0xc) = eax_18
            
            if (ebx_1 != 3)
                char const* const var_50_1 = "UI2ExprMakeBinary"
                var_54_2 = 0xe1
                ecx_17 = "resultRight.result == UIPARSERESULT_SUCCESS_EXPRESSION"
                goto label_6e46bb
            
            result = arg1
            *(ecx_16 + 0x10) = var_38
            int32_t var_14_6 = 0xf
            result[2] = &data_801800
            *result = ebx_1
            result[1] = ecx_16
            var_8_1.b = 8
            
            if (data_cf65bc != 0)
                char* eax_20 = var_34
                
                if (eax_20 != 0 && *eax_20 != 0)
                    char* eax_21 = sub_63d4e0(&var_34)
                    int32_t temp1_1 = *(eax_21 + 4)
                    *(eax_21 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
            
            var_8_1.b = 9
            
            if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_22 = sub_63d4e0(&var_28)
                int32_t temp3_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
            
            int32_t var_8_5 = 0xa
        else
            result = arg1
            *result = ebx_1
            char* ebx_2 = var_34
            result[1] = var_38
            result[2] = ebx_2
            
            if (ebx_2 != 0 && *ebx_2 != 0)
                char* eax_15 = sub_63d4e0(&result[2])
                *(eax_15 + 4) += 1
            
            int32_t var_14_5 = 0xf
            var_8_1.b = 5
            
            if (data_cf65bc != 0 && ebx_2 != 0 && *ebx_2 != 0)
                char* eax_16 = sub_63d4e0(&var_34)
                int32_t temp4_1 = *(eax_16 + 4)
                *(eax_16 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
            
            var_8_1.b = 6
            
            if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_17 = sub_63d4e0(&var_28)
                int32_t temp5_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
            
            int32_t var_8_4 = 7
        
        if (data_cf65bc != 0)
            eax_5 = var_1c
        label_6e466a:
            
            if (eax_5 != 0 && *eax_5 != 0)
                char* eax_23 = sub_63d4e0(&var_1c)
                int32_t temp0_1 = *(eax_23 + 4)
                *(eax_23 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
    else
        result = arg1
        *result = var_24
        result[1] = var_20
        eax_5 = var_1c
        result[2] = eax_5
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_12 = sub_63d4e0(&result[2])
            *(eax_12 + 4) += 1
            eax_5 = var_1c
        
        int32_t var_14_3 = 7
        var_8_1.b = 0xb
        
        if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
            char* eax_13 = sub_63d4e0(&var_28)
            int32_t temp2_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
            
            eax_5 = var_1c
        
        int32_t var_8_3 = 0xc
        
        if (data_cf65bc != 0)
            goto label_6e466a
else
    result = arg1
    *result = eax_3
    result[1] = var_20
    eax_5 = var_1c
    result[2] = eax_5
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(&result[2])
        *(eax_6 + 4) += 1
        eax_5 = var_1c
    
    int32_t var_14_1 = 1
    int32_t var_8_2 = 2
    
    if (data_cf65bc != 0)
        goto label_6e466a
fsbase->NtTib.ExceptionList = ExceptionList
return result
