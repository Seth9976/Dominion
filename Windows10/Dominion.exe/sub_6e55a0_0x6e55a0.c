// 函数: sub_6e55a0
// 地址: 0x6e55a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7716bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_c8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg1 == 0)
    int32_t eax_3 = arg1[0x1e]
    arg1[0x90] = 0
    int128_t var_a0 = zx.o(0)
    var_a0.d = arg1
    var_a0:4.d = eax_3
    var_a0:8.d = eax_3
    int128_t var_bc = var_a0
    sub_6e4d90(&var_a0:4, &var_bc)
    int32_t var_8_1 = 0
    
    if (var_a0:4.d != 3)
        arg1[0x1f] = 0
        *arg1 = 1
    else
        int32_t* esi_1 = var_a0:8.d
        arg1[0x1f] = esi_1
        int32_t eax_7 = (esi_1 - arg1 - 0x80) s/ 0x1c
        int32_t var_d0
        char* ecx_4
        
        if (eax_7 s>= arg1[0x90])
            char const* const var_cc_1 = "UI2ExpressionParse"
            var_d0 = 0x320
            ecx_4 = "tree.root - tree.expressions < tree.numExpressions"
        label_6e585c:
            sub_63b870(eax_7, &data_801800, ecx_4, "C:\x\ax2017\Engine\UI2Expr.cpp", var_d0, 
                "UI2ExpressionParse")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        if (eax_7 s< 0)
            char const* const var_cc_4 = "UI2ExpressionParse"
            var_d0 = 0x321
            ecx_4 = "tree.root - tree.expressions >= 0"
            goto label_6e585c
        
        *arg1 = 2
        int32_t eax_8 = *esi_1
        int32_t eax_9 = eax_8 - 1
        
        if (eax_8 == 1)
        label_6e56ab:
            void var_88
            int32_t* eax_10 = sub_64e320(eax_9, arg1, &var_88, nullptr, 0x80095c)
            var_8_1.b = 1
            void* edi_1 = &eax_10[9]
            arg1[1] = *eax_10
            void* esi_2 = &arg1[5]
            arg1[2] = eax_10[1]
            void* eax_14 = eax_10 - &arg1[1]
            int32_t i_1 = 2
            int32_t i
            
            do
                *(esi_2 - 8) = *(edi_1 - 0x1c)
                sub_63d850(esi_2 - 4, edi_1 - 0x18)
                *esi_2 = *(eax_14 + esi_2)
                *esi_2 = *(eax_14 + esi_2)
                *esi_2 = *(eax_14 + esi_2)
                *esi_2 = *(eax_14 + esi_2)
                *(esi_2 + 8) = *(eax_14 + esi_2 + 8)
                int32_t ecx_8 = *(eax_14 + esi_2 + 4)
                *esi_2 = *(eax_14 + esi_2)
                *(esi_2 + 4) = ecx_8
                *esi_2 = *(eax_14 + esi_2)
                *esi_2 = *(eax_14 + esi_2)
                sub_63d850(esi_2 + 0x10, edi_1 - 4)
                i = i_1
                i_1 -= 1
                edi_1 += 0x34
                esi_2 += 0x34
                *(esi_2 - 0x20) = *(edi_1 - 0x34)
                *(esi_2 - 0x20) = *(edi_1 - 0x34)
                *(esi_2 - 0x20) = *(edi_1 - 0x34)
                *(esi_2 - 0x20) = *(edi_1 - 0x34)
                *(esi_2 - 0x18) = *(edi_1 - 0x2c)
                int32_t ecx_10 = *(edi_1 - 0x30)
                *(esi_2 - 0x20) = *(edi_1 - 0x34)
                *(esi_2 - 0x1c) = ecx_10
                *(esi_2 - 0x20) = *(edi_1 - 0x34)
                *(esi_2 - 0x20) = *(edi_1 - 0x34)
                *(esi_2 - 0x10) = *(edi_1 - 0x24)
                *(esi_2 - 0xc) = *(edi_1 - 0x20)
            while (i != 1)
            arg1[0x1d] = eax_10[0x1c]
            var_8_1.b = 2
            void var_80
            `eh vector vbase constructor iterator'(&var_80, 0x34, 2, sub_64ca90)
            *arg1 = 3
        else
            int32_t temp1_1 = eax_9
            eax_9 -= 1
            
            if (temp1_1 == 1)
                goto label_6e56ab
            
            int32_t temp4_1 = eax_9
            eax_9 -= 1
            
            if (temp4_1 == 1)
                goto label_6e56ab
    
    int32_t var_8_2 = 3
    
    if (data_cf65bc != 0)
        char* eax_34 = var_a0:0xc.d
        
        if (eax_34 != 0 && *eax_34 != 0)
            char* eax_35 = sub_63d4e0(&var_a0:0xc)
            int32_t temp2_1 = *(eax_35 + 4)
            *(eax_35 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_35, *(eax_35 + 0xc) + 0x10)

uint32_t result = *arg1
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
