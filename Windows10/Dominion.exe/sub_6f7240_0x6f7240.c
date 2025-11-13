// 函数: sub_6f7240
// 地址: 0x6f7240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_772140
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_1b4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HWND hWnd = GetDlgItem(data_147d470, 0xac)
LRESULT result = SendMessageA(hWnd, 0x184, 0, 0)

if (data_147ef94 != 0)
    result = sub_740cf0(data_147df94)
    LRESULT result_1 = result
    LRESULT result_2 = result_1
    
    if (result_1 != 0)
        uint32_t ecx_2 = zx.d(*(result_1 + 0x38))
        int32_t var_134_1 = 8
        char const* const lParam_3 = "General"
        char const* const var_144_1 = "Hidden"
        char* const var_13c_1 = &data_801800
        uint32_t var_138_1 = ecx_2
        char const* const var_140 = nullptr
        SendMessageA(hWnd, 0x180, 0, &lParam_3)
        int32_t var_138_2 = *(result_1 + 8)
        int32_t var_134_2 = 0
        lParam_3 = "General"
        char const* const var_144_2 = "Name"
        char* const var_13c_2 = &data_801800
        var_140 = nullptr
        SendMessageA(hWnd, 0x180, 0, &lParam_3)
        void* const eax_4 = &data_800510
        char* const eax_5
        
        while (true)
            if (*eax_4 == *result_1)
                eax_5 = *(eax_4 + 4)
                break
            
            eax_4 += 8
            
            if (*(eax_4 + 4) == 0)
                eax_5 = &data_801800
                break
        
        char* const var_16c_1 = eax_5
        int32_t var_1bc_1 = 0
        int32_t var_168_1 = 1
        char const* const lParam_1 = "General"
        char const* const var_178_1 = "Type"
        char* const var_170_1 = &data_801800
        char const* const var_174 = "Model"
        SendMessageA(hWnd, 0x180, 0, &lParam_1)
        var_1bc_1.q = _mm_cvtps_pd(*(result_1 + 0x18))
        HWND var_1c4_3
        var_1c4_3.q = _mm_cvtps_pd(*(result_1 + 0x14))
        int64_t var_1cc_1 = _mm_cvtps_pd(*(result_1 + 0x10))
        char* const var_12c
        sub_63df30(&var_12c, "%g %g %g")
        char* eax_6 = var_12c
        char* const esi_1 = &data_801800
        int32_t var_134_3 = 0
        lParam_3 = "General"
        char* const ecx_4 = &data_801800
        char const* const var_144_3 = "Position"
        
        if (eax_6 != 0)
            ecx_4 = eax_6
        
        char* const var_13c_3 = &data_801800
        char* const var_138_3 = ecx_4
        int32_t var_1bc_2 = 0
        var_140 = nullptr
        SendMessageA(hWnd, 0x180, 0, &lParam_3)
        int32_t var_14_1 = 0
        
        if (data_cf65bc != 0)
            char* eax_7 = var_12c
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_8 = sub_63d4e0(&var_12c)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                    var_12c = &data_801800
        
        int32_t var_14_2 = 0xffffffff
        var_1bc_2.q = _mm_cvtps_pd(*(result_1 + 0x24))
        HWND var_1c4_4
        var_1c4_4.q = _mm_cvtps_pd(*(result_1 + 0x20))
        int64_t var_1cc_2 = _mm_cvtps_pd(*(result_1 + 0x1c))
        sub_63df30(&var_12c, "%g %g %g")
        char* const eax_9 = var_12c
        int32_t var_134_4 = 0
        char* const ecx_7 = &data_801800
        lParam_3 = "General"
        
        if (eax_9 != 0)
            ecx_7 = eax_9
        
        char const* const var_144_4 = "Rotation"
        char* const var_13c_4 = &data_801800
        int32_t var_1bc_3 = 0
        char* const var_138_4 = ecx_7
        var_140 = nullptr
        SendMessageA(hWnd, 0x180, 0, &lParam_3)
        int32_t var_14_3 = 1
        
        if (data_cf65bc != 0)
            char* const eax_10 = var_12c
            
            if (eax_10 != 0 && *eax_10 != 0)
                char* eax_11 = sub_63d4e0(&var_12c)
                int32_t temp1_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                    var_12c = &data_801800
        
        int32_t var_14_4 = 0xffffffff
        var_1bc_3.q = _mm_cvtps_pd(*(result_1 + 0x30))
        HWND var_1c4_5
        var_1c4_5.q = _mm_cvtps_pd(*(result_1 + 0x2c))
        int64_t var_1cc_3 = _mm_cvtps_pd(*(result_1 + 0x28))
        sub_63df30(&var_12c, "%g %g %g")
        char* const eax_12 = var_12c
        int32_t var_134_5 = 0
        char* const ecx_10 = &data_801800
        lParam_3 = "General"
        
        if (eax_12 != 0)
            ecx_10 = eax_12
        
        char const* const var_144_5 = "Scale"
        char* const var_13c_5 = &data_801800
        char* const var_138_5 = ecx_10
        var_140 = nullptr
        int32_t ecx_11 = SendMessageA(hWnd, 0x180, 0, &lParam_3)
        int32_t var_14_5 = 2
        
        if (data_cf65bc != 0)
            char* const eax_13 = var_12c
            
            if (eax_13 != 0 && *eax_13 != 0)
                char* eax_14 = sub_63d4e0(&var_12c)
                int32_t temp2_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                ecx_11 = *(eax_14 + 4)
                
                if (temp2_1 == 1)
                    ecx_11 = sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                    var_12c = &data_801800
        
        int32_t var_14_6 = 0xffffffff
        char const* const lParam_2
        
        switch (*result_1 - 1)
            case 0
                void* eax_40 = *(result_1 + 0x40)
                
                if (eax_40 != 0)
                    char* eax_41 = *(eax_40 + 0x20)
                    
                    if (eax_41 != 0)
                        esi_1 = eax_41
                else
                    esi_1 = &data_801800
                
                char* const var_170_5 = esi_1
                char const* const* var_150_3 = &var_174
                char const* const var_168_5 = "Image"
                var_174 = "Choose Image"
                char const* const var_16c_5 = "Image (*.jpg, *.png)"
                int32_t var_14c_3 = 6
                lParam_2 = "Image"
                char const* const var_15c_3 = "Image"
                char* const var_154_3 = &data_801800
                int32_t var_158_3 = 0
                SendMessageA(hWnd, 0x180, 0, &lParam_2)
            case 1
                void* eax_31 = *(result_1 + 0x88)
                
                if (eax_31 != 0)
                    char* eax_32 = *(eax_31 + 0x20)
                    
                    if (eax_32 != 0)
                        esi_1 = eax_32
                else
                    esi_1 = &data_801800
                
                char* const var_170_3 = esi_1
                char const* const* var_138_9 = &var_174
                void* const var_168_3 = &data_8790b4
                var_174 = "Choose UI"
                char const* const var_16c_3 = "UI (*.ui)"
                int32_t var_134_9 = 6
                lParam_3 = &data_87eb88
                void* const var_144_9 = &data_87eb88
                char* const var_13c_9 = &data_801800
                var_140 = nullptr
                SendMessageA(hWnd, 0x180, 0, &lParam_3)
            case 2
                void* eax_17 = *(result_1 + 0x60)
                char* const ecx_14
                
                if (eax_17 != 0)
                    char* eax_18 = *(eax_17 + 0x20)
                    ecx_14 = &data_801800
                    
                    if (eax_18 != 0)
                        ecx_14 = eax_18
                else
                    ecx_14 = &data_801800
                
                char* const var_170_2 = ecx_14
                char const* const* var_138_6 = &var_174
                void* const var_168_2 = &data_88b9a8
                var_174 = "Choose Model"
                char const* const var_16c_2 = "Model (*.fbx)"
                int32_t var_134_6 = 6
                lParam_3 = "Model"
                char const* const var_144_6 = "Model"
                char* const var_13c_6 = &data_801800
                var_140 = nullptr
                SendMessageA(hWnd, 0x180, 0, &lParam_3)
                int32_t var_138_7 = *(result_1 + 0x68)
                int32_t var_134_7 = 0
                lParam_3 = "Model"
                char const* const var_144_7 = "Animation"
                char* const var_13c_7 = &data_801800
                var_140 = nullptr
                LRESULT eax_20 = SendMessageA(hWnd, 0x180, 0, &lParam_3)
                int32_t* ecx_15 = *(result_1 + 0x60)
                char const* const var_1c0_1
                int32_t var_1bc_4
                char const* const var_1b8_9
                char* ecx_16
                
                if (ecx_15[1] != 2)
                    var_1b8_9 = "StructureGetDef"
                    var_1bc_4 = 0x559
                    var_1c0_1 = "C:\x\ax2017\Engine\Structure.cpp"
                    ecx_16 = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"
                label_6f7ef2:
                    sub_63b870(eax_20, &data_801800, ecx_16, var_1c0_1, var_1bc_4, var_1b8_9)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                void* eax_21 = sub_5af880(ecx_15)
                void var_121
                LRESULT edx_7 = &var_121
                int32_t var_128
                __builtin_strncpy(&var_128, "<none>", 7)
                void* var_188_1 = eax_21
                int32_t var_184_1 = 0
                
                if (*(eax_21 + 0x58) s> 0)
                    char* const ecx_17 = nullptr
                    var_12c = nullptr
                    
                    while (true)
                        char* eax_23 = *(ecx_17 + *(eax_21 + 0x50))
                        char* ecx_18 = eax_23
                        void* eax_24
                        
                        do
                            eax_24.b = *ecx_18
                            ecx_18 = &ecx_18[1]
                        while (eax_24.b != 0)
                        void* ecx_19 = ecx_18 - &ecx_18[1]
                        eax_20 = ecx_19 + 1 + edx_7
                        result_1 = result_2
                        void var_28
                        
                        if (eax_20 u>= &var_28)
                            var_1b8_9 = "GetModelLooks"
                            var_1bc_4 = 0x132e
                            var_1c0_1 = "C:\x\ax2017\Engine\Windows\EditorWindow.cpp"
                            ecx_16 = "cur + lenName + 1 < buffer + maxLen"
                            break
                        
                        memcpy(edx_7, eax_23, ecx_19 + 1)
                        var_12c = &var_12c[0x18]
                        edx_7 = eax_20
                        bool cond:8_1 = var_184_1 + 1 s< *(var_188_1 + 0x58)
                        ecx_17 = var_12c
                        var_184_1 += 1
                        eax_21 = var_188_1
                        
                        if (not(cond:8_1))
                            goto label_6f78a8
                    
                    goto label_6f7ef2
                
            label_6f78a8:
                *edx_7 = 0
                int32_t var_138_8 = *(result_1 + 0x80)
                var_140 = &var_128
                int32_t var_134_8 = 1
                lParam_3 = "Model"
                char const* const var_144_8 = "Look"
                char* const var_13c_8 = &data_801800
                SendMessageA(hWnd, 0x180, 0, &lParam_3)
            case 4
                if (*(result_1 + 0xb0) s< 1)
                    int32_t var_1bc_6 = ecx_11
                    int32_t* eax_33 = sub_69dd00(data_1777510, 0xa8)
                    sub_6fb630(eax_33, eax_33, result_1, 0)
                
                void* eax_35 = **(result_1 + 0xa8)
                char* const ecx_23
                
                if (eax_35 != 0)
                    char* eax_36 = *(eax_35 + 0x20)
                    ecx_23 = &data_801800
                    
                    if (eax_36 != 0)
                        ecx_23 = eax_36
                else
                    ecx_23 = &data_801800
                
                char* const var_170_4 = ecx_23
                char const* const* var_150_1 = &var_174
                int32_t var_1bc_7 = 0
                void* const var_168_4 = &data_88b9c0
                var_174 = "Choose Fab"
                char const* const var_16c_4 = "Fab (*.fab)"
                int32_t var_14c_1 = 6
                lParam_2 = "Distribute"
                char const* const var_15c_1 = "Subfab"
                char* const var_154_1 = &data_801800
                int32_t var_158_1 = 0
                SendMessageA(hWnd, 0x180, 0, &lParam_2)
                var_1bc_7.q = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*(result_1 + 0x9c))))
                HWND var_1c4_9
                var_1c4_9.q = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*(result_1 + 0x98))))
                int64_t var_1cc_4 = _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*(result_1 + 0x94))))
                sub_63df30(&var_12c, "%g %g %g")
                char* const eax_37 = var_12c
                int32_t var_14c_2 = 0
                lParam_2 = "Distribute"
                
                if (eax_37 != 0)
                    esi_1 = eax_37
                
                char const* const var_15c_2 = "Dimensions"
                char* const var_154_2 = &data_801800
                char* const var_150_2 = esi_1
                int32_t var_158_2 = 0
                SendMessageA(hWnd, 0x180, 0, &lParam_2)
                int32_t var_14_7 = 3
                
                if (data_cf65bc != 0)
                    char* const eax_38 = var_12c
                    
                    if (eax_38 != 0 && *eax_38 != 0)
                        char* eax_39 = sub_63d4e0(&var_12c)
                        int32_t temp3_1 = *(eax_39 + 4)
                        *(eax_39 + 4) -= 1
                        
                        if (temp3_1 == 1)
                            sub_64c080(eax_39, *(eax_39 + 0xc) + 0x10)
            case 5
                void* const eax_44 = &data_800428
                char* const eax_45
                
                while (true)
                    if (*eax_44 == *(result_1 + 0xb4))
                        eax_45 = *(eax_44 + 4)
                        break
                    
                    eax_44 += 8
                    
                    if (*(eax_44 + 4) == 0)
                        eax_45 = &data_801800
                        break
                
                char* const var_150_5 = eax_45
                int32_t var_1bc_8 = 0
                int32_t var_14c_5 = 1
                lParam_2 = "Light"
                char const* const var_15c_5 = "Light Type"
                char* const var_154_5 = &data_801800
                char const* const var_158_5 = "Directional"
                SendMessageA(hWnd, 0x180, 0, &lParam_2)
                var_1bc_8.q = _mm_cvtps_pd(*(result_1 + 0xc4))
                sub_63df30(&var_12c, "%g")
                char* const eax_46 = var_12c
                int32_t var_14c_6 = 0
                char* const ecx_27 = &data_801800
                lParam_2 = "Light"
                
                if (eax_46 != 0)
                    ecx_27 = eax_46
                
                char const* const var_15c_6 = "Intensity"
                char* const var_154_6 = &data_801800
                char* const var_150_6 = ecx_27
                int32_t var_158_6 = 0
                SendMessageA(hWnd, 0x180, 0, &lParam_2)
                int32_t var_14_8 = 4
                
                if (data_cf65bc != 0)
                    char* const eax_47 = var_12c
                    
                    if (eax_47 != 0 && *eax_47 != 0)
                        char* eax_48 = sub_63d4e0(&var_12c)
                        int32_t temp4_1 = *(eax_48 + 4)
                        *(eax_48 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_64c080(eax_48, *(eax_48 + 0xc) + 0x10)
                
                HWND var_1c4_13
                var_1c4_13.o = *(result_1 + 0xb8)
                int32_t eax_49 = sub_64b360(var_1c4_13)
                int32_t var_14c_7 = 4
                lParam_2 = "Light"
                char const* const var_15c_7 = "Color"
                char* const var_154_7 = &data_801800
                uint32_t var_150_7 =
                    (zx.d((eax_49 u>> 0x10).b) << 8 | zx.d((eax_49 u>> 8).b)) << 8 | zx.d(eax_49.b)
                int32_t var_158_7 = 0
                SendMessageA(hWnd, 0x180, 0, &lParam_2)
                
                if (*(result_1 + 0xb4) == 3)
                    void* eax_53 = *(result_1 + 0xc8)
                    
                    if (eax_53 != 0)
                        char* eax_54 = *(eax_53 + 0x20)
                        
                        if (eax_54 != 0)
                            esi_1 = eax_54
                    else
                        esi_1 = &data_801800
                    
                    char* const var_13c_10 = esi_1
                    int32_t* var_194_1 = &var_140
                    void* const var_134_10 = &data_87ebfc
                    var_140 = "Choose IBL"
                    char const* const var_138_10 = "IBL (*.hdr)"
                    int32_t var_190_1 = 6
                    char* lParam = "Light"
                    void* const var_1a0_1 = &data_87ebfc
                    char* const var_198_1 = &data_801800
                    int32_t var_19c_1 = 0
                    SendMessageA(hWnd, 0x180, 0, &lParam)
            case 7
                void* eax_42 = *(result_1 + 0xd0)
                
                if (eax_42 != 0)
                    char* eax_43 = *(eax_42 + 0x20)
                    
                    if (eax_43 != 0)
                        esi_1 = eax_43
                else
                    esi_1 = &data_801800
                
                char* const var_170_6 = esi_1
                char const* const* var_150_4 = &var_174
                char const* const var_168_6 = "Particle"
                var_174 = "Choose Particle"
                char const* const var_16c_6 = "Particle (*.particle)"
                int32_t var_14c_4 = 6
                lParam_2 = "Particle"
                char const* const var_15c_4 = "Particle"
                char* const var_154_4 = &data_801800
                int32_t var_158_4 = 0
                SendMessageA(hWnd, 0x180, 0, &lParam_2)
        
        result = SendMessageA(hWnd, 0x401, 0, 0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
