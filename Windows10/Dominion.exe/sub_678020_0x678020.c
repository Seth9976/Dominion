// 函数: sub_678020
// 地址: 0x678020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76da26
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
char** ecx = __chkstk(0x1078)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char var_1075
char* result
int32_t ecx_1
int32_t edx_1
result, ecx_1, edx_1 = sub_675640(ecx, &var_1075)

if (result.b == 0)
    float var_106c
    void var_1060
    int128_t var_1050
    int128_t var_1038
    
    if (*ecx == 9)
        float xmm0_1 = data_c27c48
        int32_t ecx_2 = data_cadde4
        float xmm1_2 = _mm_cvtepi32_ps(zx.o(ecx[3]))
        int32_t* var_30_1 = &var_1038
        var_106c = xmm0_1
        data_c27c48 = xmm0_1 * (xmm1_2 * 0.00200000009f + 1f)
        int32_t* eax_4
        int32_t edx_2
        eax_4, edx_2 = sub_666a40(&var_1038, edx_1, ecx_2, var_30_1)
        int32_t ecx_3 = data_cadde4
        float xmm1_5[0x4] = *eax_4
        int32_t* var_30_2 = &var_1060
        float xmm2_2 = xmm1_5[0] + _mm_shuffle_ps(xmm1_5, xmm1_5, 0xaa)
        var_1050 =
            (_mm_shuffle_ps(xmm1_5, xmm1_5, 0x55) + _mm_shuffle_ps(xmm1_5, xmm1_5, 0xff)) * 0.5f
        int32_t* eax_6
        eax_6, ecx_1 = sub_666a40(&var_1060, edx_2, ecx_3, var_30_2)
        float xmm2_4 = 1f / var_106c
        float xmm0_9[0x4] = *eax_6
        float xmm1_8 = _mm_shuffle_ps(xmm0_9, xmm0_9, 0xff)
        float xmm3_3 = _mm_shuffle_ps(xmm0_9, xmm0_9, 0xaa) f+ xmm0_9
        float xmm2_5 = xmm2_4 * (xmm1_8 + _mm_shuffle_ps(xmm0_9, xmm0_9, 0x55)) * 0.5f
        float xmm1_15 = (var_1050.d f+ data_c27c50 - xmm2_5) f* data_c27c48
        data_c27c4c = (xmm2_2 * 0.5f + data_c27c4c - xmm2_4 * xmm3_3 * 0.5f) f* data_c27c48
        data_c27c50 = xmm1_15
    
    result = *ecx
    int32_t* j
    int32_t var_1030
    int32_t var_102c
    
    if (result == 1)
        ecx_1.b = data_c28c60
        int32_t var_1070
        
        if (ecx_1.b != 0 || data_c28c62 != ecx_1.b || data_c28c61 != ecx_1.b)
            result = ecx[1]
            
            if (result != 0xd)
                if (ecx_1.b == 0)
                    goto label_678377
                
                if (result != 0x27)
                    int32_t xmm1_16
                    
                    if (result != 0x25)
                        if (result != 0x26)
                            if (result != 0x28)
                                goto label_678377
                            
                            if (data_c28c58 s> 0)
                                bool cond:8_1 = (ecx[2].b & 1) == 0
                                var_1070 = 0
                                var_106c = 1f
                                
                                if (not(cond:8_1))
                                    var_1070 = 0
                                    var_106c = 1f * 10f
                                
                                sub_667d10()
                                int32_t ecx_6
                                ecx_6.b = 1
                                sub_665770(ecx_6)
                        else if (data_c28c58 s> 0)
                            bool cond:6_1 = (ecx[2].b & 1) == 0
                            xmm1_16 = 0xbf800000
                            var_1070 = 0
                            var_106c = -1f
                            
                            if (cond:6_1)
                                goto label_67830a
                            
                            var_1070 = 0
                            goto label_6782fc
                    else if (data_c28c58 s> 0)
                        bool cond:3_1 = (ecx[2].b & 1) == 0
                        xmm1_16 = (zx.o(0)).d
                        var_1070 = 0xbf800000
                        var_106c = 0f
                        
                        if (cond:3_1)
                            goto label_67830a
                        
                        var_1070 = 0xc1200000
                    label_6782fc:
                        var_106c = xmm1_16 f* 10f
                    label_67830a:
                        sub_667d10()
                        int32_t ecx_5
                        ecx_5.b = 1
                        sub_665770(ecx_5)
                else if (data_c28c58 s> 0)
                    bool cond:2_1 = (ecx[2].b & 1) == 0
                    var_1070 = 0x3f800000
                    var_106c = 0f
                    
                    if (cond:2_1)
                        goto label_67830a
                    
                    var_1070 = 0x41200000
                    var_106c = 0f * 10f
                    sub_667d10()
                    int32_t ecx_4
                    ecx_4.b = 1
                    sub_665770(ecx_4)
            else
                data_c28c60.w = 0
                data_c28c62 = 0
        else
        label_678377:
            result = ecx[1]
            int32_t i_3
            void* esi_2
            
            if (result != 0x28)
                if (result != 0x26)
                    if (result != 0x21)
                    label_6784a6:
                        
                        if (ecx[1] != 0x22)
                        label_6784e6:
                            int32_t eax_17 = ecx[1]
                            
                            if (eax_17 == 0x21)
                                sub_675a90(eax_17 - 0x20)
                            else if (eax_17 == 0x22)
                                sub_675a90(0xffffffff)
                            else if (eax_17 == 0x24)
                                int32_t i = 0
                                
                                if ((ecx[2].b & 1) == 0)
                                    if (data_c28c58 s> 0)
                                        do
                                            void* eax_21 = sub_665600((&data_c27c58)[i])
                                            int32_t* j_2 = sub_64cc90(eax_21)
                                            char* ecx_24 = *(eax_21 + 0x1720)
                                            j = j_2
                                            
                                            if (ecx_24 != 0 && ecx_24 != &data_801800)
                                                if (data_cf65bc != 0 && *ecx_24 != 0)
                                                    char* eax_22 = sub_63d4e0(eax_21 + 0x1720)
                                                    int32_t temp4_1 = *(eax_22 + 4)
                                                    *(eax_22 + 4) -= 1
                                                    
                                                    if (temp4_1 == 1)
                                                        sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
                                                    
                                                    j_2 = j
                                                
                                                *(eax_21 + 0x1720) = &data_801800
                                            
                                            sub_6dcec0(j_2, j_2, &data_8cae70, 0x6f)
                                            i += 1
                                        while (i s< data_c28c58)
                                    
                                    ecx_1.b = 0
                                    sub_665770(ecx_1)
                                else if (data_c27c18 s<= 0)
                                    ecx_1.b = 0
                                    sub_665770(ecx_1)
                                else
                                    void* eax_18 = &data_c23c18
                                    void* var_1080_1 = &data_c23c18
                                    
                                    do
                                        void* esi_4 = *eax_18
                                        int32_t* j_1 = sub_64cc90(esi_4)
                                        char* ecx_18 = *(esi_4 + 0x1720)
                                        j = j_1
                                        
                                        if (ecx_18 != 0 && ecx_18 != &data_801800)
                                            if (data_cf65bc != 0 && *ecx_18 != 0)
                                                char* eax_19 = sub_63d4e0(esi_4 + 0x1720)
                                                int32_t temp5_1 = *(eax_19 + 4)
                                                *(eax_19 + 4) -= 1
                                                
                                                if (temp5_1 == 1)
                                                    sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                                                
                                                j_1 = j
                                            
                                            *(esi_4 + 0x1720) = &data_801800
                                        
                                        sub_6dcec0(j_1, j_1, &data_8cae70, 0x6f)
                                        i += 1
                                        eax_18 = var_1080_1 + 0x10
                                        var_1080_1 = eax_18
                                    while (i s< data_c27c18)
                                    
                                    int32_t ecx_21
                                    ecx_21.b = 0
                                    sub_665770(ecx_21)
                            else
                                char const* const var_38_1
                                int32_t var_34_1
                                char const* const var_30_7
                                char* ecx_28
                                
                                if (eax_17 == 0x27)
                                    void* eax_23 = sub_667360(data_c28c5c)
                                    int32_t eax_24
                                    
                                    if (*(eax_23 + 0x15f8) == 6)
                                        eax_24 = sub_66f4b0()
                                        sub_66f200(eax_24, 0x8b, eax_23, 0, eax_24)
                                    else
                                        result = *(eax_23 + 0x189c)
                                        
                                        if (result s< 0)
                                            var_30_7 = "UI2::countChildren"
                                            var_34_1 = 0xba8
                                            var_38_1 = "C:\x\ax2017\Engine\UI2.cpp"
                                            ecx_28 = "numChildren >= 0"
                                        label_679f0e:
                                            sub_63b870(result, &data_801800, ecx_28, var_38_1, 
                                                var_34_1, var_30_7)
                                            
                                            if (sub_63bc30() != 0)
                                                breakpoint
                                            
                                            sub_63bb00()
                                            noreturn
                                        
                                        if (result s> 0)
                                            eax_24 = sub_66f4b0()
                                            sub_66f200(eax_24, 0x8b, eax_23, 0, eax_24)
                                else if (eax_17 == 0x25)
                                    void* eax_25 = sub_667360(data_c28c5c)
                                    
                                    if (sub_66f450(eax_25).b == 0)
                                        void* ecx_33 = *(eax_25 + 0x1718)
                                        
                                        if (ecx_33 != 0 && *(ecx_33 + 0x1718) != 0
                                                && sub_66f450(ecx_33).b != 0)
                                            int32_t eax_27 = sub_66f4b0()
                                            sub_66f200(eax_27, 0x8b, *(eax_25 + 0x1718), 1, eax_27)
                                            data_c28c58 = 0
                                            *(*(eax_25 + 0x1718) + 0x18c8)
                                            sub_66c650()
                                            data_c28c5c = sub_66b9a0(*(eax_25 + 0x1718))
                                    else
                                        int32_t eax_26 = sub_66f4b0()
                                        sub_66f200(eax_26, 0x8b, eax_25, 1, eax_26)
                                else if (eax_17 != 0x4d)
                                label_6787c3:
                                    
                                    if (ecx[1] != 0x53)
                                    label_678859:
                                        int32_t eax_39 = ecx[1]
                                        
                                        if (eax_39 == 0x57)
                                            result = (data_cadde4 + 1) & 0x80000003
                                            
                                            if (result s< 0)
                                                result = ((result - 1) | 0xfffffffc) + 1
                                            
                                            data_cadde4 = result
                                        else if (eax_39 != 0x54)
                                        label_6788ca:
                                            
                                            if (ecx[1] != 8)
                                            label_6788f6:
                                                
                                                if (ecx[1] != 9)
                                                label_6789b0:
                                                    
                                                    if (ecx[1] != 0x4f)
                                                    label_678ac3:
                                                        char* result_3
                                                        
                                                        if (ecx[1] != 0xdd)
                                                        label_678b7c:
                                                            
                                                            if (ecx[1] != 0xdb)
                                                            label_678d14:
                                                                
                                                                if (ecx[1] != 0xdd)
                                                                label_678e14:
                                                                    
                                                                    if (ecx[1] != 0xdb)
                                                                    label_678f42:
                                                                        
                                                                        if (ecx[1] != 0x43)
                                                                        label_678f90:
                                                                            
                                                                            if (ecx[1] != 0x47)
                                                                            label_679167:
                                                                                
                                                                                if (ecx[1] != 0x52)
                                                                                label_67919d:
                                                                                    
                                                                                    if (ecx[1] != 0x4a)
                                                                                    label_67921a:
                                                                                        int32_t eax_112 = ecx[1]
                                                                                        
                                                                                        if (eax_112 == 0x42)
                                                                                            data_ca9a6c
                                                                                            uint32_t count = 0x1018
                                                                                            int32_t* var_34_7 = &data_c27c54
                                                                                            data_c28c58 = 0
                                                                                            memcpy(
                                                                                                &(&data_c27c50)[data_ca9a6c * 0x407], 
                                                                                                var_34_7, count)
                                                                                            data_c28c61.w = 1
                                                                                            data_c28c60 = 0
                                                                                        else if (eax_112 != 0xbb)
                                                                                        label_6792ad:
                                                                                            
                                                                                            if (ecx[1] != 0xbd)
                                                                                            label_6792f9:
                                                                                                int32_t eax_122
                                                                                                
                                                                                                if (ecx[1] != 0x5a)
                                                                                                label_679346:
                                                                                                    
                                                                                                    if (ecx[1] != 0x59)
                                                                                                    label_6793c1:
                                                                                                        
                                                                                                        if (ecx[1] != 0x4c)
                                                                                                        label_679517:
                                                                                                            result = ecx[1]
                                                                                                            
                                                                                                            if (result == 0x2e)
                                                                                                                int32_t var_30_49 = data_c28c58
                                                                                                                int32_t ecx_98 = data_c27c24
                                                                                                                int32_t* var_34_10 = &data_c27c58
                                                                                                                int32_t** var_38_7 = &j
                                                                                                                j = nullptr
                                                                                                                int32_t var_1028[0x3f6]
                                                                                                                sub_6674e0(&j, &var_1028, ecx_98, 
                                                                                                                    var_38_7, var_34_10, var_30_49)
                                                                                                                int32_t* j_6 = j
                                                                                                                int32_t eax_141 = j_6 << 2 s>> 2
                                                                                                                void* eax_142
                                                                                                                int32_t ecx_101
                                                                                                                eax_142, ecx_101 = sub_4d4e30(eax_141, 
                                                                                                                    &var_1028[j_6], &var_1028, eax_141, 
                                                                                                                    sub_667620)
                                                                                                                int32_t esi_15 = 0
                                                                                                                
                                                                                                                if (j_6 s> 0)
                                                                                                                    while (true)
                                                                                                                        int32_t edx_30 = var_1028[esi_15]
                                                                                                                        int32_t var_34_20
                                                                                                                        char const* const var_30_63
                                                                                                                        char* ecx_155
                                                                                                                        
                                                                                                                        if (edx_30 == 0)
                                                                                                                            var_30_63 =
                                                                                                                                "DataArray<struct UI2>::DataArrayGet"
                                                                                                                            var_34_20 = 0x6c
                                                                                                                            ecx_155 = "id != DATAID_NULL"
                                                                                                                        else
                                                                                                                            eax_142 = zx.d(edx_30.w)
                                                                                                                            
                                                                                                                            if (eax_142 u< data_c23bac)
                                                                                                                                void* ecx_103 =
                                                                                                                                    eax_142 * 0x18d0 + data_c23ba8
                                                                                                                                
                                                                                                                                if (*(ecx_103 + 0x18c8) == edx_30)
                                                                                                                                    edx_30.b = 0
                                                                                                                                    eax_142, ecx_101 =
                                                                                                                                        sub_6670e0(ecx_103, edx_30.b)
                                                                                                                                    esi_15 += 1
                                                                                                                                    
                                                                                                                                    if (esi_15 s>= j_6)
                                                                                                                                        break
                                                                                                                                    
                                                                                                                                    continue
                                                                                                                            
                                                                                                                            var_30_63 =
                                                                                                                                "DataArray<struct UI2>::DataArrayGet"
                                                                                                                            var_34_20 = 0x6d
                                                                                                                            ecx_155 =
                                                                                                                                "DataArrayTryToGet(id) != NULL"
                                                                                                                        
                                                                                                                        sub_63b870(eax_142, &data_801800, 
                                                                                                                            ecx_155, 
                                                                                                                            "C:\x\ax2017\Engine\DataArray.h", 
                                                                                                                            var_34_20, var_30_63)
                                                                                                                        
                                                                                                                        if (sub_63bc30() != 0)
                                                                                                                            breakpoint
                                                                                                                        
                                                                                                                        sub_63bb00()
                                                                                                                        noreturn
                                                                                                                
                                                                                                                ecx_101.b = 1
                                                                                                                data_c28c58 = 0
                                                                                                                sub_665770(ecx_101)
                                                                                                            else if (result != 0x41)
                                                                                                            label_6796b5:
                                                                                                                
                                                                                                                if (ecx[1] == 0x44
                                                                                                                        && GetKeyState(0x11).w s< 0
                                                                                                                        && data_cf65b4[0x18] != 0)
                                                                                                                    result = GetFocus()
                                                                                                                    
                                                                                                                    if ((result == data_147b084
                                                                                                                        || result == 0) && data_c28c60 == 0)
                                                                                                                    label_6796fe:
                                                                                                                        data_ca9a6c
                                                                                                                        uint32_t count_1 = 0x1018
                                                                                                                        int32_t* var_34_12 = &data_c27c54
                                                                                                                        data_c28c58 = 0
                                                                                                                        memcpy(
                                                                                                                            &(&data_c27c50)[data_ca9a6c * 0x407], 
                                                                                                                            var_34_12, count_1)
                                                                                                            else
                                                                                                                if (GetKeyState(0x11).w s>= 0
                                                                                                                        || data_cf65b4[0x18] == 0)
                                                                                                                    goto label_6796b5
                                                                                                                
                                                                                                                result = GetFocus()
                                                                                                                
                                                                                                                if ((result != data_147b084
                                                                                                                        && result != 0) || data_c28c60 != 0)
                                                                                                                    goto label_6796b5
                                                                                                                
                                                                                                                int32_t i_4 = data_c27c18
                                                                                                                int32_t edx_31 = 0
                                                                                                                
                                                                                                                if (i_4 s> 0)
                                                                                                                    void* esi_16 = &data_c23c18
                                                                                                                    int32_t i_1
                                                                                                                    
                                                                                                                    do
                                                                                                                        result = *esi_16
                                                                                                                        int32_t ecx_104 = edx_31 + 1
                                                                                                                        esi_16 += 0x10
                                                                                                                        
                                                                                                                        if (result[0x12] != 0)
                                                                                                                            ecx_104 = edx_31
                                                                                                                        
                                                                                                                        edx_31 = ecx_104
                                                                                                                        i_1 = i_4
                                                                                                                        i_4 -= 1
                                                                                                                    while (i_1 != 1)
                                                                                                                    i_4 = data_c27c18
                                                                                                                
                                                                                                                int32_t ecx_105 = data_c28c58
                                                                                                                
                                                                                                                if (ecx_105 == edx_31)
                                                                                                                    goto label_6796fe
                                                                                                                
                                                                                                                int32_t edx_32 = 0
                                                                                                                
                                                                                                                if (i_4 s> 0)
                                                                                                                    void* esi_17 = &data_c23c18
                                                                                                                    
                                                                                                                    do
                                                                                                                        result = *esi_17
                                                                                                                        
                                                                                                                        if (result[0x12] == 0)
                                                                                                                            (&data_c27c58)[ecx_105] =
                                                                                                                                *(result + 0x1604)
                                                                                                                            i_4 = data_c27c18
                                                                                                                            ecx_105 = data_c28c58 + 1
                                                                                                                            data_c28c58 = ecx_105
                                                                                                                        
                                                                                                                        edx_32 += 1
                                                                                                                        esi_17 += 0x10
                                                                                                                    while (edx_32 s< i_4)
                                                                                                        else if (GetKeyState(0x11) s>= 0
                                                                                                            || *(data_cf65b4 + 0x18) == 0)
                                                                                                        label_6794d4:
                                                                                                            
                                                                                                            if (ecx[1] != 0x4c)
                                                                                                                goto label_679517
                                                                                                            
                                                                                                            if (GetKeyState(0x11) s>= 0
                                                                                                                    || *(data_cf65b4 + 0x18) == 0)
                                                                                                                goto label_679517
                                                                                                            
                                                                                                            HWND eax_138 = GetFocus()
                                                                                                            
                                                                                                            if (eax_138 != data_147b084
                                                                                                                    && eax_138 != 0)
                                                                                                                goto label_679517
                                                                                                            
                                                                                                            sub_677dc0(eax_138, 0, data_c27c20, 0)
                                                                                                        else
                                                                                                            HWND eax_129 = GetFocus()
                                                                                                            
                                                                                                            if (eax_129 != data_147b084
                                                                                                                    && eax_129 != 0)
                                                                                                                goto label_6794d4
                                                                                                            
                                                                                                            if (GetKeyState(0x10) s>= 0
                                                                                                                    || *(data_cf65b4 + 0x18) == 0)
                                                                                                                goto label_6794d4
                                                                                                            
                                                                                                            HWND eax_132 = GetFocus()
                                                                                                            
                                                                                                            if (eax_132 != data_147b084
                                                                                                                    && eax_132 != 0)
                                                                                                                goto label_6794d4
                                                                                                            
                                                                                                            char** eax_133 = data_147ac2c
                                                                                                            int32_t i_2 = 0
                                                                                                            result = *eax_133
                                                                                                            
                                                                                                            do
                                                                                                                int32_t* j_5 = *result
                                                                                                                
                                                                                                                if (j_5 != 0)
                                                                                                                    j = j_5
                                                                                                                    
                                                                                                                    do
                                                                                                                        int32_t* esi_14 = *(sub_6a01a0(&j) + 4)
                                                                                                                        
                                                                                                                        if (esi_14[1] == 0x22)
                                                                                                                            char* _Str2_1 = esi_14[8]
                                                                                                                            char* const _Str2 = &data_801800
                                                                                                                            
                                                                                                                            if (_Str2_1 != 0)
                                                                                                                                _Str2 = _Str2_1
                                                                                                                            
                                                                                                                            if (strncmp("sys/", _Str2, 4) != 0)
                                                                                                                                char* eax_134 = esi_14[8]
                                                                                                                                char* const ecx_94 = &data_801800
                                                                                                                                
                                                                                                                                if (eax_134 != 0)
                                                                                                                                    ecx_94 = eax_134
                                                                                                                                
                                                                                                                                char* const var_30_46 = ecx_94
                                                                                                                                sub_677dc0(sub_63b5f0("\n*** %s ***"), 
                                                                                                                                    1, esi_14, 1)
                                                                                                                                
                                                                                                                                if (esi_14 != data_c27c20)
                                                                                                                                    sub_69ec60(esi_14)
                                                                                                                    while (j != 0)
                                                                                                                    
                                                                                                                    break
                                                                                                                
                                                                                                                i_2 += 1
                                                                                                                result = &result[4]
                                                                                                            while (i_2 u<= eax_133[1])
                                                                                                    else
                                                                                                        if (GetKeyState(0x11) s>= 0
                                                                                                                || *(data_cf65b4 + 0x18) == 0)
                                                                                                            goto label_6793c1
                                                                                                        
                                                                                                        HWND eax_125
                                                                                                        char* ecx_91
                                                                                                        eax_125, ecx_91 = GetFocus()
                                                                                                        
                                                                                                        if (eax_125 != data_147b084
                                                                                                                && eax_125 != 0)
                                                                                                            goto label_6793c1
                                                                                                        
                                                                                                        if (data_ca9a6c s< data_ca9a70)
                                                                                                            data_ca9a76 = 1
                                                                                                            sub_6ee530(ecx_91)
                                                                                                            eax_122 = data_ca9a6c + 1
                                                                                                            goto label_67939b
                                                                                                else
                                                                                                    if (GetKeyState(0x11) s>= 0
                                                                                                            || *(data_cf65b4 + 0x18) == 0)
                                                                                                        goto label_679346
                                                                                                    
                                                                                                    char* ecx_90
                                                                                                    result, ecx_90 = GetFocus()
                                                                                                    
                                                                                                    if (result != data_147b084
                                                                                                            && result != 0)
                                                                                                        goto label_679346
                                                                                                    
                                                                                                    if (data_ca9a6c s> 1)
                                                                                                        data_ca9a76 = 1
                                                                                                        sub_6ee530(ecx_90)
                                                                                                        eax_122 = data_ca9a6c - 1
                                                                                                    label_67939b:
                                                                                                        data_ca9a6c = eax_122
                                                                                                        sub_666db0(
                                                                                                            &(&data_c27c50)[eax_122 * 0x407])
                                                                                                        sub_64e810(&data_c27c24)
                                                                                                        data_ca9a76 = 0
                                                                                            else
                                                                                                if (GetKeyState(0x11) s>= 0
                                                                                                        || *(data_cf65b4 + 0x18) == 0)
                                                                                                    goto label_6792f9
                                                                                                
                                                                                                result = GetFocus()
                                                                                                
                                                                                                if (result != data_147b084
                                                                                                        && result != 0)
                                                                                                    goto label_6792f9
                                                                                                
                                                                                                data_c27c48 = data_c27c48 / 1.29999995f
                                                                                        else
                                                                                            if (GetKeyState(0x11) s>= 0
                                                                                                    || *(data_cf65b4 + 0x18) == 0)
                                                                                                goto label_6792ad
                                                                                            
                                                                                            result = GetFocus()
                                                                                            
                                                                                            if (result != data_147b084
                                                                                                    && result != 0)
                                                                                                goto label_6792ad
                                                                                            
                                                                                            data_c27c48 = data_c27c48 * 1.29999995f
                                                                                    else
                                                                                        if (GetKeyState(0x11) s>= 0
                                                                                                || *(data_cf65b4 + 0x18) == 0)
                                                                                            goto label_67921a
                                                                                        
                                                                                        result = GetFocus()
                                                                                        
                                                                                        if (result != data_147b084
                                                                                                && result != 0)
                                                                                            goto label_67921a
                                                                                        
                                                                                        if (data_c28c58 != 0)
                                                                                            int32_t var_30_37 = data_c23bb8
                                                                                            sub_63b5f0("total uis before after %d")
                                                                                            sub_673b80()
                                                                                            int32_t var_38_3 = data_c23bb8
                                                                                            sub_63b5f0("total uis between %d")
                                                                                            int32_t var_40_1 = data_c23bb8
                                                                                            sub_63b5f0("total uis after %d")
                                                                                            int32_t ecx_89
                                                                                            ecx_89.b = 1
                                                                                            sub_665770(ecx_89)
                                                                                else
                                                                                    if (GetKeyState(0x11) s>= 0
                                                                                            || *(data_cf65b4 + 0x18) == 0)
                                                                                        goto label_67919d
                                                                                    
                                                                                    HWND eax_109 = GetFocus()
                                                                                    
                                                                                    if (eax_109 != data_147b084
                                                                                            && eax_109 != 0)
                                                                                        goto label_67919d
                                                                                    
                                                                                    sub_67c150()
                                                                            else
                                                                                if (GetKeyState(0x11) s>= 0
                                                                                        || *(data_cf65b4 + 0x18) == 0)
                                                                                    goto label_679167
                                                                                
                                                                                result = GetFocus()
                                                                                
                                                                                if (result != data_147b084
                                                                                        && result != 0)
                                                                                    goto label_679167
                                                                                
                                                                                if (data_c28c58 != 0)
                                                                                    void* eax_102 = sub_6753c0()
                                                                                    int32_t ecx_83 = data_c27c58
                                                                                    j = *(data_147abe8 + 0x2c)
                                                                                    sub_64c550(sub_665600(ecx_83) + 0x14, 
                                                                                        j, &var_1038)
                                                                                    int32_t esi_11 = 1
                                                                                    
                                                                                    if (data_c28c58 s> 1)
                                                                                        while (true)
                                                                                            float* eax_105 = sub_64c550(
                                                                                                sub_665600((&data_c27c58)[esi_11])
                                                                                                    + 0x14, 
                                                                                                j, &var_1060)
                                                                                            int32_t xmm3_5 = var_1030
                                                                                            float xmm2_12 = var_1038.d
                                                                                            
                                                                                            if (not(xmm3_5 f< xmm2_12))
                                                                                                int32_t xmm0_17 = var_102c
                                                                                                int32_t xmm1_18 = var_1038:4.d
                                                                                                
                                                                                                if (not(xmm0_17 f< xmm1_18))
                                                                                                    float xmm4_1 = *eax_105
                                                                                                    
                                                                                                    if (not(xmm4_1 > xmm2_12))
                                                                                                        xmm2_12 = xmm4_1
                                                                                                    
                                                                                                    int32_t xmm4_2 = eax_105[2]
                                                                                                    
                                                                                                    if (not(xmm3_5 f> xmm4_2))
                                                                                                        xmm3_5 = xmm4_2
                                                                                                    
                                                                                                    int32_t xmm4_3 = eax_105[1]
                                                                                                    
                                                                                                    if (not(xmm4_3 f> xmm1_18))
                                                                                                        xmm1_18 = xmm4_3
                                                                                                    
                                                                                                    int32_t xmm4_4 = eax_105[3]
                                                                                                    
                                                                                                    if (not(xmm0_17 f> xmm4_4))
                                                                                                        xmm0_17 = xmm4_4
                                                                                                    
                                                                                                    esi_11 += 1
                                                                                                    var_1038.d = xmm2_12
                                                                                                    var_1038:4.d = xmm1_18
                                                                                                    var_1030 = xmm3_5
                                                                                                    var_102c = xmm0_17
                                                                                                    
                                                                                                    if (esi_11 s>= data_c28c58)
                                                                                                        break
                                                                                                    
                                                                                                    continue
                                                                                            
                                                                                            sub_63b870(eax_105, &data_801800, 
                                                                                                "RectIsNormalized(r0)", 
                                                                                                "C:\x\ax2017\Engine\Rect.cpp", 0xdb, 
                                                                                                "RectUnion")
                                                                                            
                                                                                            if (sub_63bc30() != 0)
                                                                                                breakpoint
                                                                                            
                                                                                            sub_63bb00()
                                                                                            noreturn
                                                                                    
                                                                                    void* eax_106 = sub_676c20(&var_1038, 
                                                                                        *(eax_102 + 0x1604))
                                                                                    float xmm1_20 =
                                                                                        var_1038:4.d ^ (data_8937c0.o).d
                                                                                    int32_t esi_12 = *(eax_106 + 0x1604)
                                                                                    int32_t* var_38_2 = &var_1070
                                                                                    var_1070 =
                                                                                        var_1038.d ^ (data_8937c0.o).d
                                                                                    var_106c = xmm1_20
                                                                                    sub_6748c0(esi_12, var_38_2)
                                                                                    data_c27c58 = esi_12
                                                                                    int32_t ecx_88
                                                                                    ecx_88.b = 1
                                                                                    data_c28c58 = 1
                                                                                    sub_665770(ecx_88)
                                                                                    sub_64e810(&data_c27c24)
                                                                        else
                                                                            if (GetKeyState(0x11).w s< 0
                                                                                    && data_cf65b4[0x18] != 0)
                                                                                result = GetFocus()
                                                                                
                                                                                if (result == data_147b084
                                                                                        || result == 0)
                                                                                    goto label_678f90
                                                                            
                                                                            bool cond:14_1 = data_c28c58 != 1
                                                                            data_c28c60.w = 0
                                                                            
                                                                            if (not(cond:14_1))
                                                                                data_c28c62 = 1
                                                                    else
                                                                        if (GetKeyState(0x11) s>= 0
                                                                                || *(data_cf65b4 + 0x18) == 0)
                                                                            goto label_678f42
                                                                        
                                                                        result = GetFocus()
                                                                        
                                                                        if (result != data_147b084
                                                                                && result != 0)
                                                                            goto label_678f42
                                                                        
                                                                        if (data_c28c58 != 0)
                                                                            void* eax_98 = sub_675300()
                                                                            result = sub_675040(eax_98)
                                                                            result_3 = result
                                                                            
                                                                            if (result_3 == 0)
                                                                                var_30_7 = "UI2MoveDownOne"
                                                                                var_34_1 = 0x5000
                                                                                var_38_1 = "C:\x\ax2017\Engine\UI2.cpp"
                                                                                ecx_28 = "elParent"
                                                                                goto label_679f0e
                                                                            
                                                                            result = sub_675230(eax_98)
                                                                            
                                                                            if (result != 0)
                                                                                if (*(result + 0x15f8) != 6
                                                                                        || result[0x13] != 0)
                                                                                    result_3 = result
                                                                                else
                                                                                    result_3 = result
                                                                                
                                                                                goto label_678f1a
                                                                            
                                                                            if (*(result_3 + 0x1718) != result)
                                                                                goto label_678f1a
                                                                            
                                                                            int32_t edx_23 = data_c27c24
                                                                            
                                                                            if (edx_23 == 0)
                                                                                var_30_7 =
                                                                                    "DataArray<struct UI2>::DataArrayGet"
                                                                                var_34_1 = 0x6c
                                                                                ecx_28 = "id != DATAID_NULL"
                                                                                goto label_679f04
                                                                            
                                                                            result = zx.d(edx_23.w)
                                                                            
                                                                            if (result u>= data_c23bac)
                                                                                goto label_679ef8
                                                                            
                                                                            void* ecx_74 =
                                                                                result * 0x18d0 + data_c23ba8
                                                                            
                                                                            if (*(ecx_74 + 0x18c8) != edx_23)
                                                                                goto label_679ef8
                                                                            
                                                                            result_3 = sub_674ff0(ecx_74)
                                                                            goto label_678f1a
                                                                else
                                                                    if (GetKeyState(0x11) s>= 0
                                                                            || *(data_cf65b4 + 0x18) == 0)
                                                                        goto label_678e14
                                                                    
                                                                    result = GetFocus()
                                                                    
                                                                    if (result != data_147b084
                                                                            && result != 0)
                                                                        goto label_678e14
                                                                    
                                                                    if (data_c28c58 != 0)
                                                                        void* eax_93 = sub_6753c0()
                                                                        result = sub_675040(eax_93)
                                                                        
                                                                        if (result == 0)
                                                                            var_30_7 = "UI2MoveUpOne"
                                                                            var_34_1 = 0x4f84
                                                                            var_38_1 = "C:\x\ax2017\Engine\UI2.cpp"
                                                                            ecx_28 = "elParent"
                                                                            goto label_679f0e
                                                                        
                                                                        uint32_t eax_94 = sub_6750c0(eax_93)
                                                                        uint32_t esi_10 = eax_94
                                                                        
                                                                        if (esi_10 != 0)
                                                                            if (*(esi_10 + 0x15f8) != 6
                                                                                    || *(esi_10 + 0x13) != 0)
                                                                                sub_6751a0(esi_10)
                                                                            else
                                                                                uint32_t eax_95 = sub_674ff0(esi_10)
                                                                                
                                                                                if (eax_95 != 0)
                                                                                    esi_10 = eax_95
                                                                                
                                                                                int32_t ecx_68
                                                                                ecx_68.b = eax_95 != 0
                                                                                sub_6748c0(esi_10, &data_7ffb14)
                                                                        else if (*(result + 0x1718) != eax_94)
                                                                            sub_6751a0(result)
                                                                        else
                                                                            sub_6748c0(esi_10, &data_7ffb14)
                                                                        
                                                                        sub_64e810(&data_c27c24)
                                                                        int32_t ecx_70
                                                                        ecx_70.b = 1
                                                                        data_c27c24 = 0
                                                                        sub_665770(ecx_70)
                                                            else
                                                                if (GetKeyState(0x11) s>= 0
                                                                        || *(data_cf65b4 + 0x18) == 0)
                                                                    goto label_678d14
                                                                
                                                                HWND eax_76 = GetFocus()
                                                                
                                                                if (eax_76 != data_147b084
                                                                        && eax_76 != 0)
                                                                    goto label_678d14
                                                                
                                                                if (GetKeyState(0x10) s>= 0
                                                                        || *(data_cf65b4 + 0x18) == 0)
                                                                    goto label_678d14
                                                                
                                                                result = GetFocus()
                                                                
                                                                if (result != data_147b084
                                                                        && result != 0)
                                                                    goto label_678d14
                                                                
                                                                if (data_c28c58 != 0)
                                                                    result_3 = sub_675300()
                                                                    void* eax_80 = sub_675040(result_3)
                                                                    result = sub_675230(result_3)
                                                                    
                                                                    if (eax_80 != 0)
                                                                        if (result != 0)
                                                                            sub_674ff0(eax_80)
                                                                            goto label_678f1a
                                                                        
                                                                        result = sub_675040(eax_80)
                                                                        result_3 = result
                                                                        
                                                                        if (result_3 != 0)
                                                                            sub_674ff0(result_3)
                                                                            goto label_678f1a
                                                                        
                                                                        int32_t edx_15 = data_c27c24
                                                                        
                                                                        if (edx_15 == 0)
                                                                            var_30_7 =
                                                                                "DataArray<struct UI2>::DataArrayGet"
                                                                            var_34_1 = 0x6c
                                                                            ecx_28 = "id != DATAID_NULL"
                                                                            goto label_679f04
                                                                        
                                                                        result = zx.d(edx_15.w)
                                                                        
                                                                        if (result u>= data_c23bac)
                                                                            goto label_679ef8
                                                                        
                                                                        void* ecx_57 =
                                                                            result * 0x18d0 + data_c23ba8
                                                                        
                                                                        if (*(ecx_57 + 0x18c8) != edx_15)
                                                                            goto label_679ef8
                                                                        
                                                                        sub_674ff0(ecx_57)
                                                                        goto label_678f1a
                                                                    
                                                                    int32_t edx_13 = data_c27c24
                                                                    
                                                                    if (edx_13 == 0)
                                                                        var_30_7 =
                                                                            "DataArray<struct UI2>::DataArrayGet"
                                                                        var_34_1 = 0x6c
                                                                        ecx_28 = "id != DATAID_NULL"
                                                                    label_679f04:
                                                                        var_38_1 =
                                                                            "C:\x\ax2017\Engine\DataArray.h"
                                                                        goto label_679f0e
                                                                    
                                                                    result = zx.d(edx_13.w)
                                                                    
                                                                    if (result u>= data_c23bac)
                                                                    label_679ef8:
                                                                        var_30_7 =
                                                                            "DataArray<struct UI2>::DataArrayGet"
                                                                        var_34_1 = 0x6d
                                                                        ecx_28 = "DataArrayTryToGet(id) != NULL"
                                                                        goto label_679f04
                                                                    
                                                                    void* ecx_53 =
                                                                        result * 0x18d0 + data_c23ba8
                                                                    
                                                                    if (*(ecx_53 + 0x18c8) != edx_13)
                                                                        goto label_679ef8
                                                                    
                                                                    sub_674ff0(ecx_53)
                                                                label_678f1a:
                                                                    sub_6748c0(result_3, &data_7ffb14)
                                                                    sub_64e810(&data_c27c24)
                                                                    int32_t ecx_81
                                                                    ecx_81.b = 1
                                                                    data_c27c24 = 0
                                                                    sub_665770(ecx_81)
                                                        else
                                                            if (GetKeyState(0x11) s>= 0
                                                                    || *(data_cf65b4 + 0x18) == 0)
                                                                goto label_678b7c
                                                            
                                                            HWND eax_67 = GetFocus()
                                                            
                                                            if (eax_67 != data_147b084
                                                                    && eax_67 != 0)
                                                                goto label_678b7c
                                                            
                                                            if (GetKeyState(0x10) s>= 0
                                                                    || *(data_cf65b4 + 0x18) == 0)
                                                                goto label_678b7c
                                                            
                                                            result = GetFocus()
                                                            
                                                            if (result != data_147b084
                                                                    && result != 0)
                                                                goto label_678b7c
                                                            
                                                            if (data_c28c58 != 0)
                                                                result_3 = sub_675300()
                                                                void* eax_71 = sub_675040(result_3)
                                                                int32_t ecx_48
                                                                
                                                                if (eax_71 != 0
                                                                        && sub_6750c0(result_3) == 0)
                                                                    ecx_48.b = sub_675040(eax_71) != 0
                                                                goto label_678f1a
                                                    else
                                                        if (GetKeyState(0x11) s>= 0
                                                                || *(data_cf65b4 + 0x18) == 0)
                                                            goto label_678ac3
                                                        
                                                        result = GetFocus()
                                                        
                                                        if (result != data_147b084 && result != 0)
                                                            goto label_678ac3
                                                        
                                                        if (data_c28c58 == 1)
                                                            result = sub_665600(data_c27c58)
                                                            int32_t ecx_41 = *(result + 0x15f8)
                                                            char* ecx_42 = ecx_41 - 1
                                                            void* esi_8
                                                            
                                                            if (ecx_41 == 1)
                                                                esi_8 = *(result + 0x14b0)
                                                                
                                                                if (esi_8 != 0 && *(esi_8 + 4) == 0x1d)
                                                                label_678a33:
                                                                    
                                                                    if (sub_6f2a60(ecx_42).b != 0)
                                                                        int32_t* ecx_43 = data_cf65b8
                                                                        *((data_147dec0 << 2) +
                                                                            &data_147dcc0) = esi_8
                                                                        int32_t eax_62 = data_147dec0 + 1
                                                                        data_147dec0 = eax_62
                                                                        data_147dec4 = eax_62
                                                                        (*(*ecx_43 + 4))(eax_2)
                                                                        sub_6fda60()
                                                                        void* eax_64 = data_cf65b4
                                                                        HWND hWnd = data_147b084
                                                                        *(eax_64 + 0x1c) = 1
                                                                        *(eax_64 + 0x28) = 0
                                                                        *(eax_64 + 0x20) = 0
                                                                        *(eax_64 + 0x24) = esi_8
                                                                        SetFocus(hWnd)
                                                                        sub_64e810(&data_c27c24)
                                                            else
                                                                char* temp10_1 = ecx_42
                                                                ecx_42 -= 1
                                                                
                                                                if (temp10_1 == 1)
                                                                    esi_8 = *(result + 0x14e0)
                                                                label_678a2b:
                                                                    
                                                                    if (esi_8 != 0)
                                                                        goto label_678a33
                                                                else
                                                                    char* temp11_1 = ecx_42
                                                                    ecx_42 -= 7
                                                                    
                                                                    if (temp11_1 == 7)
                                                                        esi_8 = *(result + 0x14a8)
                                                                        goto label_678a2b
                                                else
                                                    if (GetKeyState(0x11) s< 0
                                                            && *(data_cf65b4 + 0x18) != 0)
                                                        HWND eax_51 = GetFocus()
                                                        
                                                        if (eax_51 != data_147b084 && eax_51 != 0)
                                                            goto label_678968
                                                        
                                                        if (GetKeyState(0x10) s< 0
                                                                && *(data_cf65b4 + 0x18) != 0)
                                                            HWND eax_54 = GetFocus()
                                                            
                                                            if (eax_54 == data_147b084
                                                                    || eax_54 == 0)
                                                                goto label_67894c
                                                    
                                                label_678968:
                                                    
                                                    if (ecx[1] != 9)
                                                        goto label_6789b0
                                                    
                                                    if (GetKeyState(0x11) s>= 0
                                                            || *(data_cf65b4 + 0x18) == 0)
                                                        goto label_6789b0
                                                    
                                                    HWND eax_57 = GetFocus()
                                                    
                                                    if (eax_57 != data_147b084 && eax_57 != 0)
                                                        goto label_6789b0
                                                    
                                                    if (sub_6fdce0().b != 0)
                                                        sub_64e810(&data_c27c24)
                                            else
                                                if (GetKeyState(0x11) s>= 0
                                                        || *(data_cf65b4 + 0x18) == 0)
                                                    goto label_6788f6
                                                
                                                HWND eax_48 = GetFocus()
                                                
                                                if (eax_48 != data_147b084 && eax_48 != 0)
                                                    goto label_6788f6
                                                
                                            label_67894c:
                                                
                                                if (sub_6fdc80().b != 0)
                                                    sub_64e810(&data_c27c24)
                                        else
                                            if (GetKeyState(0x11) s>= 0
                                                    || *(data_cf65b4 + 0x18) == 0)
                                                goto label_6788ca
                                            
                                            result = GetFocus()
                                            
                                            if (result != data_147b084 && result != 0)
                                                goto label_6788ca
                                            
                                            bool cond:13_1 = data_c28c58 s<= 0
                                            data_c28c61.w = 0
                                            
                                            if (not(cond:13_1))
                                                data_c28c60 = 1
                                    else if (GetKeyState(0x11) s>= 0 || *(data_cf65b4 + 0x18) == 0)
                                    label_678823:
                                        
                                        if (ecx[1] != 0x53)
                                            goto label_678859
                                        
                                        if (GetKeyState(0x11) s>= 0 || *(data_cf65b4 + 0x18) == 0)
                                            goto label_678859
                                        
                                        HWND eax_38
                                        char* ecx_39
                                        eax_38, ecx_39 = GetFocus()
                                        
                                        if (eax_38 != data_147b084 && eax_38 != 0)
                                            goto label_678859
                                        
                                        sub_6f9e80(ecx_39)
                                    else
                                        HWND eax_32 = GetFocus()
                                        
                                        if (eax_32 != data_147b084 && eax_32 != 0)
                                            goto label_678823
                                        
                                        if (GetKeyState(0x10) s>= 0 || *(data_cf65b4 + 0x18) == 0)
                                            goto label_678823
                                        
                                        HWND eax_35
                                        char* ecx_38
                                        eax_35, ecx_38 = GetFocus()
                                        
                                        if (eax_35 != data_147b084 && eax_35 != 0)
                                            goto label_678823
                                        
                                        sub_6fa410(ecx_38)
                                else
                                    if (GetKeyState(0x11) s>= 0 || *(data_cf65b4 + 0x18) == 0)
                                        goto label_6787c3
                                    
                                    result = GetFocus()
                                    
                                    if (result != data_147b084 && result != 0)
                                        goto label_6787c3
                                    
                                    data_cadde8 = data_cadde8 == 0
                        else
                            int16_t eax_14
                            eax_14, ecx_1 = GetKeyState(0x11)
                            
                            if (eax_14 s>= 0 || *(data_cf65b4 + 0x18) == 0)
                                goto label_6784e6
                            
                            HWND eax_16
                            eax_16, ecx_1 = GetFocus()
                            
                            if (eax_16 != data_147b084 && eax_16 != 0)
                                goto label_6784e6
                            
                            sub_6758c0(0xffffffff)
                            int32_t ecx_15
                            ecx_15.b = 0
                            sub_665770(ecx_15)
                    else
                        int16_t eax_11
                        eax_11, ecx_1 = GetKeyState(0x11)
                        
                        if (eax_11 s>= 0 || *(data_cf65b4 + 0x18) == 0)
                            goto label_6784a6
                        
                        HWND eax_13
                        eax_13, ecx_1 = GetFocus()
                        
                        if (eax_13 != data_147b084 && eax_13 != 0)
                            goto label_6784a6
                        
                        sub_6758c0(1)
                        int32_t ecx_14
                        ecx_14.b = 0
                        sub_665770(ecx_14)
                else if (data_c28c58 s> 0)
                    int32_t esi_3 = data_c27c18
                    int32_t eax_10 = 0
                    i_3 = data_c28c5c
                    
                    if (esi_3 s> 0)
                        void* ecx_10 = &data_c23c20
                        
                        while (*ecx_10 != i_3)
                            eax_10 += 1
                            ecx_10 += 0x10
                            
                            if (eax_10 s>= esi_3)
                                break
                    
                    if (esi_3 s> 0 && eax_10 s< 0)
                        goto label_6783c5
                    
                    int32_t* ecx_13 = (eax_10 << 4) + &data_c23c24
                    
                    while (ecx_13[-1] s>= i_3 || *ecx_13 == 2)
                        ecx_13 -= 0x10
                        int32_t temp0_1 = eax_10
                        eax_10 -= 1
                        
                        if (temp0_1 - 1 s< 0)
                            goto label_6783c5
                    
                    esi_2 = ecx_13[-3]
                    goto label_6783cb
            else if (data_c28c58 s> 0)
                i_3 = data_c28c5c
                int32_t esi_1 = data_c27c18
                int32_t ecx_7 = i_3 + 1
                
                if (ecx_7 s< esi_1)
                    void* eax_9 = (ecx_7 << 4) + &data_c23c24
                    
                    while (*(eax_9 - 4) s<= i_3 || *eax_9 == 2)
                        ecx_7 += 1
                        eax_9 += 0x10
                        
                        if (ecx_7 s>= esi_1)
                            goto label_6783c5
                    
                    esi_2 = *(eax_9 - 0xc)
                    goto label_6783cb
                
            label_6783c5:
                esi_2 = *((i_3 << 4) + &data_c23c18)
            label_6783cb:
                data_c28c58 = 0
                *(esi_2 + 0x18c8)
                sub_66c650()
                data_c28c5c = sub_66b9a0(esi_2)
        result.b = 1
    else if (result == 7)
        sub_676190()
        result.b = 1
    else
        float var_1090
        
        if (result != 0x1c)
            if (result == 3)
                if (sub_63c270(&var_1090) != 0)
                    struct InputHitResult::UI2HitResult::VTable* var_1068
                    struct InputHitResult::UI2HitResult::VTable** eax_167 =
                        sub_656520(&var_1090, data_c27c44, &var_1068, &var_1090)
                    data_c27c30 = eax_167[1]
                    data_c27c34 = eax_167[2]
                    data_c27c38 = eax_167[3]
                    data_c27c3c = eax_167[4]
                    data_c27c40 = eax_167[5]
                
                int32_t eax_171 = (*data_c27c2c)(eax_2)
                
                if (eax_171 == (*data_c23c00)())
                    eax_171(&data_c27c2c, &data_c23c00)
                
                int32_t eax_175 = (*data_c27c2c)()
                
                if (eax_175 == (*data_c23c00)() && eax_175(&data_c27c2c, &data_c23c00).b != 0)
                    int32_t eax_176 = data_c23be0
                    
                    if (eax_176 != 0)
                        uint32_t ecx_143 = zx.d(eax_176.w)
                        
                        if (ecx_143 u< data_c23bac)
                            void* ecx_145 = ecx_143 * 0x18d0 + data_c23ba8
                            
                            if (*(ecx_145 + 0x18c8) == eax_176 && ecx_145 != 0)
                                data_1777484 = 0
                                data_177748e = 0
                                *(ecx_145 + 0x172c) = *(ecx_145 + 0x1724)
                                *(ecx_145 + 0x1789) = 0
                                eax_176 = data_c23be0
                    
                    sub_66ca90(eax_176, 0, eax_176, 1)
                    data_c28c64 = 0xffffffff
                    data_c28c68 = 0xffffffff
                    int16_t eax_178 = GetKeyState(0x20)
                    HWND eax_180
                    
                    if (eax_178 s< 0 && *(data_cf65b4 + 0x18) != 0)
                        eax_180 = GetFocus()
                    
                    if (eax_178 s< 0 && *(data_cf65b4 + 0x18) != 0
                            && (eax_180 == data_147b084 || eax_180 == 0))
                        data_ca9a74 = 1
                        data_ca9a78 = 1
                        sub_63c270(&var_1038:8)
                        data_ca9a7c = var_1030
                        data_ca9a80 = var_102c
                        data_ca9a8c = 0
                        data_ca9a84 = var_1030
                        data_ca9a88 = var_102c
                    else if (data_c28c60 != 0 || data_c28c62 != 0)
                        sub_674330()
                    else
                        int32_t nVirtKey = 0x11
                        
                        if (sub_673810(&var_106c) == 0)
                            if (GetKeyState(nVirtKey) s>= 0 || *(data_cf65b4 + 0x18) == 0)
                            label_679eca:
                                data_ca9a6c
                                uint32_t count_2 = 0x1018
                                int32_t* var_34_18 = &data_c27c54
                                data_c28c58 = 0
                                memcpy(&(&data_c27c50)[data_ca9a6c * 0x407], var_34_18, count_2)
                            else
                                result = GetFocus()
                                
                                if (result != data_147b084 && result != 0)
                                    goto label_679eca
                        else
                            int16_t eax_182 = GetKeyState(nVirtKey)
                            HWND eax_184
                            
                            if (eax_182 s< 0 && *(data_cf65b4 + 0x18) != 0)
                                eax_184 = GetFocus()
                            
                            int32_t edx_60
                            
                            if (eax_182 s< 0 && *(data_cf65b4 + 0x18) != 0
                                    && (eax_184 == data_147b084 || eax_184 == 0))
                                sub_66c6a0(var_106c)
                            label_679e74:
                                edx_60 = data_c28c58
                                data_ca9a95 = 1
                            label_679e81:
                                
                                if (edx_60 s> 0)
                                    sub_674330()
                            else
                                int32_t ecx_150 = 0
                                float esi_23 = var_106c
                                
                                if (data_c28c58 s> 0)
                                    float eax_185 = zx.d(esi_23.w)
                                    var_106c = eax_185
                                    int32_t edi_7 = eax_185 i* 0x18d0
                                    
                                    while (true)
                                        int32_t var_34_21
                                        char const* const var_30_64
                                        char* ecx_156
                                        
                                        if (esi_23 == 0)
                                            var_30_64 = "DataArray<struct UI2>::DataArrayGet"
                                            var_34_21 = 0x6c
                                            ecx_156 = "id != DATAID_NULL"
                                        else
                                            if (eax_185 u< data_c23bac)
                                                eax_185 = data_c23ba8
                                                
                                                if (*(edi_7 i+ eax_185 + 0x18c8) == esi_23)
                                                    edx_60 = data_c28c58
                                                    
                                                    if ((&data_c27c58)[ecx_150]
                                                            == *(edi_7 + data_c23ba8 + 0x1604))
                                                        data_ca9a95 = 0
                                                        break
                                                    
                                                    ecx_150 += 1
                                                    
                                                    if (ecx_150 s>= edx_60)
                                                        goto label_679e40
                                                    
                                                    eax_185 = var_106c
                                                    continue
                                            
                                            var_30_64 = "DataArray<struct UI2>::DataArrayGet"
                                            var_34_21 = 0x6d
                                            ecx_156 = "DataArrayTryToGet(id) != NULL"
                                        
                                        sub_63b870(eax_185, &data_801800, ecx_156, 
                                            "C:\x\ax2017\Engine\DataArray.h", var_34_21, var_30_64)
                                        
                                        if (sub_63bc30() != 0)
                                            breakpoint
                                        
                                        sub_63bb00()
                                        noreturn
                                    
                                    goto label_679e81
                                
                            label_679e40:
                                int16_t eax_186 = GetKeyState(0x12)
                                HWND eax_188
                                
                                if (eax_186 s< 0 && *(data_cf65b4 + 0x18) != 0)
                                    eax_188 = GetFocus()
                                
                                if (eax_186 s>= 0 || *(data_cf65b4 + 0x18) == 0
                                        || (eax_188 != data_147b084 && eax_188 != 0)
                                        || data_c28c58 s<= 0)
                                    sub_665a60(esi_23)
                                    goto label_679e74
                                
                                sub_674330()
            
            result.b = 1
        else
            char* eax_145 = ecx[6]
            int32_t* j_7 = &data_801800
            char* edx_33 = &data_801800
            
            if (eax_145 != 0)
                edx_33 = eax_145
            
            char* result_1
            sub_6c4220(&result_1, edx_33)
            int32_t var_14_1 = 4
            char* result_6 = &data_801800
            char* result_4 = result_1
            
            if (result_4 != 0)
                result_6 = result_4
            
            int32_t eax_146 = sub_6fb0d0(result_6)
            char* result_2
            int32_t* eax_147 = sub_675480(&result_2, &ecx[6])
            var_14_1.b = 5
            int32_t* ecx_109 = data_c27c20
            int32_t var_34_13
            char const* const var_30_53
            char* ecx_110
            char const* const edx_35
            
            if (ecx_109 == 0)
                var_30_53 = "UI2DefGet"
                var_34_13 = 0xc16
                edx_35 = "UI2DefGet on null pointer"
                ecx_110 = &data_874470
            label_679fa6:
                sub_63b870(eax_147, edx_35, ecx_110, "C:\x\ax2017\Engine\UI2.cpp", var_34_13, 
                    var_30_53)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            if (ecx_109[1] != 0x22)
                var_30_53 = "UI2DefGet"
                var_34_13 = 0xc17
                edx_35 = &data_801800
                ecx_110 = "ptr->assetType == ASSET_TYPE_UI2"
                goto label_679fa6
            
            result = sub_5af880(ecx_109)
            
            if (*(eax_146 + 4) != 3)
                var_14_1.b = 8
                
                if (data_cf65bc != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_2)
                        int32_t temp1_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_64c080(result, *(result + 0xc) + 0x10)
                            result_2 = &data_801800
                
                int32_t var_14_3 = 9
                
                if (data_cf65bc != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_1)
                        int32_t temp2_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_64c080(result, *(result + 0xc) + 0x10)
                
                result.b = 0
            else
                float esi_18
                
                if (data_c28c58 != 0)
                    void* eax_149 = sub_64cc90(sub_665600((&data_c27c58)[data_c27c58]))
                    *(eax_149 + 0x10) += 1
                    esi_18 = data_c27c58 + 1
                else
                    esi_18 = *(result + 8)
                
                char* result_5 = result_2
                char* result_7 = &data_801800
                var_106c = esi_18
                
                if (result_5 != 0)
                    result_7 = result_5
                
                char* result_8 = result_7
                sub_63df30(&j, "img_%s")
                var_14_1.b = 6
                float eax_150
                float edx_36
                eax_150, edx_36 = sub_5a0e40()
                sub_63c270(&var_1090)
                float xmm2_15 = 1f f/ data_c27c48
                float* var_30_54 = &var_1060
                float var_108c
                float xmm0_24 = var_108c * xmm2_15 f+ data_c27c50
                var_1090 = var_1090 * xmm2_15 f+ data_c27c4c
                float var_108c_1 = xmm0_24
                int128_t xmm1_24 = *sub_5af7f0(&var_1060, &var_1038:8, &var_1090, var_30_54)
                var_1038 = xmm1_24
                float xmm0_25 = xmm1_24.d
                float xmm0_26
                
                if (0f f<= xmm1_24)
                    xmm0_26 = xmm0_25 + 0.5f
                else
                    xmm0_26 = xmm0_25 - 0.5f
                
                float xmm3_6 = var_1038:4.d
                float xmm5_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_26)))
                float xmm0_28
                
                if (0f <= xmm3_6)
                    xmm0_28 = xmm3_6 + 0.5f
                else
                    xmm0_28 = xmm3_6 - 0.5f
                
                float xmm0_30 = eax_150 f- xmm1_24
                float xmm1_26 = edx_36 - xmm3_6
                float xmm6_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_28)))
                float xmm0_31
                
                if (0 f<= xmm0_30)
                    xmm0_31 = xmm0_30 + 0.5f
                else
                    xmm0_31 = xmm0_30 - 0.5f
                
                float xmm3_8 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_31)))
                float xmm1_27
                
                if (0f <= xmm1_26)
                    xmm1_27 = xmm1_26 + 0.5f
                else
                    xmm1_27 = xmm1_26 - 0.5f
                
                void* ecx_118 = data_1777548
                int32_t var_30_55 = 1
                var_1050.d = xmm5_2
                var_1050:4.d = xmm6_2
                var_1050:8.d = xmm3_8 + xmm5_2
                var_1050:0xc.d = xmm6_2 + _mm_cvtepi32_ps(zx.o(int.d(xmm1_27)))
                int32_t* eax_157 = sub_69dd00(ecx_118, 0)
                sub_6fb740(eax_157, eax_157, result, esi_18, var_30_55)
                int32_t* esi_20 = *result + esi_18 i* 0x18
                int32_t* j_3 = j
                
                if (j_3 != 0)
                    j_7 = j_3
                
                int32_t* j_8 = j_7
                int32_t var_40_2 = 1
                int32_t var_48_1 = eax_146
                sub_6dce10(
                    sub_6dce10(sub_6dce10(j_3, esi_20, &data_8cae70, 0x64), esi_20, &data_8cae70, 
                        0x66), 
                    esi_20, &data_8cae70, 0x8c)
                sub_667a60(&var_1050, 0x76, esi_20, &var_1050)
                var_14_1.b = 7
                
                if (data_cf65bc != 0)
                    int32_t* j_4 = j
                    
                    if (j_4 != 0 && *j_4 != 0)
                        char* eax_163 = sub_63d4e0(&j)
                        int32_t temp6_1 = *(eax_163 + 4)
                        *(eax_163 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_64c080(eax_163, *(eax_163 + 0xc) + 0x10)
                
                var_14_1.b = 5
                data_c27c58 = var_106c
                data_c28c58 = 1
                sub_64e810(&data_c27c24)
                int32_t ecx_124
                ecx_124.b = 1
                sub_665770(ecx_124)
                var_14_1.b = 0xa
                
                if (data_cf65bc != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_2)
                        int32_t temp7_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_64c080(result, *(result + 0xc) + 0x10)
                            result_2 = &data_801800
                
                int32_t var_14_2 = 0xb
                
                if (data_cf65bc != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_1)
                        int32_t temp9_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp9_1 == 1)
                            sub_64c080(result, *(result + 0xc) + 0x10)
                
                result.b = 1
else
    result.b = var_1075

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
