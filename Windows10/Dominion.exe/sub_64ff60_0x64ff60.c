// 函数: sub_64ff60
// 地址: 0x64ff60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76cd78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_8c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = arg3
int32_t* var_7c = edx
int32_t* i = arg9
int32_t* i_2 = i
int32_t* i_1 = nullptr

if (edx[2] s> 0)
    int32_t ecx = 0
    int32_t var_78_1 = 0
    
    do
        struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_90_1)(struct 
            _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_63d770
        uint8_t** ebx_2 = *edx + ecx
        int32_t var_8_1 = 0
        int32_t var_54[0x10]
        int32_t var_90_2 = `eh vector constructor iterator'(&var_54, 4, 0x10, 0x5a0be0)
        int32_t* eax_8
        int32_t* i_3
        eax_8, i_3 = sub_64c230(*ebx_2, &var_54)
        int32_t* edi_1 = eax_8
        bool cond:1_1
        
        if ((ebx_2[4].b & 1) == 0)
            cond:1_1 = edi_1 == 0
        label_650047:
            
            if (not(cond:1_1))
            label_65004d:
                int32_t var_94_2
                
                if (edi_1 != 1)
                    int32_t esi_3 = 0
                    
                    if (edi_1 s> 0)
                        do
                            char* eax_11 = var_54[esi_3]
                            char* ecx_5 = &data_801800
                            
                            if (eax_11 != 0)
                                ecx_5 = eax_11
                            
                            eax_8, i_3 = sub_64cf70(arg2, *(arg2 + 0x16b0), ecx_5, arg5)
                            
                            if (eax_8 == 0)
                                goto label_65010d
                            
                            esi_3 += 1
                        while (esi_3 s< edi_1)
                    
                    if (*arg6 s>= 0x100)
                        char const* const var_90_8 = "MyMethod"
                        var_94_2 = 0x130c
                        goto label_650177
                    
                    int32_t* i_4 = i_3
                    sub_64fe30(eax_8, arg7, arg4, arg8, arg6, ebx_2, 1f)
                else
                    int32_t ecx_4
                    eax_8, ecx_4 = sub_64cf70(arg2, *(arg2 + 0x16b0), *ebx_2, arg5)
                    
                    if (eax_8 != 0)
                        if (*arg6 s>= 0x100)
                            char const* const var_90_7 = "MyMethod"
                            var_94_2 = 0x12f8
                        label_650177:
                            sub_63b870(eax_8, &data_801800, "numMapsToMerge < MAX_STATES", 
                                "C:\x\ax2017\Engine\UI2.cpp", var_94_2, "MyMethod")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        int32_t xmm1_1 = eax_8[5]
                        float xmm0_1 = (zx.o(0)).d
                        
                        if (not(0 f> xmm1_1))
                            xmm0_1 = _mm_min_ss(0x3f800000, xmm1_1)
                        
                        int32_t var_90_4 = ecx_4
                        sub_64fe30(eax_8, arg7, arg4, arg8, arg6, ebx_2, xmm0_1)
        else
            i_3 = i_2
            
            if (i_3 != 0)
                int32_t esi_1 = 0
                cond:1_1 = edi_1 == 0
                
                if (edi_1 s<= 0)
                    goto label_650047
                
                do
                    char* eax_9 = var_54[esi_1]
                    char* const edx_2 = &data_801800
                    
                    if (eax_9 != 0)
                        edx_2 = eax_9
                    
                    eax_8 = sub_64f870(i_3, edx_2)
                    
                    if (eax_8.b == 0)
                        goto label_65010d
                    
                    i_3 = i_2
                    esi_1 += 1
                while (esi_1 s< edi_1)
                
                goto label_65004d
    label_65010d:
        int32_t var_8_2 = 0xffffffff
        `eh vector vbase constructor iterator'(&var_54, 4, 0x10, sub_63d770)
        edx = var_7c
        i = i_1 + 1
        ecx = var_78_1 + 0x30
        i_1 = i
        var_78_1 = ecx
    while (i s< edx[2])

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(i)
return i
