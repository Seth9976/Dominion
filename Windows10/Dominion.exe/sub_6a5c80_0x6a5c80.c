// 函数: sub_6a5c80
// 地址: 0x6a5c80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f786
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t __saved_ebp
int32_t var_848 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_4 = arg3
char* count_10 = arg4
void* result = arg6
char* var_824 = result

if ((arg5[0xa].b & 8) == 0)
    int32_t* count_5 = *arg5 + arg2
    int32_t* count_9 = count_5
    result = sub_6a5a40(arg2, arg5)
    
    if (result.b == 0 || var_824 != 0)
        uint32_t eax_4 = sub_69c590(count_10)
        char* count
        
        if (eax_4.b == 0)
            char* count_17 = count_10
            char* count_3 = *(count_17 + 0x10)
            result = &count_3[0xfffffffb]
            void* const ecx_25
            
            if (result u> 0xf)
            label_6a6166:
                
                if (count_3 s> 0 && count_3 s< 0x12)
                    count = "DefParseTreeMakeFromDefinitionSubField"
                    int32_t var_850_12 = 0x820
                    char const* const var_854_11 = "C:\x\ax2017\Engine\DefParseTree.cpp"
                    ecx_25 = "!DefTypeIsBuiltIn(pDefMap)"
                label_6a61d6:
                    sub_63b870(result, &data_801800, ecx_25)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t* eax_20 = sub_6a48e0(arg3, arg5[1])
                eax_20[4] = arg5
                result = sub_6a2fa0()
                count = var_824
                eax_20[3] = result
                result = sub_6a6220(result, count_5, result, count_10, arg5[1], count)
            else
                result = zx.d(*(result + &lookup_table_6a6210))
                
                switch (result)
                    case nullptr
                        int32_t* eax_12 = arg5[4]
                        count = var_824
                        result = sub_6a57b0(eax_12, *count_5, arg3, arg5, *(eax_12 + arg2), count)
                    case 1
                        count = var_824
                        result = sub_6a57b0(result, *arg5 + arg2, arg3, arg5, arg5[7], count)
                    case 2
                        result = *arg5
                        
                        if (*(arg2 + result) != 0)
                            count = var_824
                            result = sub_6a6220(result, count_5, arg3, count_17, arg5[1], count)
                    case 3
                        int32_t* eax_13 = sub_6a48e0(arg3, arg5[1])
                        count = count_5
                        result = sub_63d8d0(&eax_13[1], count)
                    case 4
                        void* ebx_2 = *arg5 + arg2
                        int32_t* eax_5 = sub_6a4b50(arg3, arg5[1])
                        count = *(ebx_2 + 0xc)
                        void* const var_850_2 = &data_808880
                        char* eax_6 = eax_5[3]
                        sub_63df30(&count_10, "%d")
                        char* const count_6 = &data_801800
                        int32_t var_8_1 = 0
                        char* count_11 = count_10
                        
                        if (count_11 != 0)
                            count_6 = count_11
                        
                        int32_t* eax_7 = sub_6a48e0(eax_6, "mFreeListHead")
                        count = count_6
                        sub_63d8d0(&eax_7[1], count)
                        int32_t var_8_2 = 1
                        
                        if (data_cf65bc != 0)
                            char* count_14 = count_10
                            
                            if (count_14 != 0 && *count_14 != 0)
                                char* eax_8 = sub_63d4e0(&count_10)
                                int32_t temp0_1 = *(eax_8 + 4)
                                *(eax_8 + 4) -= 1
                                
                                if (temp0_1 == 1)
                                    sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                        
                        int32_t var_8_3 = 0xffffffff
                        count = *(ebx_2 + 0x10)
                        void* const var_850_3 = &data_808880
                        sub_63df30(&count_10, "%d")
                        char* const count_7 = &data_801800
                        int32_t var_8_4 = 2
                        char* count_12 = count_10
                        
                        if (count_12 != 0)
                            count_7 = count_12
                        
                        int32_t* eax_9 = sub_6a48e0(eax_6, "mUsedCount")
                        count = count_7
                        sub_63d8d0(&eax_9[1], count)
                        int32_t var_8_5 = 3
                        
                        if (data_cf65bc != 0)
                            char* count_15 = count_10
                            
                            if (count_15 != 0 && *count_15 != 0)
                                char* eax_10 = sub_63d4e0(&count_10)
                                int32_t temp1_1 = *(eax_10 + 4)
                                *(eax_10 + 4) -= 1
                                
                                if (temp1_1 == 1)
                                    sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                        
                        int32_t var_8_6 = 0xffffffff
                        count = *(ebx_2 + 0x14)
                        void* const var_850_4 = &data_808880
                        sub_63df30(&count_10, "%d")
                        char* const count_8 = &data_801800
                        int32_t var_8_7 = 4
                        char* count_13 = count_10
                        
                        if (count_13 != 0)
                            count_8 = count_13
                        
                        int32_t* eax_11 = sub_6a48e0(eax_6, "mNextKey")
                        count = count_8
                        char* count_16 = sub_63d8d0(&eax_11[1], count)
                        int32_t var_8_8 = 5
                        
                        if (data_cf65bc != 0)
                            count_16 = count_10
                            
                            if (count_16 != 0 && *count_16 != 0)
                                count_16 = sub_63d4e0(&count_10)
                                int32_t temp2_1 = *(count_16 + 4)
                                *(count_16 + 4) -= 1
                                
                                if (temp2_1 == 1)
                                    count_16 = sub_64c080(count_16, *(count_16 + 0xc) + 0x10)
                        
                        int32_t var_8_9 = 0xffffffff
                        count = *(ebx_2 + 4)
                        result = sub_6a58d0(count_16, *ebx_2, eax_6, arg5, count)
                    case 5
                        char* count_18 = arg5[7]
                        result = arg5[1]
                        
                        if (count_18 == 0)
                            count_18 = var_824
                        
                        bool cond:2_1 = (arg5[0xa].b & 0x40) != 0
                        count_10 = count_18
                        int32_t* result_3
                        
                        if (not(cond:2_1))
                            count = count_3
                            
                            if (result != 0)
                                sub_63d720(&count, result)
                                result = sub_6a4c00(arg3)
                                count_18 = count_10
                                result_3 = result
                                result_4 = result_3
                                goto label_6a6002
                            
                        label_6a5fc6:
                            char const* const var_850_9 = "XString::XString"
                            int32_t var_854_8 = 0x94
                            char const* const var_858_2 = "C:\x\ax2017\Engine\xString.cpp"
                            ecx_25 = &data_871e0c
                            goto label_6a61d6
                        
                        result_3 = arg3
                    label_6a6002:
                        int32_t i = 0
                        
                        if (*count_5 s> 0)
                            int32_t edi_1 = 0
                            
                            do
                                int32_t* count_1 = count_5[2] + edi_1
                                count = count_1
                                result = sub_6a5650(count_1, count_18, result_3, count)
                                result_3 = result_4
                                i += 1
                                count_18 = count_10
                                edi_1 += 0x10
                            while (i s< *count_5)
                    case 6
                        char* eax_15 = arg5[7]
                        count = 0x400
                        
                        if (eax_15 == 0)
                            eax_15 = var_824
                        
                        void* result_2 = arg5[1]
                        int32_t var_850_10 = 0
                        int32_t var_418[0x100]
                        memset(&var_418, 0, count)
                        int32_t* var_818 = arg3
                        count = 0x3fc
                        int32_t var_850_11 = 0
                        void var_814
                        result = memset(&var_814, 0, count)
                        int32_t i_2 = 0
                        void* result_1 = nullptr
                        
                        if (count_5[2] s> 0)
                            void* count_4 = nullptr
                            count_10 = nullptr
                            
                            while (true)
                                var_418[i_2] -= 1
                                i_2 += 1
                                result = result_2
                                void* edi_3 = *count_5 + count_4
                                count = count_4
                                
                                if (result == 0)
                                    break
                                
                                sub_63d720(&count, result)
                                int32_t* ecx_29 = sub_6a4c00((&count_10)[i_2])
                                bool cond:4_1 = *edi_3 s<= 0
                                int32_t* var_830_1 = ecx_29
                                (&var_818)[i_2] = ecx_29
                                
                                if (not(cond:4_1))
                                    int32_t ebx_3 = 0
                                    int32_t i_1 = 0
                                    
                                    do
                                        int32_t* count_2 = *(edi_3 + 8) + ebx_3
                                        count = count_2
                                        sub_6a5650(count_2, eax_15, ecx_29, count)
                                        ecx_29 = var_830_1
                                        i_1 += 1
                                        ebx_3 += 0x10
                                    while (i_1 s< *edi_3)
                                    
                                    count_5 = count_9
                                
                                int32_t eax_18 = *(edi_3 + 0x10)
                                var_418[i_2] = eax_18
                                
                                if (eax_18 == 0)
                                    while (i_2 s> 0)
                                        i_2 -= 1
                                        
                                        if (var_418[i_2] != 0)
                                            break
                                
                                result = result_1 + 1
                                count_4 = &count_10[0x18]
                                result_1 = result
                                count_10 = count_4
                                
                                if (result s>= count_5[2])
                                    goto label_6a61a4
                            
                            goto label_6a5fc6
                    case 7
                        goto label_6a6166
        else
            count = arg5[7]
            result = sub_6a4d40(eax_4, count_5, arg3, count_10, arg5[1], arg5[0xa], count)

label_6a61a4:
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
