// 函数: sub_6e4d90
// 地址: 0x6e4d90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771676
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_74 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
int32_t var_28
sub_6e3750(sub_6e1920(arg2), arg2, &var_28, &data_882114, 4)
int32_t var_18_1 = 2
int32_t var_8_1 = 1
int32_t eax_4 = var_28
int32_t* result
void* var_24
char* var_20
bool cond:0_1

if (eax_4 == 2 || eax_4 == 3 || eax_4 == 4)
    sub_6e1920(arg2)
    void* esi_1
    int32_t xmm0_1
    
    if (strncmp(&data_807234, arg2[1], 1) == 0)
        arg2[1] += 1
        sub_6e1920(arg2)
        xmm0_1 = (data_cb2f08).d
        esi_1 = data_cb2f10
    else
        xmm0_1 = (data_cb2f14.q).d
        esi_1 = data_cb2f1c
    
    void* var_38 = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_8 = sub_63d4e0(&var_38)
        *(eax_8 + 4) += 1
    
    int32_t var_18_3 = 6
    var_8_1.b = 3
    char* ebx_2
    
    if (xmm0_1 != 2 && xmm0_1 != 3 && xmm0_1 != 4)
        result = arg1
        ebx_2 = var_20
        *result = var_28
        result[1] = var_24
        result[2] = ebx_2
        
        if (ebx_2 != 0 && *ebx_2 != 0)
            char* eax_11 = sub_63d4e0(&result[2])
            *(eax_11 + 4) += 1
        
        int32_t var_18_4 = 7
        var_8_1.b = 4
        
        if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
            char* eax_12 = sub_63d4e0(&var_38)
            int32_t temp1_1 = *(eax_12 + 4)
            *(eax_12 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
        
        int32_t var_8_3 = 5
        goto label_6e5013
    
    int32_t var_34
    sub_6e3750(sub_6e1920(arg2), arg2, &var_34, &data_882114, 4)
    int32_t var_18_5 = 0xe
    var_8_1.b = 6
    char* var_2c
    
    if (xmm0_1 == 2 || xmm0_1 == 3 || xmm0_1 == 4)
        sub_6e1920(arg2)
        void* ebx_3
        int64_t xmm0_2
        
        if (strncmp(U"$", arg2[1], 1) == 0)
            arg2[1] += 1
            sub_6e1920(arg2)
            xmm0_2 = data_cb2f08
            ebx_3 = data_cb2f10
        else
            xmm0_2 = data_cb2f14.q
            ebx_3 = data_cb2f1c
        
        void* var_50 = ebx_3
        int64_t var_58_1 = xmm0_2
        
        if (ebx_3 != 0 && *ebx_3 != 0)
            char* eax_21 = sub_63d4e0(&var_50)
            *(eax_21 + 4) += 1
        
        int32_t var_18_7 = 0x1e
        var_8_1.b = 0xa
        int32_t var_64
        void* var_30
        
        if (xmm0_1 != 2 && xmm0_1 != 3 && xmm0_1 != 4)
            void* eax_23 = sub_6e17c0(*arg2)
            char* const var_5c_1 = &data_801800
            var_64 = 3
            *eax_23 = 0xc
            *(eax_23 + 4) = 1
            void* var_60_1 = eax_23
            var_8_1.b = 0xb
            void* eax_24 = sub_6e17c0(*arg2)
            bool cond:3_1 = var_28 == 3
            void* ecx_21 = eax_24
            *ecx_21 = 0xd
            int32_t var_7c_3
            char* ecx_22
            
            if (not(cond:3_1))
                char const* const var_78_1 = "UI2ExprMakeCurveExpression"
                var_7c_3 = 0xea
                ecx_22 = "resultFirst.result == UIPARSERESULT_SUCCESS_EXPRESSION"
            label_6e5557:
                sub_63b870(eax_24, &data_801800, ecx_22, "C:\x\ax2017\Engine\UI2Expr.cpp", 
                    var_7c_3, "UI2ExprMakeCurveExpression")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            bool cond:4_1 = var_34 != 3
            eax_24 = var_24
            *(ecx_21 + 0xc) = eax_24
            
            if (cond:4_1)
                char const* const var_78_5 = "UI2ExprMakeCurveExpression"
                var_7c_3 = 0xec
                ecx_22 = "resultSecond.result == UIPARSERESULT_SUCCESS_EXPRESSION"
                goto label_6e5557
            
            *(ecx_21 + 0x10) = var_30
            *(ecx_21 + 0x14) = eax_23
            int32_t var_18_8 = 0x1f
            arg1[2] = &data_801800
            *arg1 = 3
            arg1[1] = ecx_21
            var_8_1.b = 0xd
            
            if (data_cf65bc != 0 && ebx_3 != 0 && *ebx_3 != 0)
                char* eax_28 = sub_63d4e0(&var_50)
                int32_t temp7_1 = *(eax_28 + 4)
                *(eax_28 + 4) -= 1
                
                if (temp7_1 == 1)
                    sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
            
            var_8_1.b = 0xe
            
            if (data_cf65bc != 0)
                char* eax_29 = var_2c
                
                if (eax_29 != 0 && *eax_29 != 0)
                    char* eax_30 = sub_63d4e0(&var_2c)
                    int32_t temp10_1 = *(eax_30 + 4)
                    *(eax_30 + 4) -= 1
                    
                    if (temp10_1 == 1)
                        sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
            
            var_8_1.b = 0xf
            
            if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_31 = sub_63d4e0(&var_38)
                int32_t temp13_1 = *(eax_31 + 4)
                *(eax_31 + 4) -= 1
                
                if (temp13_1 == 1)
                    sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
            
            int32_t var_8_5 = 0x10
            goto label_6e54fe
        
        sub_6e1920(arg2)
        int32_t var_4c
        sub_6e4c40(&var_4c, arg2)
        var_8_1.b = 0x11
        int32_t eax_32 = var_4c
        char* const var_44
        
        if (eax_32 == 2 || eax_32 == 3 || eax_32 == 4)
            sub_6e1920(arg2)
            void* eax_45 = sub_6e17c0(*arg2)
            bool cond:1_1 = var_28 == 3
            int32_t* ecx_47 = eax_45
            *ecx_47 = 0xd
            int32_t var_7c_5
            char* ecx_48
            
            if (not(cond:1_1))
                char const* const var_78_3 = "UI2ExprMakeCurveExpression"
                var_7c_5 = 0xea
                ecx_48 = "resultFirst.result == UIPARSERESULT_SUCCESS_EXPRESSION"
            label_6e5587:
                sub_63b870(eax_45, &data_801800, ecx_48, "C:\x\ax2017\Engine\UI2Expr.cpp", 
                    var_7c_5, "UI2ExprMakeCurveExpression")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            bool cond:2_1 = var_34 == 3
            eax_45 = var_24
            ecx_47[3] = eax_45
            
            if (not(cond:2_1))
                char const* const var_78_4 = "UI2ExprMakeCurveExpression"
                var_7c_5 = 0xec
                ecx_48 = "resultSecond.result == UIPARSERESULT_SUCCESS_EXPRESSION"
                goto label_6e5587
            
            eax_45 = var_30
            ecx_47[4] = eax_45
            
            if (var_4c != 3)
                char const* const var_78_6 = "UI2ExprMakeCurveExpression"
                var_7c_5 = 0xee
                ecx_48 = "resultStyle.result == UIPARSERESULT_SUCCESS_EXPRESSION"
                goto label_6e5587
            
            int32_t var_48
            ecx_47[5] = var_48
            int32_t var_18_10 = 0x1f
            arg1[2] = &data_801800
            *arg1 = 3
            arg1[1] = ecx_47
            var_8_1.b = 0x19
            
            if (data_cf65bc != 0)
                char* const eax_48 = var_44
                
                if (eax_48 != 0 && *eax_48 != 0)
                    char* eax_49 = sub_63d4e0(&var_44)
                    int32_t temp5_1 = *(eax_49 + 4)
                    *(eax_49 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
                        var_44 = &data_801800
            
            var_8_1.b = 0x1a
            
            if (data_cf65bc != 0 && ebx_3 != 0 && *ebx_3 != 0)
                char* eax_50 = sub_63d4e0(&var_50)
                int32_t temp8_1 = *(eax_50 + 4)
                *(eax_50 + 4) -= 1
                
                if (temp8_1 == 1)
                    sub_64c080(eax_50, *(eax_50 + 0xc) + 0x10)
            
            var_8_1.b = 0x1b
            
            if (data_cf65bc != 0)
                char* eax_51 = var_2c
                
                if (eax_51 != 0 && *eax_51 != 0)
                    char* eax_52 = sub_63d4e0(&var_2c)
                    int32_t temp11_1 = *(eax_52 + 4)
                    *(eax_52 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        sub_64c080(eax_52, *(eax_52 + 0xc) + 0x10)
            
            var_8_1.b = 0x1c
            
            if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_53 = sub_63d4e0(&var_38)
                int32_t temp14_1 = *(eax_53 + 4)
                *(eax_53 + 4) -= 1
                
                if (temp14_1 == 1)
                    sub_64c080(eax_53, *(eax_53 + 0xc) + 0x10)
            
            int32_t var_8_7 = 0x1d
        label_6e54fe:
            
            if (data_cf65bc != 0)
                char* eax_54 = var_20
                
                if (eax_54 != 0 && *eax_54 != 0)
                    char* eax_55 = sub_63d4e0(&var_20)
                    int32_t temp15_1 = *(eax_55 + 4)
                    *(eax_55 + 4) -= 1
                    
                    if (temp15_1 == 1)
                        sub_64c080(eax_55, *(eax_55 + 0xc) + 0x10)
            
            result = arg1
        else
            void* eax_33 = sub_6e17c0(*arg2)
            char* const var_5c_2 = &data_801800
            var_64 = 3
            void* var_60_2 = eax_33
            *eax_33 = 0xc
            *(eax_33 + 4) = 1
            var_8_1.b = 0x12
            int32_t* var_78_2 = &var_64
            void* eax_35 = sub_6e1cc0(&var_34, &var_28, *arg2, &var_34)
            result = arg1
            int32_t var_18_9 = 0x1f
            result[2] = &data_801800
            *result = 3
            result[1] = eax_35
            var_8_1.b = 0x14
            
            if (data_cf65bc != 0)
                char* eax_36 = var_44
                
                if (eax_36 != 0 && *eax_36 != 0)
                    char* eax_37 = sub_63d4e0(&var_44)
                    int32_t temp4_1 = *(eax_37 + 4)
                    *(eax_37 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_37, *(eax_37 + 0xc) + 0x10)
                        var_44 = &data_801800
            
            var_8_1.b = 0x15
            
            if (data_cf65bc != 0 && ebx_3 != 0 && *ebx_3 != 0)
                char* eax_38 = sub_63d4e0(&var_50)
                int32_t temp6_1 = *(eax_38 + 4)
                *(eax_38 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
            
            var_8_1.b = 0x16
            
            if (data_cf65bc != 0)
                char* eax_39 = var_2c
                
                if (eax_39 != 0 && *eax_39 != 0)
                    char* eax_40 = sub_63d4e0(&var_2c)
                    int32_t temp9_1 = *(eax_40 + 4)
                    *(eax_40 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
            
            var_8_1.b = 0x17
            
            if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_41 = sub_63d4e0(&var_38)
                int32_t temp12_1 = *(eax_41 + 4)
                *(eax_41 + 4) -= 1
                
                if (temp12_1 == 1)
                    sub_64c080(eax_41, *(eax_41 + 0xc) + 0x10)
            
            int32_t var_8_6 = 0x18
            
            if (data_cf65bc != 0)
                char* eax_42 = var_20
                
                if (eax_42 != 0)
                    cond:0_1 = *eax_42 == 0
                    goto label_6e5366
    else
        result = arg1
        ebx_2 = var_20
        *result = var_28
        result[1] = var_24
        result[2] = ebx_2
        
        if (ebx_2 != 0 && *ebx_2 != 0)
            char* eax_16 = sub_63d4e0(&result[2])
            *(eax_16 + 4) += 1
        
        int32_t var_18_6 = 0xf
        var_8_1.b = 7
        
        if (data_cf65bc != 0)
            char* eax_17 = var_2c
            
            if (eax_17 != 0 && *eax_17 != 0)
                char* eax_18 = sub_63d4e0(&var_2c)
                int32_t temp2_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
        
        var_8_1.b = 8
        
        if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
            char* eax_19 = sub_63d4e0(&var_38)
            int32_t temp3_1 = *(eax_19 + 4)
            *(eax_19 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
        
        int32_t var_8_4 = 9
    label_6e5013:
        
        if (data_cf65bc != 0 && ebx_2 != 0)
            cond:0_1 = *ebx_2 == 0
            goto label_6e5366
else
    result = arg1
    char* esi = var_20
    *result = eax_4
    result[1] = var_24
    result[2] = esi
    
    if (esi != 0 && *esi != 0)
        char* eax_6 = sub_63d4e0(&result[2])
        *(eax_6 + 4) += 1
    
    int32_t var_18_2 = 3
    int32_t var_8_2 = 2
    
    if (data_cf65bc != 0 && esi != 0)
        cond:0_1 = *esi == 0
    label_6e5366:
        
        if (not(cond:0_1))
            char* eax_43 = sub_63d4e0(&var_20)
            int32_t temp0_1 = *(eax_43 + 4)
            *(eax_43 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
fsbase->NtTib.ExceptionList = ExceptionList
return result
