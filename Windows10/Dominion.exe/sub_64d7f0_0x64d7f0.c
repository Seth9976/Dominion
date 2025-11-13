// 函数: sub_64d7f0
// 地址: 0x64d7f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76cb68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* const var_2dc = arg2
int32_t* var_2e0 = arg3
int32_t* var_2e8 = arg3
int32_t var_2e4 = 0
char* eax_4 = *arg2 - 1
char* const var_2d0 = arg4
char const* const var_300_7
int32_t var_2fc_7
char const* const var_2f8_13
void var_1dc
void var_168
void var_f4
int32_t var_80
int32_t* eax_14
int32_t* result
char* ecx_19
int32_t* result_1
long double x87_r0
long double x87_r1
long double x87_r2

switch (eax_4)
    case nullptr, 1, 2, 3, 4, 0xb
        sub_64d360(arg3, arg2)
        result = arg3
    label_64d9a4:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    case 6
        arg2[4]
        int32_t* eax_5 = sub_64d7f0(arg4, arg5, eax_2)
        int32_t var_8_1 = 0
        *(var_2dc + 0xc)
        var_8_1.b = 1
        var_2dc = sub_64cd30(sub_64d7f0(var_2d0, arg5), x87_r0)
        var_2d0 = sub_64cd30(eax_5, x87_r1)
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_2)(void* arg1) = sub_64ca90
        var_8_1.b = 2
        `eh vector constructor iterator'(&arg3[2], 0x34, 2, sub_64ca70)
        char* const xmm0_3 = var_2dc
        result_1 = arg3
        arg3[1] = 0
        *arg3 = 5
        arg3[4] = xmm0_3
        arg3[5] = var_2d0
        int32_t var_2e4_1 = 2
        sub_63d850(&result_1[8], &arg3[3])
        result_1[9] = arg3[4]
        result_1[9] = arg3[4]
        *(result_1 + 0x24) = *(arg3 + 0x10)
        *(result_1 + 0x24) = *(arg3 + 0x10)
        result_1[0xb] = arg3[6]
        int32_t ecx_4 = arg3[5]
        result_1[9] = arg3[4]
        result_1[0xa] = ecx_4
        result_1[9] = arg3[4]
        result_1[9] = arg3[4]
        result_1[0x1c] = 1
        int32_t var_8_2 = 3
        `eh vector vbase constructor iterator'(&var_1dc, 0x34, 2, sub_64ca90)
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_4)(void* arg1) = sub_64ca90
        int32_t var_2fc_2 = 2
        int32_t var_8_3 = 4
        eax_14 = &var_f4
        int32_t var_300_2 = 0x34
    label_64d99a:
        `eh vector vbase constructor iterator'(eax_14, 0x34, 2, sub_64ca90)
        result = result_1
        goto label_64d9a4
    case 7
        arg2[5]
        int32_t* eax_15 = sub_64d7f0(arg4, arg5, eax_2)
        int32_t var_8_4 = 5
        arg2[4]
        int32_t* eax_16 = sub_64d7f0(var_2d0, arg5)
        var_8_4.b = 6
        *(var_2dc + 0xc)
        var_8_4.b = 7
        var_2dc = sub_64cd30(sub_64d7f0(var_2d0, arg5), x87_r0)
        var_2d0 = sub_64cd30(eax_16, x87_r1)
        int32_t xmm0_9 = sub_64cd30(eax_15, x87_r2)
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_6)(void* arg1) = sub_64ca90
        var_8_4.b = 8
        result_1 = arg3
        `eh vector constructor iterator'(&result_1[2], 0x34, 2, sub_64ca70)
        char* const xmm0_10 = var_2dc
        result_1[1] = 0
        *result_1 = 6
        result_1[4] = xmm0_10
        result_1[5] = var_2d0
        int32_t var_2e4_2 = 4
        result_1[6] = xmm0_9
        sub_63d850(&result_1[8], &result_1[3])
        result_1[9] = result_1[4]
        result_1[9] = result_1[4]
        *(result_1 + 0x24) = *(result_1 + 0x10)
        *(result_1 + 0x24) = *(result_1 + 0x10)
        result_1[0xb] = result_1[6]
        int32_t ecx_12 = result_1[5]
        result_1[9] = result_1[4]
        result_1[0xa] = ecx_12
        result_1[9] = result_1[4]
        result_1[9] = result_1[4]
        result_1[0x1c] = 1
        int32_t var_8_5 = 9
        `eh vector vbase constructor iterator'(&var_1dc, 0x34, 2, sub_64ca90)
        var_8_5.b = 0xa
        `eh vector vbase constructor iterator'(&var_f4, 0x34, 2, sub_64ca90)
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_8)(void* arg1) = sub_64ca90
        int32_t var_2fc_4 = 2
        int32_t var_8_6 = 0xb
        eax_14 = &var_168
        int32_t var_300_4 = 0x34
        goto label_64d99a
    case 8
        arg2[6]
        int32_t* eax_25 = sub_64d7f0(arg4, arg5, eax_2)
        int32_t var_8_7 = 0xc
        arg2[5]
        int32_t* eax_26 = sub_64d7f0(var_2d0, arg5)
        var_8_7.b = 0xd
        arg2[4]
        int32_t* eax_27 = sub_64d7f0(var_2d0, arg5)
        var_8_7.b = 0xe
        *(var_2dc + 0xc)
        var_8_7.b = 0xf
        var_2dc = sub_64cd30(sub_64d7f0(var_2d0, arg5), x87_r0)
        var_2d0 = sub_64cd30(eax_27, x87_r1)
        int32_t xmm0_17 = sub_64cd30(eax_26, x87_r2)
        long double x87_r3
        int32_t xmm0_18 = sub_64cd30(eax_25, x87_r3)
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_10)(void* arg1) = sub_64ca90
        var_8_7.b = 0x10
        result_1 = arg3
        `eh vector constructor iterator'(&result_1[2], 0x34, 2, sub_64ca70)
        char* const xmm0_19 = var_2dc
        result_1[1] = 0
        *result_1 = 7
        result_1[4] = xmm0_19
        result_1[5] = var_2d0
        result_1[6] = xmm0_17
        int32_t var_2e4_3 = 8
        result_1[7] = xmm0_18
        sub_63d850(&result_1[8], &result_1[3])
        result_1[9] = result_1[4]
        result_1[9] = result_1[4]
        *(result_1 + 0x24) = *(result_1 + 0x10)
        *(result_1 + 0x24) = *(result_1 + 0x10)
        result_1[0xb] = result_1[6]
        int32_t ecx_18 = result_1[5]
        result_1[9] = result_1[4]
        result_1[0xa] = ecx_18
        result_1[9] = result_1[4]
        result_1[9] = result_1[4]
        result_1[0x1c] = 1
        int32_t var_8_8 = 0x11
        `eh vector vbase constructor iterator'(&var_1dc, 0x34, 2, sub_64ca90)
        var_8_8.b = 0x12
        `eh vector vbase constructor iterator'(&var_f4, 0x34, 2, sub_64ca90)
        var_8_8.b = 0x13
        `eh vector vbase constructor iterator'(&var_168, 0x34, 2, sub_64ca90)
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_12)(void* arg1) = sub_64ca90
        int32_t var_2fc_6 = 2
        int32_t var_8_9 = 0x14
        eax_14 = &var_80
        int32_t var_300_6 = 0x34
        goto label_64d99a
    case 9
        eax_4 = arg2[1]
        
        if (eax_4 == 0)
            var_2f8_13 = "XString::XString"
            var_2fc_7 = 0x9a
            var_300_7 = "C:\x\ax2017\Engine\xString.cpp"
            ecx_19 = &data_871e0c
            goto label_64e297
        
        uint32_t var_2f8_14 = arg2[2]
        var_2dc = &data_801800
        int32_t eax_36 = sub_63db30(&var_2dc, eax_4, var_2f8_14)
        int32_t var_2e4_4 = 0x10
        int32_t var_8_10 = 0x15
        char* const ecx_21 = &data_801800
        char* const esi_4 = var_2dc
        
        if (esi_4 != 0)
            ecx_21 = esi_4
        
        void* eax_37 = sub_64cf70(eax_36, var_2d0, ecx_21, arg5)
        
        if (eax_37 == 0)
            int32_t ecx_25 = 0
            int32_t* eax_39 = *arg5
            int32_t edx_18 = arg5[1]
            int32_t var_2e0_3 = edx_18
            
            if (edx_18 s<= 0)
            label_64de37:
                struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_16)(void* arg1) =
                    sub_64ca90
                *arg3 = data_c23b30
                arg3[1] = data_c23b34
                (&arg3[2], 0xc23b38, 0x34, 2, sub_64cba0)
                arg3[0x1c] = data_c23ba0
                int32_t var_8_12 = 0x1b
                goto label_64ddae
            
            while (true)
                if (*eax_39 == &data_c21418)
                    int32_t edx_19 = eax_39[1]
                    
                    if (edx_19 == 0)
                        break
                    
                    if (edx_19 == 0xffffffff)
                        break
                    
                    edx_18 = var_2e0_3
                
                ecx_25 += 1
                eax_39 = &eax_39[7]
                
                if (ecx_25 s>= edx_18)
                    goto label_64de37
            
            if (eax_39 == 0)
                goto label_64de37
            
            char* const eax_44 = &data_801800
            
            if (esi_4 != 0)
                eax_44 = esi_4
            
            char* const var_2f8_17 = eax_44
            char** eax_45 = sub_63df30(&var_2d0, "[%s]")
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_18)(void* arg1) =
                sub_64ca90
            var_8_10.b = 0x18
            `eh vector constructor iterator'(&arg3[2], 0x34, 2, sub_64ca70)
            int32_t var_2e4_5 = 0x30
            arg3[1] = 0
            *arg3 = 0xa
            sub_63d850(&arg3[3], eax_45)
            sub_63d850(&arg3[8], &arg3[3])
            arg3[9] = arg3[4]
            arg3[9] = arg3[4]
            *(arg3 + 0x24) = *(arg3 + 0x10)
            *(arg3 + 0x24) = *(arg3 + 0x10)
            arg3[0xb] = arg3[6]
            int32_t ecx_31 = arg3[5]
            arg3[9] = arg3[4]
            arg3[0xa] = ecx_31
            arg3[9] = arg3[4]
            arg3[9] = arg3[4]
            int32_t var_8_13 = 0x19
            
            if (data_cf65bc != 0)
                char* eax_54 = var_2d0
                
                if (eax_54 != 0 && *eax_54 != 0)
                    char* eax_55 = sub_63d4e0(&var_2d0)
                    int32_t temp3_1 = *(eax_55 + 4)
                    *(eax_55 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_55, *(eax_55 + 0xc) + 0x10)
                        var_2d0 = &data_801800
            
            int32_t var_8_14 = 0x1a
            
            if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                char* eax_56 = sub_63d4e0(&var_2dc)
                int32_t temp4_1 = *(eax_56 + 4)
                *(eax_56 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_56, *(eax_56 + 0xc) + 0x10)
            
            result = arg3
        else
            sub_64d5a0(arg3, eax_37)
            int32_t var_8_11 = 0x16
        label_64ddae:
            
            if (data_cf65bc == 0 || esi_4 == 0 || *esi_4 == 0)
                result = arg3
            else
                char* eax_38 = sub_63d4e0(&var_2dc)
                int32_t temp2_1 = *(eax_38 + 4)
                *(eax_38 + 4) -= 1
                
                if (temp2_1 != 1)
                    result = arg3
                else
                    sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
                    result = arg3
        
        goto label_64d9a4
    case 0xa
        arg2[3]
        sub_64d7f0(arg4, arg5, eax_2)
        int32_t var_8_17 = 0x24
        arg2[4]
        sub_64d7f0(var_2d0, arg5)
        var_8_17.b = 0x25
        int32_t var_2cc
        void var_2c4
        void var_250
        
        if (var_2cc == 9 || var_2cc == 0xa)
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_27)(void* arg1) =
                sub_64ca90
            int32_t var_258
            *arg3 = var_258
            int32_t var_254
            arg3[1] = var_254
            (&arg3[2], &var_250, 0x34, 2, sub_64cba0)
            int32_t var_1e8
            arg3[0x1c] = var_1e8
            var_8_17.b = 0x26
            `eh vector vbase constructor iterator'(&var_250, 0x34, 2, sub_64ca90)
            int32_t var_8_19 = 0x27
            `eh vector vbase constructor iterator'(&var_2c4, 0x34, 2, sub_64ca90)
            result = arg3
        else
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_26)(void* arg1) =
                sub_64ca90
            *arg3 = var_2cc
            int32_t var_2c8
            arg3[1] = var_2c8
            (&arg3[2], &var_2c4, 0x34, 2, sub_64cba0)
            int32_t var_25c
            arg3[0x1c] = var_25c
            var_8_17.b = 0x28
            `eh vector vbase constructor iterator'(&var_250, 0x34, 2, sub_64ca90)
            int32_t var_8_18 = 0x29
            `eh vector vbase constructor iterator'(&var_2c4, 0x34, 2, sub_64ca90)
            result = arg3
        goto label_64d9a4
    case 0xc
        arg2[3]
        sub_64d7f0(arg4, arg5, eax_2)
        int32_t var_8_15 = 0x1c
        arg2[4]
        sub_64d7f0(var_2d0, arg5)
        var_8_15.b = 0x1d
        arg2[5]
        sub_64d7f0(var_2d0, arg5)
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_22)(void* arg1) = sub_64ca90
        var_8_15.b = 0x1e
        `eh vector constructor iterator'(&var_80, 0x34, 2, sub_64ca70)
        var_8_15.b = 0x1f
        int32_t var_1d4
        int32_t eax_57 = var_1d4
        int32_t var_84_1 = 1
        int32_t var_18_1 = 2
        int32_t var_54_1 = eax_57
        var_80 = 0x3f800000
        int32_t var_fc
        int32_t var_88_1 = var_fc
        int32_t var_2fc_10
        int32_t var_170
        char const* const ecx_38
        
        if (var_fc != var_170)
            char const* const var_2f8_23 = "UI2ExpressionEval"
            var_2fc_10 = 0xe6b
            ecx_38 = "first.stateType == second.stateType"
        label_64e2c7:
            sub_63b870(eax_57, &data_801800, ecx_38, "C:\x\ax2017\Engine\UI2.cpp", var_2fc_10, 
                "UI2ExpressionEval")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int128_t var_160
        int128_t var_ec
        
        if (var_fc != 7)
            eax_57 = var_fc - 8
            
            if (var_fc == 8)
                int128_t var_78
                var_78.d = var_ec.d
                int128_t var_44
                var_44.d = var_160.d
                goto label_64e0bf
            
            char const* const var_2f8_28 = "UI2ExpressionEval"
            var_2fc_10 = 0xe77
            ecx_38 = "Halt"
            goto label_64e2c7
        
        int128_t var_78_1 = var_ec
        int128_t var_44_1 = var_160
    label_64e0bf:
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2f8_24)(void* arg1) = sub_64ca90
        *arg3 = var_fc
        arg3[1] = 1
        (&arg3[2], &var_80, 0x34, 2, sub_64cba0)
        arg3[0x1c] = var_18_1
        var_8_15.b = 0x20
        `eh vector vbase constructor iterator'(&var_80, 0x34, 2, sub_64ca90)
        var_8_15.b = 0x21
        `eh vector vbase constructor iterator'(&var_1dc, 0x34, 2, sub_64ca90)
        var_8_15.b = 0x22
        `eh vector vbase constructor iterator'(&var_168, 0x34, 2, sub_64ca90)
        int32_t var_8_16 = 0x23
        `eh vector vbase constructor iterator'(&var_f4, 0x34, 2, sub_64ca90)
        result = arg3
        goto label_64d9a4
    default
        var_2f8_13 = "UI2ExpressionEval"
        var_2fc_7 = 0xe8e
        var_300_7 = "C:\x\ax2017\Engine\UI2.cpp"
        ecx_19 = "Halt"
    label_64e297:
        sub_63b870(eax_4, &data_801800, ecx_19, var_300_7, var_2fc_7, var_2f8_13)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
