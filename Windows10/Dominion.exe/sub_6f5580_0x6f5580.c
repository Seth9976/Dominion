// 函数: sub_6f5580
// 地址: 0x6f5580
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_77204d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t esi
int32_t var_54 = esi
int32_t edi
int32_t var_58 = edi
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
LPARAM result_4 = 0
int32_t var_68 = 0x199
LRESULT (__stdcall* const var_38)(HWND hWnd, uint32_t Msg, WPARAM wParam, LPARAM lParam) =
    SendMessageA
LRESULT result = SendMessageA(arg1, 0x199, *(arg2 + 0xc), result_4)
int32_t* esp = &var_5c
LRESULT result_3 = result

if (*(arg2 + 0xc) != 0xffffffff && data_147ef94 != 0)
    int32_t edx
    result, edx = sub_740cf0(data_147df94)
    LRESULT result_2 = result
    
    if (result_2 != 0)
        char* const result_1 = &data_801800
        int32_t var_14_1 = 0
        int32_t ecx_2 = *(arg2 + 0xc)
        char const* const var_68_2
        int32_t var_64_3
        char* ecx_11
        
        if (ecx_2 u> 5)
            result = *result_2 - 1
            int32_t* ecx_28
            
            switch (result)
                case 0
                    if (ecx_2 == 6)
                    label_6f58bc:
                        ecx_28 = result_2 + 0x40
                        goto label_6f5ada
                    
                    result_4 = "OnFabPropGridChange"
                    var_64_3 = 0x100f
                    ecx_11 = "Halt"
                case 1
                    if (ecx_2 == 6)
                        ecx_28 = result_2 + 0x88
                        goto label_6f5ada
                    
                    result_4 = "OnFabPropGridChange"
                    var_64_3 = 0x1005
                    ecx_11 = "Halt"
                case 2
                    if (ecx_2 == 6)
                        ecx_28 = result_2 + 0x60
                    label_6f5ada:
                        void* edx_20 = *(result_3 + 0x10)
                        result_4 = &result_1
                        sub_6f5170(&result_1, edx_20 + 4, ecx_28, result_4)
                        goto label_6f5af1
                    
                    if (ecx_2 == 7)
                        void* eax_16 = sub_69dd00(data_1777514, 0x68)
                        result_4 = &result_1
                        sub_6f4e00(eax_16, result_2 + 0x68, eax_16, result_3 + 0x10, result_4)
                        goto label_6f5af1
                    
                    if (ecx_2 == 8)
                        void* eax_15 = sub_69dd00(data_1777514, 0x80)
                        result_4 = &result_1
                        sub_6f4e00(eax_15, result_2 + 0x80, eax_15, result_3 + 0x10, result_4)
                        goto label_6f5af1
                    
                    result_4 = "OnFabPropGridChange"
                    var_64_3 = 0xffb
                    ecx_11 = "Halt"
                case 4
                    if (ecx_2 == 6)
                        if (*(result_2 + 0xb0) s> 0)
                            ecx_28 = *(result_2 + 0xa8)
                            goto label_6f5ada
                        
                        result_4 = "OnFabPropGridChange"
                        var_64_3 = 0x1017
                        ecx_11 = "el.numSubFabs > 0"
                    else
                        if (ecx_2 == 7)
                            int32_t var_28
                            result_4 = &var_28
                            int64_t var_30
                            void* var_64_7 = &var_30:4
                            int64_t* var_68_3 = &var_30
                            char const* const var_6c_2 = " %d %d %d"
                            int32_t var_70_1 = *(result_3 + 0x10)
                            int32_t eax_18 = sub_64b6d0(&var_30, edx, ecx_2 - 7)
                            int32_t eax_19
                            
                            if (eax_18 == 3)
                                eax_19 = var_28
                                *(result_2 + 0x94) = var_30
                                *(result_2 + 0x9c) = eax_19
                            else if (eax_18 == 1)
                                eax_19 = var_30.d
                                *(result_2 + 0x94) = eax_19
                                *(result_2 + 0x98) = eax_19
                                *(result_2 + 0x9c) = eax_19
                            var_64_7.q = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*(result_2 + 0x9c))))
                            var_6c_2.q = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*(result_2 + 0x98))))
                            int64_t var_74_1 =
                                _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*(result_2 + 0x94))))
                            char const* const var_78_1 = "%g %g %g"
                            char* var_3c
                            sub_63df30(&var_3c, "%g %g %g")
                            var_14_1.b = 5
                            result_4 = &var_3c
                            sub_63d850(&result_1, result_4)
                            var_14_1.b = 6
                            
                            if (data_cf65bc != 0)
                                char* eax_20 = var_3c
                                
                                if (eax_20 != 0 && *eax_20 != 0)
                                    char* eax_21 = sub_63d4e0(&var_3c)
                                    int32_t temp9_1 = *(eax_21 + 4)
                                    *(eax_21 + 4) -= 1
                                    
                                    if (temp9_1 == 1)
                                        sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                            
                            char* const result_5 = result_1
                            char* const result_10 = &data_801800
                            
                            if (result_5 != 0)
                                result_10 = result_5
                            
                            *(result_3 + 0x10) = result_10
                            goto label_6f5af1
                        
                        result_4 = "OnFabPropGridChange"
                        var_64_3 = 0x101e
                        ecx_11 = "Halt"
                case 5
                    if (ecx_2 == 7)
                        result_4 = &result_1
                        sub_6f5300(&result_1, result_3 + 0x10, result_2 + 0xc4, result_4)
                        goto label_6f5af1
                    
                    if (ecx_2 == 8)
                        int32_t ecx_37 = *(result_3 + 0x10)
                        uint32_t eax_22
                        eax_22.w = ecx_37.w
                        eax_22.w u>>= 8
                        *(result_2 + 0xb8) = _mm_cvtepi32_ps(zx.o(ecx_37.b)) / 255f
                        *(result_2 + 0xbc) = _mm_cvtepi32_ps(zx.o(eax_22.w)) / 255f
                        *(result_2 + 0xc0) = _mm_cvtepi32_ps(zx.o((ecx_37 u>> 0x10).b)) / 255f
                        HWND var_6c
                        var_6c.o = *(result_2 + 0xb8)
                        int32_t eax_25 = sub_64b360(var_6c)
                        *(result_3 + 0x10) =
                            (zx.d((eax_25 u>> 0x10).b) << 8 | zx.d((eax_25 u>> 8).b)) << 8
                            | zx.d(eax_25.b)
                        goto label_6f5af1
                    
                    if (ecx_2 == 9)
                        goto label_6f58bc
                    
                    result_4 = "OnFabPropGridChange"
                    var_64_3 = 0x102f
                    ecx_11 = "Halt"
                case 7
                    if (ecx_2 == 6)
                        ecx_28 = result_2 + 0xd0
                        goto label_6f5ada
                    
                    result_4 = "OnFabPropGridChange"
                    var_64_3 = 0x1039
                    ecx_11 = "Halt"
                default
                    result_4 = "OnFabPropGridChange"
                    var_64_3 = 0x103d
                    ecx_11 = "Halt"
            
            var_68_2 = "C:\x\ax2017\Engine\Windows\EditorWindow.cpp"
            goto label_6f5b25
        
        bool cond:1_1
        
        switch (ecx_2)
            case 0
                result.b = *(result_3 + 0x10) != 0
                *(result_2 + 0x38) = result.b
            label_6f5af1:
                result_4 = result_3
                int32_t var_68_4 = 0x19a
                result = var_38(arg1, 0x19a, *(arg2 + 0xc))
                esp = &result_4
                int32_t var_14_4 = 7
                goto label_6f5673
            case 1
                void* eax_4 = sub_69dd00(data_1777514, 8)
                result_4 = &result_1
                sub_6f4e00(eax_4, result_2 + 8, eax_4, result_3 + 0x10, result_4)
                result_4 = result_3
                int32_t var_68_1 = 0x19a
                result = var_38(arg1, 0x19a, *(arg2 + 0xc))
                esp = &result_4
                int32_t var_14_2 = 1
            label_6f5673:
                
                if (data_cf65bc != 0)
                    result = result_1
                    
                    if (result != 0)
                        cond:1_1 = *result == 0
                    label_6f5686:
                        
                        if (not(cond:1_1))
                            result = sub_63d4e0(&result_1)
                            int32_t temp8_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp8_1 == 1)
                                result = sub_64c080(result, *(result + 0xc) + 0x10)
            case 2
                char* edx_4 = *(result_3 + 0x10)
                
                if (edx_4 == 0)
                    result_4 = "XString::XString"
                    var_64_3 = 0x94
                    var_68_2 = "C:\x\ax2017\Engine\xString.cpp"
                    ecx_11 = &data_871e0c
                label_6f5b25:
                    sub_63b870(result, &data_801800, ecx_11, var_68_2, var_64_3, result_4)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                char* var_48
                sub_63d720(&var_48, edx_4)
                var_14_1.b = 2
                LPARAM result_7 = *(result_3 + 0x10)
                void* const edi_3 = &data_800510
                LPARAM result_11 = result_7
                
                do
                    result_4 = result_7
                    
                    if (_stricmp(*(edi_3 + 4), result_4) == 0)
                        if (edi_3 != 0)
                            *result_2 = *edi_3
                        
                        break
                    
                    result_7 = result_11
                    edi_3 += 8
                while (*(edi_3 + 4) != 0)
                
                void* const eax_8 = &data_800510
                char* const result_8
                
                while (true)
                    if (*eax_8 == *result_2)
                        result_8 = *(eax_8 + 4)
                        break
                    
                    eax_8 += 8
                    
                    if (*(eax_8 + 4) == 0)
                        result_8 = &data_801800
                        break
                
                result_4 = result_8
                sub_63d8d0(&result_1, result_4)
                esp = &var_5c
                char* const result_6 = result_1
                char* const result_9 = &data_801800
                
                if (result_6 != 0)
                    result_9 = result_6
                
                *(result_3 + 0x10) = result_9
                var_14_1.b = 3
                
                if (data_cf65bc != 0)
                    char* eax_9 = var_48
                    
                    if (eax_9 != 0 && *eax_9 != 0)
                        char* eax_10 = sub_63d4e0(&var_48)
                        int32_t temp10_1 = *(eax_10 + 4)
                        *(eax_10 + 4) -= 1
                        
                        if (temp10_1 == 1)
                            sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                
                var_14_1.b = 0
                result = sub_6f7240()
                int32_t var_14_3 = 4
                
                if (data_cf65bc != 0 && result_6 != 0)
                    cond:1_1 = *result_6 == 0
                    goto label_6f5686
            case 3
                result_4 = &result_1
                sub_6f4fb0(&result_1, result_3 + 0x10, result_2 + 0x10, result_4)
                goto label_6f5af1
            case 4
                result_4 = &result_1
                sub_6f4fb0(&result_1, result_3 + 0x10, result_2 + 0x1c, result_4)
                goto label_6f5af1
            case 5
                result_4 = &result_1
                sub_6f4fb0(&result_1, result_3 + 0x10, result_2 + 0x28, result_4)
                goto label_6f5af1

fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
CookieCheckFunction(result)
return result
