// 函数: sub_65f3d0
// 地址: 0x65f3d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76d131
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_2cc = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg3
void* var_cc = edi
int32_t* result_12 = arg5
int32_t* result_3 = result_12
char var_a5 = 0
int32_t* result = result_12[2]

if (result == 0xffffffff)
label_660930:
    result.b = 0
label_660146:
    fsbase->NtTib.ExceptionList = ExceptionList
    CookieCheckFunction(result)
    return result

char const* const var_2d8_1
int32_t var_2d4_1
char const* const var_2d0_1
char* ecx

if (*result_12 == 0xffffffff)
    var_2d0_1 = "FinalizeCurrentEntry"
    var_2d4_1 = 0x2ab6
    var_2d8_1 = "C:\x\ax2017\Engine\UI2.cpp"
    ecx = "lineParams.firstEntryIdx != -1"
else if (result == result_12[1])
    while (true)
        int32_t xmm1_1 = (zx.o(0)).d
        
        while (true)
            result = result_12[1]
            float var_c0_1
            
            if (result == 0xffffffff)
                var_c0_1 = 0f
            label_65f4c0:
                int32_t ecx_2 = result_12[2]
                float var_c4 = 0f
                
                if (ecx_2 s>= 0 && ecx_2 s< *(edi + 0x18))
                    int32_t* eax_3 = *(edi + 0x14)
                    int32_t esi = eax_3[ecx_2 * 0xd]
                    void* result_2
                    void* eax_9
                    
                    if (esi == 0)
                        result_2 = &data_801800
                        int32_t var_14_1 = esi
                        char* ecx_3 = eax_3[ecx_2 * 0xd + 9]
                        sub_63da70(&result_2, ecx_3, eax_3[ecx_2 * 0xd + 0xa] - ecx_3)
                        void* result_13 = result_2
                        char* const result_24 = &data_801800
                        
                        if (result_13 != 0)
                            result_24 = result_13
                        
                        int32_t** ecx_5 = *(arg2 + 0x60)
                        int32_t* ecx_6
                        
                        if (ecx_5 != 0)
                            ecx_6 = *ecx_5
                        
                        float xmm0_3
                        
                        if (ecx_5 == 0 || ecx_6 == 0)
                            xmm0_3 =
                                sub_6b43a0(**(arg2 + 4), result_24, *(arg2 + 0x48), *(arg2 + 0x4c))
                        else
                            int32_t* var_2d0_3 = ecx_6
                            xmm0_3 = sub_6417e0(ecx_6, result_24, *(arg2 + 0x64), *(arg2 + 0x48))
                        
                        var_c4 = xmm0_3 f* *(arg2 + 0x20)
                        int32_t var_14_2 = 1
                        
                        if (data_cf65bc != 0 && result_13 != 0 && *result_13 != 0)
                            char* eax_8 = sub_63d4e0(&result_2)
                            int32_t temp0_1 = *(eax_8 + 4)
                            *(eax_8 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                                result_2 = &data_801800
                        
                        int32_t var_14_3 = 0xffffffff
                        xmm1_1 = var_c4
                        eax_9 = arg2
                    else
                        void* ecx_12
                        
                        if (esi != 3)
                            if (esi == 2)
                                ecx_12 = eax_3[ecx_2 * 0xd + 0xb]
                                goto label_65f60c
                            
                            eax_9 = arg2
                        else
                            ecx_12 = eax_3[ecx_2 * 0xd + 0xa]
                        label_65f60c:
                            eax_9 = arg2
                            xmm1_1 = sub_65e190(ecx_12) f* *(eax_9 + 0x20)
                            var_c4 = xmm1_1
                    
                    result = *(eax_9 + 0x58)
                    
                    if (result == 2)
                        result = result_3[2]
                        
                        if (result s>= 0 && result s< *(edi + 0x18))
                            (*(edi + 0x14))[result * 0xd + 6] = xmm1_1
                            result_3[2] = 0xffffffff
                            goto label_660930
                    else if (var_c0_1 f+ xmm1_1 f<= *arg4)
                        result_12 = result_3
                        int32_t ecx_117 = result_12[2]
                        
                        if (ecx_117 s>= 0 && ecx_117 s< *(edi + 0x18))
                            *(ecx_117 * 0x34 + *(edi + 0x14) + 0x18) = xmm1_1
                        label_660130:
                            result.b = var_a5
                        label_660139:
                            result_12[3] = result_12[2]
                            result_12[2] = 0xffffffff
                            goto label_660146
                    else
                        result -= 1
                        
                        if (result u> 4)
                            var_2d0_1 = "FinalizeCurrentEntry"
                            var_2d4_1 = 0x2c33
                            var_2d8_1 = "C:\x\ax2017\Engine\UI2.cpp"
                            ecx = "Halt"
                            goto label_660980
                        
                        char* const var_c8
                        float result_1
                        int32_t* var_b4
                        
                        switch (result)
                            case nullptr, 4
                                void* result_4 = result_3[2]
                                result = edi + 0x14
                                result_2 = result
                                
                                if (result_4 s>= 0)
                                    void* result_15 = result_4
                                    
                                    if (result_4 s< result[1])
                                        void* ecx_75 = edi + 0x14
                                        
                                        while (true)
                                            bool cond:8_1 = *(result_4 * 0x34 + *result) != 0
                                            result = result_2
                                            void* result_5
                                            
                                            if (not(cond:8_1))
                                                if (result_15 s>= result[1])
                                                    goto label_660967
                                                
                                                result = *(edi + 0x14) + result_15 * 0x34
                                                
                                                if (*result != 0)
                                                    var_2d0_1 = "FinalizeCurrentEntry"
                                                    var_2d4_1 = 0x2b9a
                                                    var_2d8_1 = "C:\x\ax2017\Engine\UI2.cpp"
                                                    ecx = "layout.entries[lineParams."
                                                    "currentEntryIdx].type == TEXTLAYOUT_LINE"
                                                    goto label_660980
                                                
                                                int32_t ecx_79
                                                
                                                if (*(arg2 + 0x58) != 5)
                                                    ecx_79 = 0
                                                else
                                                    ecx_79 = 1
                                                
                                                result[0xb] = ecx_79
                                                result = result_3[2]
                                                
                                                if (result s< 0)
                                                    goto label_660967
                                                
                                                void* edx_35 = edi + 0x14
                                                
                                                if (result s>= *(edi + 0x18))
                                                    goto label_660967
                                                
                                                int32_t ecx_80 = result * 0x34
                                                int32_t eax_64 = *edx_35
                                                result_1 = *(ecx_80 + eax_64 + 0x28)
                                                void* result_16 = *(ecx_80 + eax_64 + 0x24)
                                                result_2 = result_16
                                                *(ecx_80 + eax_64 + 0x28) = result_16
                                                
                                                if (result_16 u< result_1)
                                                    while (true)
                                                        var_c8 = &data_801800
                                                        int32_t var_14_9 = 5
                                                        int32_t eax_66 = result_3[2]
                                                        
                                                        if (eax_66 s< 0 || eax_66 s>= *(edx_35 + 4))
                                                            sub_63b870(eax_66, &data_801800, 
                                                                "index >= 0 && index < mSize", 
                                                                "C:\x\ax2017\Engine\xDynArray.h", 0xd4, 
                                                                "XDynArray<struct TextEntry>::operator []")
                                                            
                                                            if (sub_63bc30() == 0)
                                                                sub_63bb00()
                                                                noreturn
                                                            
                                                            breakpoint
                                                        
                                                        char* ecx_82 =
                                                            *(eax_66 * 0x34 + *edx_35 + 0x24)
                                                        sub_63db30(&var_c8, ecx_82, 
                                                            result_16 - ecx_82)
                                                        char* const edi_3 = var_c8
                                                        float esi_12 = edi_3
                                                        var_c4 = esi_12
                                                        
                                                        if (edi_3 != 0 && *edi_3 != 0)
                                                            char* eax_68 = sub_63d4e0(&var_c4)
                                                            *(eax_68 + 4) += 1
                                                        
                                                        var_14_9.b = 6
                                                        
                                                        if (*(arg2 + 0x58) == 5)
                                                            if (edi_3 == 0 || *edi_3 == 0)
                                                                int32_t* ecx_87 = sub_64bfd0(0x14)
                                                                var_b4 = ecx_87
                                                                ecx_87[3] += 1
                                                                
                                                                if (*ecx_87 == 0)
                                                                    sub_64be70(ecx_87)
                                                                    ecx_87 = var_b4
                                                                
                                                                int32_t* esi_13 = *ecx_87
                                                                *ecx_87 = *esi_13
                                                                void* const ecx_88 = &data_875290
                                                                *esi_13 = 0xfafafafa
                                                                esi_13[1] = 1
                                                                esi_13[2] = 3
                                                                esi_13[3] = 4
                                                                esi_12 = &esi_13[4]
                                                                var_c4 = esi_12
                                                                int32_t eax_73
                                                                
                                                                do
                                                                    eax_73.b = *ecx_88
                                                                    ecx_88 += 1
                                                                    *(esi_12 i-
                                                                        &data_875290 + ecx_88 - 1) = eax_73.b
                                                                while (eax_73.b != 0)
                                                            else
                                                                int32_t* eax_70 =
                                                                    *(sub_63d4e0(&var_c4) + 8)
                                                                var_b4 = eax_70
                                                                sub_63d5e0(eax_70, eax_70 + 3, &var_c4, 
                                                                    1)
                                                                esi_12 = var_c4
                                                                *(var_b4 i+ esi_12) = 0x2e2e2e
                                                        
                                                        char* const edx_40 = &data_801800
                                                        
                                                        if (esi_12 != 0)
                                                            edx_40 = esi_12
                                                        
                                                        int32_t** eax_75 = *(arg2 + 0x60)
                                                        int32_t* ecx_89
                                                        
                                                        if (eax_75 != 0)
                                                            ecx_89 = *eax_75
                                                        
                                                        float xmm0_42
                                                        
                                                        if (eax_75 == 0 || ecx_89 == 0)
                                                            xmm0_42 = sub_6b43a0(**(arg2 + 4), 
                                                                edx_40, *(arg2 + 0x48), *(arg2 + 0x4c))
                                                        else
                                                            int32_t* var_2d0_18 = ecx_89
                                                            xmm0_42 = sub_6417e0(ecx_89, edx_40, 
                                                                *(arg2 + 0x64), *(arg2 + 0x48))
                                                        
                                                        float xmm1_16 = xmm0_42 f* *(arg2 + 0x20)
                                                        
                                                        if (xmm1_16 + var_c0_1 f> *arg4)
                                                            var_a5 = 1
                                                            var_14_9.b = 7
                                                            
                                                            if (data_cf65bc != 0 && esi_12 != 0
                                                                    && *esi_12 != 0)
                                                                char* eax_88 = sub_63d4e0(&var_c4)
                                                                int32_t temp17_1 = *(eax_88 + 4)
                                                                *(eax_88 + 4) -= 1
                                                                
                                                                if (temp17_1 == 1)
                                                                    sub_64c080(eax_88, 
                                                                        *(eax_88 + 0xc) + 0x10)
                                                                    var_c4 = &data_801800
                                                            
                                                            int32_t var_14_12 = 8
                                                            
                                                            if (data_cf65bc != 0 && edi_3 != 0
                                                                    && *edi_3 != 0)
                                                                char* eax_89 = sub_63d4e0(&var_c8)
                                                                int32_t temp18_1 = *(eax_89 + 4)
                                                                *(eax_89 + 4) -= 1
                                                                
                                                                if (temp18_1 == 1)
                                                                    sub_64c080(eax_89, 
                                                                        *(eax_89 + 0xc) + 0x10)
                                                                    var_c8 = &data_801800
                                                            
                                                            int32_t var_14_13 = 0xffffffff
                                                        else
                                                            int32_t eax_81 = result_3[2]
                                                            
                                                            if (eax_81 s< 0
                                                                || eax_81 s>= *(ecx_75 + 4))
                                                            label_6609b0:
                                                                sub_63b870(eax_81, &data_801800, 
                                                                    "index >= 0 && index < mSize", 
                                                                    "C:\x\ax2017\Engine\xDynArray.h", 0xd4, 
                                                                    "XDynArray<struct TextEntry>::operator []")
                                                                
                                                                if (sub_63bc30() != 0)
                                                                    breakpoint
                                                                
                                                                sub_63bb00()
                                                                noreturn
                                                            
                                                            *(eax_81 * 0x34 + *ecx_75 + 0x18) =
                                                                xmm1_16
                                                            eax_81 = result_3[2]
                                                            
                                                            if (eax_81 s< 0
                                                                    || eax_81 s>= *(ecx_75 + 4))
                                                                goto label_6609b0
                                                            
                                                            void* result_10 = result_2
                                                            *(eax_81 * 0x34 + *ecx_75 + 0x28) =
                                                                result_10
                                                            result_2 = sub_5a0db0(result_10)
                                                            var_14_9.b = 9
                                                            
                                                            if (data_cf65bc != 0 && esi_12 != 0
                                                                    && *esi_12 != 0)
                                                                char* eax_86 = sub_63d4e0(&var_c4)
                                                                int32_t temp19_1 = *(eax_86 + 4)
                                                                *(eax_86 + 4) -= 1
                                                                
                                                                if (temp19_1 == 1)
                                                                    sub_64c080(eax_86, 
                                                                        *(eax_86 + 0xc) + 0x10)
                                                                    var_c4 = &data_801800
                                                            
                                                            int32_t var_14_10 = 0xa
                                                            
                                                            if (data_cf65bc != 0 && edi_3 != 0
                                                                    && *edi_3 != 0)
                                                                char* eax_87 = sub_63d4e0(&var_c8)
                                                                int32_t temp20_1 = *(eax_87 + 4)
                                                                *(eax_87 + 4) -= 1
                                                                
                                                                if (temp20_1 == 1)
                                                                    sub_64c080(eax_87, 
                                                                        *(eax_87 + 0xc) + 0x10)
                                                                    var_c8 = &data_801800
                                                            
                                                            edx_35 = ecx_75
                                                            int32_t var_14_11 = 0xffffffff
                                                            result_16 = result_2
                                                            
                                                            if (result_16 u< result_1)
                                                                continue
                                                        
                                                        edx_35 = ecx_75
                                                        edi = var_cc
                                                        break
                                                
                                                result = result_3
                                                int32_t esi_14 = result[2]
                                                
                                                if (esi_14 s< 0)
                                                    goto label_660967
                                                
                                                if (esi_14 s>= *(edx_35 + 4))
                                                    goto label_660967
                                                
                                                int32_t ecx_102 = *(edi + 0x14)
                                                int32_t edx_51 = esi_14 * 0x34
                                                
                                                if (*(edx_51 + ecx_102 + 0x24)
                                                        != *(edx_51 + ecx_102 + 0x28))
                                                    break
                                                
                                                result_12 = result_3
                                                result_4 = sub_65f0f0(esi_14 - 1, *result_12, edi, 
                                                    esi_14 - 1)
                                                
                                                if (result_4 == 0xffffffff)
                                                    goto label_66082d
                                                
                                                result = result_4 - 1
                                                
                                                if (result s>= 0)
                                                    if (result s>= *(edi + 0x18))
                                                        goto label_660967
                                                    
                                                    int32_t ecx_104 = result * 0x34
                                                    int32_t eax_93 = *(edi + 0x14)
                                                    float xmm0_46 = *(ecx_104 + eax_93 + 0x18) f+
                                                        *(ecx_104 + eax_93 + 0x10)
                                                    *(edi + 0x18) = result_4 + 1
                                                    result = result_4
                                                    var_c0_1 = xmm0_46
                                                else
                                                    *(edi + 0x18) = result_4 + 1
                                                    result = result_4
                                                    var_c0_1 = 0f
                                                    
                                                    if (result_4 s< 0)
                                                        goto label_660967
                                                
                                                if (result s>= *(edi + 0x18))
                                                    goto label_660967
                                                
                                                result_5 = edi + 0x14
                                                result_3[5] =
                                                    *(result * 0x34 + *(edi + 0x14) + 0xc) + 1
                                                goto label_6607cd
                                            
                                            if (result_15 s>= result[1])
                                                goto label_660967
                                            
                                            result = *(result_15 * 0x34 + *(edi + 0x14))
                                            
                                            if (result != 3 && result != 2)
                                                var_2d0_1 = "FinalizeCurrentEntry"
                                                var_2d4_1 = 0x2be4
                                                var_2d8_1 = "C:\x\ax2017\Engine\UI2.cpp"
                                                ecx = "layout.entries[lineParams.currentEntryIdx]."
                                                "type == TEXTLAYOUT_IMAGE || layout."
                                                "entries[lineParams.currentEntryIdx].type == "
                                                "TEXTLAYOUT_UI"
                                                goto label_660980
                                            
                                            int32_t* eax_99 = *(arg2 + 0x60)
                                            int32_t* ecx_108
                                            
                                            if (eax_99 != 0)
                                                ecx_108 = *eax_99
                                            
                                            float xmm1_18
                                            
                                            if (eax_99 == 0 || ecx_108 == 0)
                                                float xmm3_8 = *(arg2 + 0x4c)
                                                float xmm2_14 = *(arg2 + 0x48)
                                                struct _EXCEPTION_REGISTRATION_RECORD*** ecx_110 =
                                                    **(arg2 + 4)
                                                var_b4 = *(arg2 + 0x20)
                                                xmm1_18 =
                                                    sub_6b43a0(ecx_110, "...", xmm2_14, xmm3_8)
                                                    f* var_b4
                                            else
                                                int32_t* var_2d0_20 = ecx_108
                                                xmm1_18 = sub_6417e0(ecx_108, "...", 
                                                    *(arg2 + 0x64), *(arg2 + 0x48)) f* *(arg2 + 0x20)
                                            
                                            result = result_3
                                            int32_t edx_53 = result[2]
                                            
                                            if (edx_53 s< 0)
                                                goto label_660967
                                            
                                            if (edx_53 s>= *(edi + 0x18))
                                                goto label_660967
                                            
                                            int32_t eax_100 = *(edi + 0x14)
                                            int32_t ecx_111 = edx_53 * 0x34
                                            int32_t xmm3_9 = *arg4
                                            result_5 = edi + 0x14
                                            float xmm2_15 = *(ecx_111 + eax_100 + 0x10)
                                            int32_t eax_101
                                            
                                            if (xmm3_9 f>= xmm2_15 f+ *(ecx_111 + eax_100 + 0x18)
                                                    + xmm1_18)
                                                *(edi + 0x18) = edx_53 + 1
                                                eax_101 = edx_53
                                            label_660849:
                                                result_3[1] = eax_101
                                                int32_t eax_108 = *(edi + 0x18)
                                                result = eax_108 - 1
                                                
                                                if (eax_108 - 1 s< 0)
                                                    goto label_660967
                                                
                                                if (result s>= *(edi + 0x18))
                                                    goto label_660967
                                                
                                                int32_t* result_7 = result_3
                                                int32_t eax_111 =
                                                    *(result * 0x34 + *(edi + 0x14) + 0xc) + 1
                                                result_3[2] = 0xffffffff
                                                result_3[5] = eax_111
                                                void* eax_112 = sub_65e9d0(eax_111, 0, edi, arg2)
                                                *(eax_112 + 0x24) = 0
                                                *(eax_112 + 0x28) = 0
                                                int32_t eax_113
                                                eax_113.b = *(arg2 + 0x58) == 5
                                                *(eax_112 + 0x2c) = eax_113
                                                int32_t xmm0_57
                                                result, xmm0_57 = sub_65e4e0(arg2)
                                                *(eax_112 + 0x20) = xmm0_57
                                                result.b = 1
                                                *(eax_112 + 0x18) = xmm1_18
                                                result_12 = result_3
                                                goto label_660139
                                            
                                            eax_101 = edx_53 - 1
                                            
                                            if (xmm3_9 f>= xmm1_18 + xmm2_15)
                                                *(edi + 0x18) = edx_53
                                                goto label_660849
                                            
                                            var_a5 = 1
                                            result_4 = sub_65f0f0(result_3, *result_3, edi, eax_101)
                                            
                                            if (result_4 == 0xffffffff)
                                                result_12 = result_3
                                            label_66082d:
                                                *(edi + 0x18) = *result_12
                                                result.b = 1
                                                goto label_660139
                                            
                                            result = result_4 - 1
                                            int32_t xmm0_55
                                            
                                            if (result s>= 0)
                                                if (result s>= *(edi + 0x18))
                                                    goto label_660967
                                                
                                                int32_t ecx_113 = result * 0x34
                                                int32_t eax_104 = *result_5
                                                xmm0_55 = *(ecx_113 + eax_104 + 0x18) f+
                                                    *(ecx_113 + eax_104 + 0x10)
                                            else
                                                xmm0_55 = (zx.o(0)).d
                                            
                                            var_c0_1 = xmm0_55
                                            *(edi + 0x18) = result_4 + 1
                                        label_6607cd:
                                            result_3[1] = result_4
                                            result_3[2] = result_4
                                            result = result_5
                                            result_2 = result_5
                                            
                                            if (result_4 s< 0)
                                                goto label_660967
                                            
                                            result_15 = result_4
                                            
                                            if (result_4 s>= result[1])
                                                goto label_660967
                                        
                                        goto label_66012a
                            case 2
                                result = result_3
                                char* esi_1 = result[2]
                                var_c8 = esi_1
                                
                                if (esi_1 s>= 0 && esi_1 s< *(edi + 0x18))
                                    int32_t ecx_14 = *(edi + 0x14)
                                    int32_t* edx_3 = esi_1 * 0x34
                                    void var_a0
                                    int32_t var_90
                                    
                                    if (*(edx_3 + ecx_14) != 0)
                                        var_c0_1 - 0f
                                        result:1.b = (var_c0_1 == 0f ? 1 : 0) << 6
                                            | (is_unordered.d(var_c0_1, 0f) ? 1 : 0) << 2
                                            | (var_c0_1 < 0f ? 1 : 0)
                                        bool p_8 = unimplemented  {test ah, 0x44}
                                        
                                        if (not(p_8))
                                            *(edx_3 + ecx_14 + 0x18) = xmm1_1
                                        label_66012a:
                                            result_12 = result_3
                                            goto label_660130
                                        
                                        result = result_3
                                        int32_t edx_24 = result[1]
                                        int32_t var_bc_2 = edx_24
                                        
                                        if (edx_24 == 0xffffffff)
                                        label_6600b3:
                                            var_2d0_1 = "UpdateToNewLine"
                                            var_2d4_1 = 0x2a69
                                            var_2d8_1 = "C:\x\ax2017\Engine\UI2.cpp"
                                            ecx = "lastEntryToMoveInclusive != -1"
                                            goto label_660980
                                        
                                        if (esi_1 s<= 0)
                                        label_65fe18:
                                            float xmm2_10 = result[7]
                                            float xmm0_30 = xmm2_10 f+ result[6]
                                            *result = esi_1
                                            result[1] = edx_24
                                            result[2] = edx_24
                                            result[6] = xmm0_30
                                            xmm2_10 - 0f
                                            result_3[4] = result[4] + 1
                                            result:1.b = (xmm2_10 == 0f ? 1 : 0) << 6
                                                | (is_unordered.d(xmm2_10, 0f) ? 1 : 0) << 2
                                                | (xmm2_10 < 0f ? 1 : 0)
                                            bool p_10 = unimplemented  {test ah, 0x44}
                                            
                                            if (not(p_10))
                                            label_66009a:
                                                var_2d0_1 = "UpdateToNewLine"
                                                var_2d4_1 = 0x2a8c
                                                var_2d8_1 = "C:\x\ax2017\Engine\UI2.cpp"
                                                ecx = "lineParamsPrevLine.lineSpacing != 0"
                                                goto label_660980
                                            
                                            if (esi_1 s< *(edi + 0x18))
                                                result = nullptr
                                                float xmm1_14 =
                                                    *(esi_1 * 0x34 + *(edi + 0x14) + 0x10)
                                                    ^ (data_8937c0.o).d
                                                result_1 = 0f
                                                
                                                if (esi_1 s<= edx_24)
                                                    int32_t edx_28 = esi_1 * 0x34
                                                    
                                                    do
                                                        if (edx_28 s< 0)
                                                            goto label_660967
                                                        
                                                        if (esi_1 s>= *(edi + 0x18))
                                                            goto label_660967
                                                        
                                                        void* ecx_61 = *(edi + 0x14) + edx_28
                                                        esi_1 = &esi_1[1]
                                                        edx_28 += 0x34
                                                        *(ecx_61 + 0x10) =
                                                            xmm1_14 f+ *(ecx_61 + 0x10)
                                                        *(ecx_61 + 0x14) =
                                                            xmm2_10 f+ *(ecx_61 + 0x14)
                                                        *(ecx_61 + 8) = result_3[4]
                                                        float result_9 = result_1
                                                        *(ecx_61 + 0xc) = result_9
                                                        result = result_9 i+ 1
                                                        result_1 = result
                                                    while (esi_1 s<= var_bc_2)
                                                
                                            label_65f477:
                                                result_12 = result_3
                                                result_12[5] = result
                                                break
                                        else
                                            result = *result
                                            
                                            if (result s>= 0)
                                                int32_t edx_25 = *(edi + 0x18)
                                                
                                                if (result s< edx_25)
                                                    result *= 0x34
                                                    float result_21 = *(result + ecx_14 + 0x10)
                                                    result_1 = result_21
                                                    
                                                    if (&esi_1[0xffffffff] s>= 0
                                                            && &esi_1[0xffffffff] s< edx_25)
                                                        int32_t eax_41 = *(edi + 0x14)
                                                        int32_t edx_26 = *(edi + 0x10)
                                                        int32_t ecx_54 = &esi_1[0xffffffff] * 0x34
                                                        void* var_2d0_11 = &esi_1[0xffffffff]
                                                        var_b4 = *(ecx_54 + eax_41 + 0x18) f+
                                                            *(ecx_54 + eax_41 + 0x10) - result_21
                                                        void var_248
                                                        __builtin_memcpy(&var_a0, 
                                                            sub_65efc0(&var_248, edx_26, edi, 
                                                                &var_248, ecx_54), 
                                                            0x78)
                                                        float eax_44 = sub_6b7590(var_90)
                                                        esi_1 = var_c8
                                                        edi = var_cc
                                                        result_2 = nullptr
                                                        result = result_3
                                                        int32_t edx_27 = *result
                                                        float xmm1_12 =
                                                            (*arg4 f- var_b4) * eax_44 - result_1
                                                        
                                                        if (edx_27 s>= esi_1)
                                                        label_65fe12:
                                                            edx_24 = var_bc_2
                                                            goto label_65fe18
                                                        
                                                        int32_t ecx_57 = edx_27 * 0x34
                                                        
                                                        while (true)
                                                            if (ecx_57 s< 0)
                                                                goto label_660967
                                                            
                                                            if (edx_27 s>= *(edi + 0x18))
                                                                goto label_660967
                                                            
                                                            result = *(edi + 0x14) + ecx_57
                                                            
                                                            if ((result[1].b & 2) == 0)
                                                                edi = var_cc
                                                                
                                                                if (result[3] != result_2)
                                                                    break
                                                                
                                                                result_2 += 1
                                                                result[4] = xmm1_12 f+ result[4]
                                                            
                                                            edx_27 += 1
                                                            ecx_57 += 0x34
                                                            
                                                            if (edx_27 s>= esi_1)
                                                                result = result_3
                                                                goto label_65fe12
                                                        
                                                    label_660081:
                                                        var_2d0_1 = "UpdateToNewLine"
                                                        var_2d4_1 = 0x2a7d
                                                        var_2d8_1 = "C:\x\ax2017\Engine\UI2.cpp"
                                                        ecx = "entry.entryIdxOnLine == i"
                                                        goto label_660980
                                    else
                                        if (*(edx_3 + ecx_14 + 0x30) != 0)
                                            goto label_65feef
                                        
                                        char* edx_4 = *(edx_3 + ecx_14 + 0x28)
                                        int32_t result_18 = (zx.o(0)).d
                                        float result_25 = 0f
                                        var_c8 = edx_4
                                        float result_23 = 0f
                                        result_2 = nullptr
                                        float result_17 = *(esi_1 * 0x34 + ecx_14 + 0x24)
                                        
                                        if (result_17 != edx_4)
                                            while (true)
                                                result_17 = sub_5a0db0(result_17)
                                                char ecx_16 = *result_17
                                                
                                                if (ecx_16 u>= 0x80)
                                                    result.b = ecx_16
                                                    result.b &= 0xe0
                                                    
                                                    if (result.b != 0xc0)
                                                        result.b = ecx_16
                                                        result.b &= 0xf0
                                                        
                                                        if (result.b != 0xe0
                                                                && (ecx_16 & 0xf8) != 0xf0)
                                                            goto label_66001d
                                                
                                                result_1 = result_17
                                                var_b4 = sub_5a0d00(&result_1)
                                                char* var_d0 = &data_801800
                                                int32_t var_14_4 = 2
                                                int32_t eax_13 = result_3[2]
                                                
                                                if (eax_13 s< 0 || eax_13 s>= *(var_cc + 0x18))
                                                    sub_63b870(eax_13, &data_801800, 
                                                        "index >= 0 && index < mSize", 
                                                        "C:\x\ax2017\Engine\xDynArray.h", 0xd4, 
                                                        "XDynArray<struct TextEntry>::operator []")
                                                    
                                                    if (sub_63bc30() == 0)
                                                        sub_63bb00()
                                                        noreturn
                                                    
                                                    breakpoint
                                                
                                                char* ecx_19 =
                                                    *(eax_13 * 0x34 + *(var_cc + 0x14) + 0x24)
                                                sub_63da70(&var_d0, ecx_19, result_17 i- ecx_19)
                                                char* esi_2 = var_d0
                                                char* edx_6 = &data_801800
                                                
                                                if (esi_2 != 0)
                                                    edx_6 = esi_2
                                                
                                                int32_t** ecx_21 = *(arg2 + 0x60)
                                                int32_t* ecx_22
                                                
                                                if (ecx_21 != 0)
                                                    ecx_22 = *ecx_21
                                                
                                                float xmm0_8
                                                
                                                if (ecx_21 == 0 || ecx_22 == 0)
                                                    xmm0_8 = sub_6b43a0(**(arg2 + 4), edx_6, 
                                                        *(arg2 + 0x48), *(arg2 + 0x4c))
                                                else
                                                    int32_t* var_2d0_5 = ecx_22
                                                    xmm0_8 = sub_6417e0(ecx_22, edx_6, 
                                                        *(arg2 + 0x64), *(arg2 + 0x48))
                                                
                                                float result_19 = xmm0_8 f* *(arg2 + 0x20)
                                                result_1 = result_19
                                                
                                                if (var_c0_1 + result_19 f> *arg4)
                                                    int32_t var_14_7 = 3
                                                    
                                                    if (data_cf65bc != 0 && esi_2 != 0
                                                            && *esi_2 != 0)
                                                        char* eax_23 = sub_63d4e0(&var_d0)
                                                        int32_t temp14_1 = *(eax_23 + 4)
                                                        *(eax_23 + 4) -= 1
                                                        
                                                        if (temp14_1 == 1)
                                                            sub_64c080(eax_23, 
                                                                *(eax_23 + 0xc) + 0x10)
                                                            var_d0 = &data_801800
                                                    
                                                    int32_t var_14_8 = 0xffffffff
                                                else
                                                    int32_t* eax_20 = var_b4
                                                    
                                                    if (eax_20 == 0)
                                                        result_2 = result_19
                                                        result_23 = result_17
                                                    else if (sub_6b48d0(eax_20) != 0)
                                                        result_2 = result_1
                                                        result_23 = result_17
                                                    
                                                    int32_t var_14_5 = 4
                                                    
                                                    if (data_cf65bc != 0 && esi_2 != 0
                                                            && *esi_2 != 0)
                                                        char* eax_22 = sub_63d4e0(&var_d0)
                                                        int32_t temp16_1 = *(eax_22 + 4)
                                                        *(eax_22 + 4) -= 1
                                                        
                                                        if (temp16_1 == 1)
                                                            sub_64c080(eax_22, 
                                                                *(eax_22 + 0xc) + 0x10)
                                                            var_d0 = &data_801800
                                                    
                                                    int32_t var_14_6 = 0xffffffff
                                                    
                                                    if (result_17 != var_c8)
                                                        continue
                                                
                                                result_25 = result_23
                                                result_18 = result_2
                                                break
                                        
                                        result = result_3[2]
                                        
                                        if (result_25 == 0)
                                            if (result s>= 0)
                                                edi = var_cc
                                                
                                                if (result s< *(edi + 0x18))
                                                    int32_t* edx_13 =
                                                        (*(edi + 0x14))[result * 0xd + 9]
                                                    int32_t ecx_36
                                                    ecx_36.b = *edx_13
                                                    
                                                    if (ecx_36.b u>= 0x80)
                                                        result.b = ecx_36.b
                                                        result.b &= 0xe0
                                                        
                                                        if (result.b != 0xc0)
                                                            result.b = ecx_36.b
                                                            result.b &= 0xf0
                                                            
                                                            if (result.b != 0xe0)
                                                                ecx_36.b &= 0xf8
                                                                
                                                                if (ecx_36.b != 0xf0)
                                                                label_66001d:
                                                                    var_2d0_1 = "Xutf8_peek_next"
                                                                    var_2d4_1 = 0x21c
                                                                    var_2d8_1 =
                                                                        "C:\x\ax2017\Engine\Xutf8.cpp"
                                                                    ecx = "!Xutf8_is_invalid_lead_char(str)"
                                                                    goto label_660980
                                                    
                                                    var_b4 = edx_13
                                                    result_12 = result_3
                                                    
                                                    if (sub_6b48d0(sub_5a0d00(&var_b4)).b != 0)
                                                    label_65fa8e:
                                                        var_c0_1 - 0f
                                                        result:1.b = (var_c0_1 == 0f ? 1 : 0) << 6
                                                            | (is_unordered.d(var_c0_1, 0f) ? 1
                                                            : 0) << 2 | (var_c0_1 < 0f ? 1 : 0)
                                                        bool p_4 = unimplemented  {test ah, 0x44}
                                                        
                                                        if (not(p_4))
                                                            result = result_12[2]
                                                            
                                                            if (result s< 0)
                                                                var_2d0_1 = "FinalizeCurrentEntry"
                                                                var_2d4_1 = 0x2b78
                                                                var_2d8_1 = "C:\x\ax2017\Engine\UI2.cpp"
                                                                ecx = "lineParams.currentEntryIdx >= 0"
                                                                goto label_660980
                                                            
                                                            if (result s< *(edi + 0x18))
                                                                (*(edi + 0x14))[result * 0xd + 6] =
                                                                    var_c4
                                                                goto label_660130
                                                        else
                                                            int32_t ecx_47 = result_12[1]
                                                            char* const esi_3 = result_12[2]
                                                            int32_t var_bc_1 = ecx_47
                                                            var_c8 = esi_3
                                                            
                                                            if (esi_3 == 0xffffffff)
                                                                var_2d0_1 = "UpdateToNewLine"
                                                                var_2d4_1 = 0x2a68
                                                                var_2d8_1 = "C:\x\ax2017\Engine\UI2.cpp"
                                                                ecx = "firstEntryToMoveNewLine != -1"
                                                                goto label_660980
                                                            
                                                            if (ecx_47 == 0xffffffff)
                                                                goto label_6600b3
                                                            
                                                            if (esi_3 s<= 0)
                                                            label_65fbf8:
                                                                float xmm1_8 = result_3[7]
                                                                result_3[4] += 1
                                                                xmm1_8 - 0f
                                                                *result_3 = esi_3
                                                                result_3[1] = ecx_47
                                                                result_3[2] = ecx_47
                                                                result:1.b = (xmm1_8 == 0f ? 1 : 0) << 6
                                                                    | (is_unordered.d(xmm1_8, 0f) ? 1 : 0)
                                                                    << 2 | (xmm1_8 < 0f ? 1 : 0)
                                                                result_3[6] = xmm1_8 f+ result_3[6]
                                                                bool p_6 =
                                                                    unimplemented  {test ah, 0x44}
                                                                
                                                                if (not(p_6))
                                                                    goto label_66009a
                                                                
                                                                if (esi_3 s>= 0
                                                                        && esi_3 s< *(edi + 0x18))
                                                                    int32_t edx_23 = esi_3 * 0x34
                                                                    result = nullptr
                                                                    float xmm2_9 =
                                                                        *(edx_23 + *(edi + 0x14) + 0x10)
                                                                        ^ (data_8937c0.o).d
                                                                    result_1 = 0f
                                                                    
                                                                    if (esi_3 s<= ecx_47)
                                                                        do
                                                                            if (edx_23 s< 0)
                                                                                goto label_660967
                                                                            
                                                                            if (esi_3 s>= *(edi + 0x18))
                                                                                goto label_660967
                                                                            
                                                                            void* ecx_53 = *(edi + 0x14) + edx_23
                                                                            esi_3 = &esi_3[1]
                                                                            edx_23 += 0x34
                                                                            *(ecx_53 + 0x10) =
                                                                                xmm2_9 f+ *(ecx_53 + 0x10)
                                                                            *(ecx_53 + 0x14) =
                                                                                xmm1_8 f+ *(ecx_53 + 0x14)
                                                                            *(ecx_53 + 8) = result_3[4]
                                                                            float result_8 = result_1
                                                                            *(ecx_53 + 0xc) = result_8
                                                                            result = result_8 i+ 1
                                                                            result_1 = result
                                                                        while (esi_3 s<= var_bc_1)
                                                                    
                                                                    goto label_65f477
                                                            else
                                                                result = *result_3
                                                                
                                                                if (result s>= 0)
                                                                    int32_t ecx_48 = *(edi + 0x18)
                                                                    
                                                                    if (result s< ecx_48)
                                                                        int32_t edx_19 = *(edi + 0x14)
                                                                        result *= 0x34
                                                                        float result_20 =
                                                                            *(result + edx_19 + 0x10)
                                                                        result_1 = result_20
                                                                        
                                                                        if (&esi_3[0xffffffff] s>= 0
                                                                                && &esi_3[0xffffffff] s< ecx_48)
                                                                            int32_t eax_32 =
                                                                                &esi_3[0xffffffff] * 0x34
                                                                            void* var_2d0_10 = &esi_3[0xffffffff]
                                                                            int32_t edx_20 = *(edi + 0x10)
                                                                            var_b4 = *(eax_32 + edx_19 + 0x18) f+
                                                                                *(eax_32 + edx_19 + 0x10) - result_20
                                                                            void var_1d0
                                                                            __builtin_memcpy(&var_a0, 
                                                                                sub_65efc0(&var_1d0, edx_20, edi, 
                                                                                    &var_1d0, ecx_48), 
                                                                                0x78)
                                                                            float eax_35 = sub_6b7590(var_90)
                                                                            esi_3 = var_c8
                                                                            edi = var_cc
                                                                            result_2 = nullptr
                                                                            result = result_3
                                                                            int32_t edx_21 = *result
                                                                            float xmm1_7 =
                                                                                (*arg4 f- var_b4) * eax_35 - result_1
                                                                            
                                                                            if (edx_21 s< esi_3)
                                                                                int32_t ecx_51 = edx_21 * 0x34
                                                                                
                                                                                do
                                                                                    if (ecx_51 s< 0)
                                                                                        goto label_660967
                                                                                    
                                                                                    if (edx_21 s>= *(edi + 0x18))
                                                                                        goto label_660967
                                                                                    
                                                                                    result = *(edi + 0x14) + ecx_51
                                                                                    
                                                                                    if ((result[1].b & 2) == 0)
                                                                                        edi = var_cc
                                                                                        
                                                                                        if (result[3] != result_2)
                                                                                            goto label_660081
                                                                                        
                                                                                        result_2 += 1
                                                                                        result[4] = xmm1_7 f+ result[4]
                                                                                    
                                                                                    edx_21 += 1
                                                                                    ecx_51 += 0x34
                                                                                while (edx_21 s< esi_3)
                                                                            
                                                                            ecx_47 = var_bc_1
                                                                            goto label_65fbf8
                                                    else
                                                        int32_t eax_29 = result_12[2] - 1
                                                        result = sub_65f0f0(eax_29, *result_12, 
                                                            edi, eax_29)
                                                        
                                                        if (result == 0xffffffff)
                                                            goto label_65fa8e
                                                        
                                                        if (result s>= 0 && result s< *(edi + 0x18))
                                                            int32_t* edx_16 =
                                                                result * 0x34 + *(edi + 0x14)
                                                            int32_t ecx_40 = *edx_16
                                                            
                                                            if (ecx_40 != 0 && ecx_40 != 2
                                                                    && ecx_40 != 3)
                                                                var_2d0_1 = "FinalizeCurrentEntry"
                                                                var_2d4_1 = 0x2b5d
                                                                var_2d8_1 = "C:\x\ax2017\Engine\UI2.cpp"
                                                                ecx = "Halt"
                                                                goto label_660980
                                                            
                                                            if ((edx_16[1].b & 1) != 0)
                                                                result = sub_65f080(result - 1, 
                                                                    *result_12, edi, result - 1)
                                                            
                                                            void* ecx_45 = result + 1
                                                            
                                                            if (ecx_45 == 0xffffffff)
                                                                var_2d0_1 = "FinalizeCurrentEntry"
                                                                var_2d4_1 = 0x2b6e
                                                                var_2d8_1 = "C:\x\ax2017\Engine\UI2.cpp"
                                                                ecx = "lastEntryToWrap != -1"
                                                                goto label_660980
                                                            
                                                            xmm1_1 = (zx.o(0)).d
                                                            var_c0_1 f- 0
                                                            result:1.b =
                                                                (var_c0_1 == 0f ? 1 : 0) << 6 | (
                                                                is_unordered.d(var_c0_1, 0f) ? 1 : 0)
                                                                << 2 | (var_c0_1 < 0f ? 1 : 0)
                                                            bool p_2 =
                                                                unimplemented  {test ah, 0x44}
                                                            
                                                            if (not(p_2))
                                                                continue
                                                            
                                                            sub_65f160(result, arg4, edi, 
                                                                result_12, ecx_45, result_12[1])
                                                            break
                                        else if (result s>= 0)
                                            edi = var_cc
                                            
                                            if (result s< *(edi + 0x18))
                                                *(result * 0x34 + *(edi + 0x14) + 0x28) = result_25
                                                result = result_3[2]
                                                
                                                if (result s>= 0 && result s< *(edi + 0x18))
                                                    *(result * 0x34 + *(edi + 0x14) + 0x18) =
                                                        result_18
                                                    result = result_3[2]
                                                    
                                                    if (result s>= 0 && result s< *(edi + 0x18))
                                                        int32_t eax_26 = *(edi + 0x14)
                                                        var_b4 = *(result * 0x34 + eax_26 + 0x20)
                                                        result = sub_65ed50(eax_26, arg2, edi, 
                                                            arg4, result_3)
                                                        char* const temp7_1 = var_c8
                                                        
                                                        if (result_25 u> temp7_1)
                                                            var_2d0_1 = "FinalizeCurrentEntry"
                                                            var_2d4_1 = 0x2b36
                                                            var_2d8_1 = "C:\x\ax2017\Engine\UI2.cpp"
                                                            ecx = "lastBreak <= full_end"
                                                            goto label_660980
                                                        
                                                        if (result_25 == temp7_1)
                                                            goto label_66012a
                                                        
                                                        while (true)
                                                            result.b = *result_25
                                                            
                                                            if (result.b != 0xa && result.b != 0x20
                                                                    && result.b != 9)
                                                                break
                                                            
                                                            result_25 += 1
                                                        
                                                        int32_t* result_6 = result_3
                                                        result = sub_65e9d0(result, 0, edi, arg2)
                                                        int32_t* xmm0_10 = var_b4
                                                        char* const ecx_35 = var_c8
                                                        result[9] = result_25
                                                        result_12 = result_3
                                                        result[8] = xmm0_10
                                                        result[0xa] = ecx_35
                                                        
                                                        if (result_12[2] != 0xffffffff)
                                                            break
                                                        
                                                        var_2d0_1 = "FinalizeCurrentEntry"
                                                        var_2d4_1 = 0x2b40
                                                        var_2d8_1 = "C:\x\ax2017\Engine\UI2.cpp"
                                                        ecx = "lineParams.currentEntryIdx != -1"
                                                        goto label_660980
                            case 3
                                result = result_3
                            label_65feef:
                                result_2 = sub_65f080(result, *result, edi, result[1])
                                result = result_3
                                float result_11 = 1.40129846e-45f
                                result_1 = 1.40129846e-45f
                                int32_t ecx_63 = result[2]
                                
                                if (ecx_63 s>= 0 && ecx_63 s< *(edi + 0x18))
                                    result = ecx_63 * 0x34
                                    void* result_14 = result_2
                                    
                                    if (*(result + *(edi + 0x14) + 0x30) == 0 || ecx_63 s< 2)
                                    label_65ff59:
                                        
                                        if (result_14 == 0xffffffff)
                                            var_c0_1 - 0f
                                            result_12 = result_3
                                            result:1.b = (var_c0_1 == 0f ? 1 : 0) << 6
                                                | (is_unordered.d(var_c0_1, 0f) ? 1 : 0) << 2
                                                | (var_c0_1 < 0f ? 1 : 0)
                                            bool p_14 = unimplemented  {test ah, 0x44}
                                            
                                            if (p_14)
                                                result = sub_65f160(result, arg4, edi, result_12, 
                                                    *result_12, result_12[1])
                                            
                                            sub_65ed50(result, arg2, edi, arg4, result_12)
                                            goto label_660130
                                        
                                        int32_t edx_30 = *(edi + 0x10)
                                        void* result_22 = result_14
                                        int128_t var_64 = *result_3
                                        var_64:4.d = result_14
                                        var_64:8.d = 0xffffffff
                                        int128_t var_54_1 = *(result_3 + 0x10)
                                        int128_t var_44_1 = *(result_3 + 0x20)
                                        int32_t var_2c_1 = result_3[0xe]
                                        int64_t var_34_1 = *(result_3 + 0x30)
                                        void var_2c0
                                        void var_158
                                        __builtin_memcpy(&var_158, 
                                            sub_65efc0(&var_2c0, edx_30, edi, &var_2c0, ecx_63), 
                                            0x78)
                                        edi = var_cc
                                        sub_65ed50(&var_64, &var_158, edi, arg4, &var_64)
                                        var_c0_1 - 0f
                                        result_12 = result_3
                                        result:1.b = (var_c0_1 == 0f ? 1 : 0) << 6
                                            | (is_unordered.d(var_c0_1, 0f) ? 1 : 0) << 2
                                            | (var_c0_1 < 0f ? 1 : 0)
                                        bool p_12 = unimplemented  {test ah, 0x44}
                                        
                                        if (not(p_12))
                                            goto label_660130
                                        
                                        void* eax_59 = result_1 i+ result_2
                                        sub_65f160(eax_59, arg4, edi, result_12, eax_59, 
                                            result_12[1])
                                        break
                                    
                                    if (ecx_63 - 2 s< *(edi + 0x18))
                                        int32_t eax_52 = (ecx_63 - 2) * 0x34
                                        ecx_63 = *(edi + 0x14)
                                        
                                        if ((*(eax_52 + ecx_63 + 4) & 1) == 0)
                                            result_11 = 0f
                                        
                                        result_1 = result_11
                                        goto label_65ff59
            else if (result s>= 0 && result s< *(edi + 0x18))
                result = *(edi + 0x14)
                var_c0_1 = result[result * 0xd + 6] f+ result[result * 0xd + 4]
                goto label_65f4c0
        label_660967:
            var_2d0_1 = "XDynArray<struct TextEntry>::operator []"
            var_2d4_1 = 0xd4
            ecx = "index >= 0 && index < mSize"
            var_2d8_1 = "C:\x\ax2017\Engine\xDynArray.h"
            goto label_660980
else
    var_2d0_1 = "FinalizeCurrentEntry"
    var_2d4_1 = 0x2ab7
    var_2d8_1 = "C:\x\ax2017\Engine\UI2.cpp"
    ecx = "lineParams.currentEntryIdx == lineParams.lastEntryIdx"

label_660980:
sub_63b870(result, &data_801800, ecx, var_2d8_1, var_2d4_1, var_2d0_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
