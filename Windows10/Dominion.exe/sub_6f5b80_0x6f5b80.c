// 函数: sub_6f5b80
// 地址: 0x6f5b80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7720a5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t esi
int32_t var_5c = esi
int32_t edi
int32_t var_60 = edi
int32_t __saved_ebp
int32_t var_64 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
LPARAM result_3 = 0
LRESULT (__stdcall* const var_48)(HWND hWnd, uint32_t Msg, WPARAM wParam, LPARAM lParam) =
    SendMessageA
LRESULT result = SendMessageA(arg1, 0x199, *(arg2 + 0xc), result_3)
int32_t* esp = &var_64
LRESULT result_1 = result

if (*(arg2 + 0xc) != 0xffffffff)
    int32_t* ecx = data_147ded0
    
    if (ecx[1] != 0x1e)
        result_3 = "UIDefGet"
        sub_63b870(result, &data_801800, "ptr->assetType == ASSET_TYPE_UI", 
            "C:\x\ax2017\Engine\UIDef.cpp", 0x127, result_3)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t* eax_4 = sub_5af880(ecx)
    result = sub_744fb0()
    
    if (result != 0xffffffff)
        void* edi_2 = *eax_4
        int32_t esi_2 = result * 0x178
        char* const result_2 = &data_801800
        int32_t var_14_1 = 0
        va_list ecx_2 = *(arg2 + 0xc)
        void* const eax_5 = &ecx_2[0xffffffff]
        char const* const var_70_2
        int32_t var_6c_4
        char* result_15
        void* const var_44
        char* ecx_15
        
        if (eax_5 u> 3)
            eax_5 = *(esi_2 + edi_2 + 4) - 1
            LPARAM result_17
            void* ecx_22
            void* result_14
            
            switch (eax_5)
                case nullptr, 3
                    if (ecx_2 != 5)
                        if (ecx_2 == 6)
                        label_6f63f1:
                            eax_5.b = *(result_1 + 0x10) != 0
                            *(esi_2 + edi_2 + 0x90) = eax_5.b
                            goto label_6f6426
                        
                        if (ecx_2 != 7)
                            result_3 = "OnUIPropGridChange"
                            var_6c_4 = 0x10f1
                            goto label_6f6463
                        
                        LPARAM result_13 = *(result_1 + 0x10)
                        eax_5 = &data_7ffd18
                        result_17 = result_13
                        var_44 = &data_7ffd18
                        
                        while (true)
                            result_3 = result_13
                            bool cond:3_1 = _stricmp(*(eax_5 + 4), result_3) == 0
                            eax_5 = var_44
                            
                            if (cond:3_1)
                                break
                            
                            result_13 = result_17
                            eax_5 += 8
                            var_44 = eax_5
                            
                            if (*(eax_5 + 4) == 0)
                                result_3 = "DefSetImageAlign"
                                var_6c_4 = 0xf79
                                ecx_15 = "newVal"
                                goto label_6f6468
                        
                        if (eax_5 != 0)
                            *(esi_2 + edi_2 + 0x94) = *eax_5
                            goto label_6f6426
                        
                        result_3 = "DefSetImageAlign"
                        var_6c_4 = 0xf79
                        ecx_15 = "newVal"
                        goto label_6f6468
                    
                label_6f627d:
                    ecx_22 = edi_2 + 0x88
                case 1
                    if (&ecx_2[0xfffffffb] u> 6)
                        result_3 = "OnUIPropGridChange"
                        var_6c_4 = 0x110e
                        goto label_6f6463
                    
                    switch (ecx_2)
                        case 5
                            ecx_22 = edi_2 + 0xc8
                        case 6
                            result_3 = &result_2
                            sub_6f5230(&result_2, result_1 + 0x10, edi_2 + 0xac + esi_2, result_3)
                            goto label_6f6426
                        case 7
                            result_3 = &result_2
                            sub_6f5230(&result_2, result_1 + 0x10, edi_2 + 0xb0 + esi_2, result_3)
                            goto label_6f6426
                        case 8
                            result_3 = &result_2
                            sub_6f5300(&result_2, result_1 + 0x10, edi_2 + 0xb4 + esi_2, result_3)
                            goto label_6f6426
                        case 9
                            result_3 = &result_2
                            sub_6f5300(&result_2, result_1 + 0x10, edi_2 + 0xb8 + esi_2, result_3)
                            goto label_6f6426
                        case 0xa
                            eax_5.b = *(result_1 + 0x10) == 0
                            *(esi_2 + edi_2 + 0xd9) = eax_5.b
                            goto label_6f6426
                        case 0xb
                            eax_5.b = *(result_1 + 0x10) != 0
                            *(esi_2 + edi_2 + 0xda) = eax_5.b
                            goto label_6f6426
                case 2
                    result_14 = &ecx_2[0xfffffffb]
                    
                    if (result_14 u> 7)
                        result_3 = "OnUIPropGridChange"
                        var_6c_4 = 0x112e
                        goto label_6f6463
                    
                    switch (result_14)
                        case nullptr
                            void* eax_38 = sub_69dd00(data_17774e0, 0xe0)
                            result_3 = &result_2
                            sub_6f4e00(eax_38, edi_2 + 0xe0 + esi_2, eax_38, result_1 + 0x10, 
                                result_3)
                            goto label_6f6426
                        case 1
                        label_6f61fe:
                            ecx_22 = edi_2 + 0xe8
                        case 2
                        label_6f62ba:
                            LPARAM result_20 = *(result_1 + 0x10)
                            *(esi_2 + edi_2 + 0xf0) = result_20.b
                            result_17 = result_20
                            uint8_t eax_41 = (result_20 u>> 0x10).b
                            uint8_t edx_28 = (result_20 u>> 8).b
                            *(esi_2 + edi_2 + 0xf1) = edx_28
                            *(esi_2 + edi_2 + 0xf2) = eax_41
                            *(result_1 + 0x10) =
                                (zx.d(eax_41) << 8 | zx.d(edx_28)) << 8 | zx.d(result_17.b)
                            goto label_6f6426
                        case 3
                        label_6f62fd:
                            LPARAM result_21 = *(result_1 + 0x10)
                            *(esi_2 + edi_2 + 0xf4) = result_21.b
                            result_17 = result_21
                            uint8_t eax_45 = (result_21 u>> 0x10).b
                            uint8_t edx_31 = (result_21 u>> 8).b
                            *(esi_2 + edi_2 + 0xf5) = edx_31
                            *(esi_2 + edi_2 + 0xf6) = eax_45
                            *(result_1 + 0x10) =
                                (zx.d(eax_45) << 8 | zx.d(edx_31)) << 8 | zx.d(result_17.b)
                            goto label_6f6426
                        case 4
                        label_6f6212:
                            result_3 = &result_2
                            sub_6f5300(&result_2, result_1 + 0x10, edi_2 + 0xf8 + esi_2, result_3)
                            goto label_6f6426
                        case 5
                        label_6f621f:
                            char* edx_21 = *(result_1 + 0x10)
                            result_3 = result_14
                            sub_6f53e0(edi_2 + 0xfc + esi_2, edx_21)
                            goto label_6f6426
                        case 6
                        label_6f6234:
                            char* edx_22 = *(result_1 + 0x10)
                            result_3 = result_14
                            sub_6f54b0(edi_2 + 0xfc + esi_2, edx_22)
                            goto label_6f6426
                        case 7
                            eax_5.b = *(result_1 + 0x10) != 0
                            *(esi_2 + edi_2 + 0x100) = eax_5.b
                            goto label_6f6426
                case 4
                    result_14 = &ecx_2[0xfffffffb]
                    
                    if (result_14 u> 0x11)
                        result_3 = "OnUIPropGridChange"
                        var_6c_4 = 0x116c
                        goto label_6f6463
                    
                    switch (result_14)
                        case nullptr
                            goto label_6f627d
                        case 1
                            ecx_22 = edi_2 + 0x128
                        case 2
                            ecx_22 = edi_2 + 0x130
                        case 3
                            ecx_22 = edi_2 + 0x138
                        case 4
                            goto label_6f63f1
                        case 5
                            void* eax_40 = sub_69dd00(data_17774e0, 0x120)
                            result_3 = &result_2
                            sub_6f4e00(eax_40, edi_2 + 0x120 + esi_2, eax_40, result_1 + 0x10, 
                                result_3)
                            goto label_6f6426
                        case 6
                            goto label_6f61fe
                        case 7
                            goto label_6f62ba
                        case 8
                            goto label_6f62fd
                        case 9
                            LPARAM result_22 = *(result_1 + 0x10)
                            *(esi_2 + edi_2 + 0x140) = result_22.b
                            result_17 = result_22
                            uint8_t eax_49 = (result_22 u>> 0x10).b
                            uint8_t edx_34 = (result_22 u>> 8).b
                            *(esi_2 + edi_2 + 0x142) = eax_49
                            *(esi_2 + edi_2 + 0x141) = edx_34
                            *(result_1 + 0x10) =
                                (zx.d(eax_49) << 8 | zx.d(edx_34)) << 8 | zx.d(result_17.b)
                            goto label_6f6426
                        case 0xa
                            LPARAM result_23 = *(result_1 + 0x10)
                            *(esi_2 + edi_2 + 0x144) = result_23.b
                            result_17 = result_23
                            uint8_t eax_53 = (result_23 u>> 0x10).b
                            uint8_t edx_37 = (result_23 u>> 8).b
                            *(esi_2 + edi_2 + 0x146) = eax_53
                            *(esi_2 + edi_2 + 0x145) = edx_37
                            *(result_1 + 0x10) =
                                (zx.d(eax_53) << 8 | zx.d(edx_37)) << 8 | zx.d(result_17.b)
                            goto label_6f6426
                        case 0xb
                            goto label_6f6212
                        case 0xc
                            result_3 = &result_2
                            sub_6f4ec0(&result_2, result_1 + 0x10, edi_2 + 0x148 + esi_2, result_3)
                            goto label_6f6426
                        case 0xd
                            goto label_6f621f
                        case 0xe
                            goto label_6f6234
                        case 0xf
                            ecx_22 = edi_2 + 0x150
                        case 0x10
                            ecx_22 = edi_2 + 0x158
                        case 0x11
                            ecx_22 = edi_2 + 0x160
                case 5
                    if (&ecx_2[0xfffffffb] u> 6)
                        result_3 = "OnUIPropGridChange"
                        var_6c_4 = 0x10e0
                        goto label_6f6463
                    
                    switch (ecx_2)
                        case 5
                            result_3 = &result_2
                            sub_6f5230(&result_2, result_1 + 0x10, edi_2 + 0x68 + esi_2, result_3)
                            goto label_6f6426
                        case 6
                            result_3 = &result_2
                            sub_6f5230(&result_2, result_1 + 0x10, edi_2 + 0x6c + esi_2, result_3)
                            goto label_6f6426
                        case 7
                            result_3 = &result_2
                            sub_6f5230(&result_2, result_1 + 0x10, edi_2 + 0x70 + esi_2, result_3)
                            goto label_6f6426
                        case 8
                            result_3 = &result_2
                            sub_6f5300(&result_2, result_1 + 0x10, edi_2 + 0x74 + esi_2, result_3)
                            goto label_6f6426
                        case 9
                            result_3 = &result_2
                            sub_6f5300(&result_2, result_1 + 0x10, edi_2 + 0x78 + esi_2, result_3)
                            goto label_6f6426
                        case 0xa
                            result_3 = &result_2
                            sub_6f4ec0(&result_2, result_1 + 0x10, edi_2 + 0x7c + esi_2, result_3)
                            goto label_6f6426
                        case 0xb
                            char* edx_13 = *(result_1 + 0x10)
                            
                            if (edx_13 == 0)
                                result_3 = "XString::XString"
                                var_6c_4 = 0x94
                                var_70_2 = "C:\x\ax2017\Engine\xString.cpp"
                                ecx_15 = &data_871e0c
                                goto label_6f6472
                            
                            sub_63d720(&result_17, edx_13)
                            void* const eax_26 = &data_7ffbc8
                            var_14_1.b = 7
                            var_44 = &data_7ffbc8
                            char* result_11 = *(result_1 + 0x10)
                            result_15 = result_11
                            
                            do
                                result_3 = result_11
                                bool cond:2_1 = _stricmp(*(eax_26 + 4), result_3) == 0
                                int32_t* eax_28 = var_44
                                
                                if (cond:2_1)
                                    if (eax_28 != 0)
                                        *(esi_2 + edi_2 + 0x84) = *eax_28
                                    
                                    break
                                
                                result_11 = result_15
                                eax_26 = &eax_28[2]
                                var_44 = eax_26
                            while (*(eax_26 + 4) != 0)
                            
                            void* const eax_30 = &data_7ffbc8
                            char* const result_8
                            
                            while (true)
                                if (*eax_30 == *(esi_2 + edi_2 + 0x84))
                                    result_8 = *(eax_30 + 4)
                                    break
                                
                                eax_30 += 8
                                
                                if (*(eax_30 + 4) == 0)
                                    result_8 = &data_801800
                                    break
                            
                            result_3 = result_8
                            sub_63d8d0(&result_2, result_3)
                            char* const result_5 = result_2
                            char* const result_12 = &data_801800
                            
                            if (result_5 != 0)
                                result_12 = result_5
                            
                            *(result_1 + 0x10) = result_12
                            var_14_1.b = 8
                            
                            if (data_cf65bc != 0)
                                LPARAM result_19 = result_17
                                
                                if (result_19 != 0 && *result_19 != 0)
                                    char* eax_31 = sub_63d4e0(&result_17)
                                    int32_t temp6_1 = *(eax_31 + 4)
                                    *(eax_31 + 4) -= 1
                                    
                                    if (temp6_1 == 1)
                                        sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
                            
                            var_14_1.b = 0
                            goto label_6f6426
                case 8
                    if (ecx_2 != 5)
                        result_3 = "OnUIPropGridChange"
                        var_6c_4 = 0x10c4
                        goto label_6f6463
                    
                    ecx_22 = edi_2 + 0x60
                default
                    result_3 = "OnUIPropGridChange"
                    var_6c_4 = 0x1170
                label_6f6463:
                    ecx_15 = "Halt"
                label_6f6468:
                    var_70_2 = "C:\x\ax2017\Engine\Windows\EditorWindow.cpp"
                    goto label_6f6472
            
            void* edx_39 = *(result_1 + 0x10)
            result_3 = &result_2
            sub_6f5170(&result_2, edx_39 + 4, ecx_22 + esi_2, result_3)
            goto label_6f6426
        
        bool cond:4_1
        
        switch (eax_5)
            case nullptr
                eax_5.b = *(result_1 + 0x10) != 0
                *(esi_2 + edi_2 + 0x44) = eax_5.b
            label_6f6426:
                result_3 = result_1
                var_48(arg1, 0x19a, *(arg2 + 0xc))
                esp = &result_3
                char* ecx_88
                ecx_88.b = 1
                result = sub_744ce0(ecx_88)
                int32_t var_14_4 = 9
                goto label_6f5ca0
            case 1
                void* eax_6 = sub_69dd00(data_17774e0, 8)
                result_3 = &result_2
                sub_6f4e00(eax_6, edi_2 + 8 + esi_2, eax_6, result_1 + 0x10, result_3)
                result_3 = result_1
                var_48(arg1, 0x19a, *(arg2 + 0xc))
                esp = &result_3
                char* ecx_5
                ecx_5.b = 1
                sub_744ce0(ecx_5)
                sub_6f6e30(data_1512450)
                result = sub_74ac70()
                int32_t var_14_2 = 1
            label_6f5ca0:
                
                if (data_cf65bc != 0)
                    result = result_2
                    
                    if (result != 0)
                        cond:4_1 = *result == 0
                    label_6f5cb3:
                        
                        if (not(cond:4_1))
                            result = sub_63d4e0(&result_2)
                            int32_t temp4_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp4_1 == 1)
                                result = sub_64c080(result, *(result + 0xc) + 0x10)
            case 2
                char* edx_10 = *(result_1 + 0x10)
                
                if (edx_10 == 0)
                    result_3 = "XString::XString"
                    var_6c_4 = 0x94
                    var_70_2 = "C:\x\ax2017\Engine\xString.cpp"
                    ecx_15 = &data_871e0c
                label_6f6472:
                    sub_63b870(eax_5, &data_801800, ecx_15, var_70_2, var_6c_4, result_3)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                sub_63d720(&result_15, edx_10)
                void* const eax_13 = &data_7ffc20
                var_14_1.b = 4
                var_44 = &data_7ffc20
                LPARAM result_10 = *(result_1 + 0x10)
                LPARAM result_16 = result_10
                
                do
                    result_3 = result_10
                    bool cond:1_1 = _stricmp(*(eax_13 + 4), result_3) == 0
                    void* const eax_15 = var_44
                    
                    if (cond:1_1)
                        if (eax_15 != 0)
                            *(esi_2 + edi_2 + 4) = *eax_15
                        
                        break
                    
                    result_10 = result_16
                    eax_13 = eax_15 + 8
                    var_44 = eax_13
                while (*(eax_13 + 4) != 0)
                
                result_3 = sub_6f50e0(*(esi_2 + edi_2 + 4))
                sub_63d8d0(&result_2, result_3)
                esp = &var_64
                char* const result_6 = result_2
                char* const result_7 = &data_801800
                
                if (result_6 != 0)
                    result_7 = result_6
                
                *(result_1 + 0x10) = result_7
                var_14_1.b = 5
                
                if (data_cf65bc != 0)
                    char* result_18 = result_15
                    
                    if (result_18 != 0 && *result_18 != 0)
                        char* eax_18 = sub_63d4e0(&result_15)
                        int32_t temp5_1 = *(eax_18 + 4)
                        *(eax_18 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                
                LRESULT ecx_20
                ecx_20.b = 1
                var_14_1.b = 0
                sub_744ce0(ecx_20)
                result = sub_6f7f40()
                int32_t var_14_3 = 6
                
                if (data_cf65bc != 0 && result_6 != 0)
                    cond:4_1 = *result_6 == 0
                    goto label_6f5cb3
            case 3
                void var_28
                result_3 = &var_28
                void var_2c
                void* var_6c_3 = &var_2c
                int128_t var_34
                void* var_70_1 = &var_34:4
                int128_t* var_74_2 = &var_34
                
                if (sub_64b6d0(&var_34, result_1 + 0x10, ecx_2, *(result_1 + 0x10), " %f %f %f %f")
                        != 0)
                    *(esi_2 + edi_2 + 0x10) = var_34
                
                var_6c_3.q = _mm_cvtps_pd(*(esi_2 + edi_2 + 0x1c))
                var_74_2.q = _mm_cvtps_pd(*(esi_2 + edi_2 + 0x18))
                char* var_7c_1
                var_7c_1.q = _mm_cvtps_pd(*(esi_2 + edi_2 + 0x14))
                int64_t var_84_1 = _mm_cvtps_pd(*(esi_2 + edi_2 + 0x10))
                sub_63df30(&var_44, "%g %g %g %g")
                var_14_1.b = 2
                result_3 = &var_44
                sub_63d850(&result_2, result_3)
                var_14_1.b = 3
                
                if (data_cf65bc != 0)
                    void* const eax_10 = var_44
                    
                    if (eax_10 != 0 && *eax_10 != 0)
                        char* eax_11 = sub_63d4e0(&var_44)
                        int32_t temp3_1 = *(eax_11 + 4)
                        *(eax_11 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                
                var_14_1.b = 0
                char* const result_9 = &data_801800
                char* const result_4 = result_2
                
                if (result_4 != 0)
                    result_9 = result_4
                
                *(result_1 + 0x10) = result_9
                goto label_6f6426

fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
CookieCheckFunction(result)
return result
