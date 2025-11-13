// 函数: sub_742a80
// 地址: 0x742a80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_773188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = *arg1

if (result != 1)
    if (result == 0x1c)
        char* eax_35 = arg1[6]
        char* edx_9 = &data_801800
        
        if (eax_35 != 0)
            edx_9 = eax_35
        
        uint32_t result_2
        sub_6c4220(&result_2, edx_9)
        int32_t var_14_1 = 0
        uint32_t result_4 = &data_801800
        uint32_t result_3 = result_2
        
        if (result_3 != 0)
            result_4 = result_3
        
        int32_t eax_36 = sub_6fb0d0(result_4)
        result = *(eax_36 + 4)
        
        if (result == 3 || result == 2 || result == 0x1e || result == 0x19)
            int32_t eax_37 = data_14ff3a0
            data_14ff3a0 = eax_37 + 1
            void* eax_39 = data_cf65b8
            float xmm2_1 = data_14ff3a4
            float var_a4_1 = xmm2_1
            int32_t var_e4_1 = 0
            int32_t var_e0_1 = 0
            int32_t var_d8_1 = _mm_cvtepi32_ps(zx.o(*(eax_39 + 0x18)))
            int64_t var_c4_1 = data_14ff3c4:4.q
            int32_t var_bc_1 = data_14ff3c4:0xc
            float xmm1_5 = 1f f/ data_14ff3a8 * xmm2_1
            int32_t var_dc_1 = _mm_cvtepi32_ps(zx.o(*(eax_39 + 0x14)))
            float var_a8_1 = xmm1_5
            int128_t var_d4_1 = data_14ff3b4:4.o
            int32_t var_ac_1 = xmm2_1 ^ (data_8937c0.o).d
            int128_t var_f4 = (xmm1_5 ^ (data_8937c0.o).d).o
            void var_98
            sub_63c270(&var_98)
            void var_b8
            int64_t* eax_42 = sub_6dc460(&var_b8, &var_98, &var_f4, &var_b8)
            float xmm2_2[0x4] = *eax_42
            int64_t xmm0_15 = eax_42[2]
            float xmm3_1 = xmm0_15.d
            float xmm4_1 = xmm0_15:4.d
            int96_t var_3c_1 = xmm2_2[0].12
            float xmm7_1 = var_3c_1:8.d
            float xmm2_3 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xff)
            uint32_t xmm6_4[0x4] = xmm3_1 * 0f + xmm2_3 * 0f + xmm4_1
            int32_t xmm1_7 = __andps_xmmxud_memxud(xmm6_4, data_8937a0.o)
            float xmm1_12
            
            if (not(9.99999975e-06f f> xmm1_7))
                xmm1_12 = var_3c_1:4.d * 0f + var_3c_1.d * 0f + xmm7_1 + -0f
            
            float xmm1_14
            float var_8c
            
            if (9.99999975e-06f f> xmm1_7 || 0 f< xmm1_12 f* xmm6_4)
                xmm1_14 = var_8c
            else
                xmm1_14 = (xmm1_12 ^ (data_8937c0.o).d) f/ xmm6_4
            int32_t* ecx_34 = data_147df90
            float var_a8_2 = xmm3_1 * xmm1_14 f+ var_3c_1:4.d
            
            if (ecx_34[1] != 0x20)
                sub_63b870(eax_42, &data_801800, "ptr->assetType == ASSET_TYPE_FAB", 
                    "C:\x\ax2017\Engine\FabDef.cpp", 0xeb, "FabDefGet")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            void* eax_43
            int32_t ecx_35
            eax_43, ecx_35 = sub_5af880(ecx_34)
            int32_t edi_2 = *(eax_43 + 8)
            int32_t var_14c_7 = ecx_35
            int32_t* eax_44 = sub_69dd00(data_1777518, 0)
            sub_6fb630(eax_44, eax_44, eax_43, edi_2)
            int32_t var_148_8 = eax_37
            int32_t* edi_4 = edi_2 * 0xe0 + *eax_43
            var_14_1.b = 2
            char* var_9c
            char* eax_46 = *sub_63df30(&var_9c, "Item-%d")
            char* var_94_1 = eax_46
            void* var_90_1 = &edi_4[2]
            
            if (eax_46 != 0)
                var_90_1 = &edi_4[2]
            else
                eax_46 = &data_801800
                var_94_1 = &data_801800
            
            char* esi_11 = eax_46
            void* ecx_39 = &esi_11[1]
            
            do
                eax_46.b = *esi_11
                esi_11 = &esi_11[1]
            while (eax_46.b != 0)
            
            int32_t eax_47 = sub_687730(esi_11 - ecx_39 + 1)
            *var_90_1 = eax_47
            memcpy(eax_47, var_94_1, esi_11 - ecx_39 + 1)
            var_14_1.b = 3
            
            if (data_cf65bc != 0)
                char* eax_48 = var_9c
                
                if (eax_48 != 0 && *eax_48 != 0)
                    char* eax_49 = sub_63d4e0(&var_9c)
                    int32_t temp6_1 = *(eax_49 + 4)
                    *(eax_49 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
            
            var_14_1.b = 0
            edi_4[0x36] = eax_37
            int32_t eax_51 = *(eax_36 + 4)
            
            if (eax_51 == 3)
                int32_t* eax_52 = sub_5af880(eax_36)
                edi_4[0x10] = eax_36
                *(edi_4 + 0x10) = data_800404
                __builtin_memcpy(&edi_4[8], 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                    0x14)
                *(edi_4 + 0x10) = (xmm2_3 * xmm1_14 f+ var_3c_1.d).q
                edi_4[6] = xmm4_1 * xmm1_14 + xmm7_1
                
                if (*(*eax_52 + 0x1c) != 1)
                    *edi_4 = 1
                else
                    *(edi_4 + 0x39) = 1
                    *edi_4 = 4
            else if (eax_51 == 2)
                *edi_4 = 3
                edi_4[0x18] = eax_36
            else if (eax_51 == 0x1e)
                *edi_4 = 2
                edi_4[0x22] = eax_36
            else if (eax_51 == 0x19)
                *edi_4 = 8
                edi_4[0x34] = eax_36
            
            int32_t* ecx_42
            ecx_42.b = 1
            data_147df94 = edi_2
            data_147ef94 = 1
            sub_744790(ecx_42)
            sub_6f6b00(data_147df90)
            sub_73e3e0()
            int32_t var_14_3 = 4
        else
            int32_t var_14_2 = 1
        
        if (data_cf65bc != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_2)
                int32_t temp3_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(result, *(result + 0xc) + 0x10)
    else if (result == 5)
        sub_743630()
    
    goto label_74352a

result = arg1[1]
char const* const var_150_1
int32_t var_14c_1
char const* const var_148_1
char* ecx_1

if (result == 0x2e)
    int32_t* ecx = data_147df90
    
    if (ecx[1] == 0x20)
        int32_t eax_3 = sub_5af880(ecx)
        int32_t esi_1 = data_147ef94
        int32_t esi_2 = esi_1 - 1
        
        if (esi_1 - 1 s>= 0)
            int32_t temp1_1
            
            do
                int32_t var_14c_2 = (&data_147df94)[esi_2]
                int32_t* eax_4 = sub_69dd00(data_1777518, 0)
                sub_6fb870(eax_4, eax_4, eax_3, var_14c_2, nullptr)
                temp1_1 = esi_2
                esi_2 -= 1
            while (temp1_1 - 1 s>= 0)
        
        int32_t* ecx_4 = data_147df90
        data_147ef94 = 0
        sub_6f6b00(ecx_4)
        sub_73e3e0()
        char* ecx_5
        ecx_5.b = 1
        sub_744790(ecx_5)
        goto label_74352a
    
    var_148_1 = "FabDefGet"
    var_14c_1 = 0xeb
    var_150_1 = "C:\x\ax2017\Engine\FabDef.cpp"
    ecx_1 = "ptr->assetType == ASSET_TYPE_FAB"
else if (result != 0x1b)
    if (result == 0xd)
    label_742bfb:
        data_1512420 = 0
        result.b = 1
        goto label_74352f
    
    if (result == 9 && GetKeyState(0x11) s< 0 && GetKeyState(0x10) s< 0)
    label_742c38:
        sub_6fdc80()
    label_74352a:
        result.b = 0
    label_74352f:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    int16_t eax_8
    
    if (arg1[1] == 8)
        eax_8 = GetKeyState(0x11)
    
    if (arg1[1] == 8 && eax_8 s< 0)
        goto label_742c38
    
    int16_t eax_9
    
    if (arg1[1] == 9)
        eax_9 = GetKeyState(0x11)
    
    if (arg1[1] == 9 && eax_9 s< 0)
        sub_6fdce0()
        goto label_74352a
    
    if (arg1[1] == 0x4f)
        result = GetKeyState(0x11)
    
    if (arg1[1] != 0x4f || result.w s>= 0)
        int16_t eax_18
        
        if (arg1[1] == 0x4b)
            eax_18 = GetKeyState(0x11)
        
        char var_7d_1
        void* eax_22
        void* ecx_15
        
        if (arg1[1] == 0x4b && eax_18 s< 0)
            int32_t eax_19
            int32_t edx_3
            eax_19, edx_3 = sub_6d1020(data_147df90, "camera")
            void var_118
            int128_t* eax_21 = sub_6d10d0(&var_118, edx_3, data_147df90, &var_118, eax_19)
            int128_t var_5c_1 = *eax_21
            eax_22 = data_cf65b8
            int128_t var_4c = eax_21[1]
            var_7d_1 = *(eax_22 + 0x39)
            ecx_15 = &var_4c:4
        label_742e17:
            *(eax_22 + 0x39) = 0
            sub_743800(ecx_15)
            *(data_cf65b8 + 0x39) = var_7d_1
            goto label_74352a
        
        int16_t eax_23
        
        if (arg1[1] == 0x4c)
            eax_23 = GetKeyState(0x11)
        
        if (arg1[1] == 0x4c && eax_23 s< 0)
            int32_t eax_24
            int32_t edx_4
            eax_24, edx_4 = sub_6d1020(data_147df90, "env_probe")
            void var_138
            int128_t* eax_26 = sub_6d10d0(&var_138, edx_4, data_147df90, &var_138, eax_24)
            int128_t var_7c_1 = *eax_26
            eax_22 = data_cf65b8
            int128_t var_6c = eax_26[1]
            var_7d_1 = *(eax_22 + 0x39)
            ecx_15 = &var_6c:4
            goto label_742e17
        
        result = arg1[1]
        
        if (result == 0x4c)
            data_cafe88 = 1
            goto label_74352a
        
        int16_t eax_27
        char* ecx_20
        
        if (result == 0x59)
            eax_27, ecx_20 = GetKeyState(0x11)
        
        if (result == 0x59 && eax_27 s< 0)
            if (data_14ff398 s< data_14ff39c)
                sub_6ee530(ecx_20)
                int32_t eax_29 = data_14ff398 + 1
                data_14ff398 = eax_29
                memcpy(&data_147df94, &(&data_147df90)[eax_29 * 0x402], 0x1004)
                int32_t* eax_30 = data_147df90
                sub_69d3e0(eax_30, **eax_30, *(&data_147ef94)[eax_29 * 0x402], data_1777518)
                sub_6f6b00(data_147df90)
                sub_73e3e0()
            
            goto label_74352a
        
        char* ecx_24
        
        if (arg1[1] == 0x5a)
            result, ecx_24 = GetKeyState(0x11)
        
        if (arg1[1] == 0x5a && result.w s< 0)
            if (data_14ff398 s<= 1)
                result.b = 1
                goto label_74352f
            
            sub_6ee530(ecx_24)
            int32_t eax_32 = data_14ff398 - 1
            data_14ff398 = eax_32
            memcpy(&data_147df94, &(&data_147df90)[eax_32 * 0x402], 0x1004)
            int32_t* eax_33 = data_147df90
            sub_69d3e0(eax_33, **eax_33, *(&data_147ef94)[eax_32 * 0x402], data_1777518)
            sub_6f6b00(data_147df90)
            sub_73e3e0()
            result.b = 1
            goto label_74352f
        
        int16_t eax_34
        
        if (arg1[1] == 0x4a)
            eax_34 = GetKeyState(0x11)
        
        if (arg1[1] == 0x4a && eax_34 s< 0)
            sub_740d50()
            char* ecx_28
            ecx_28.b = 1
            sub_744790(ecx_28)
            goto label_74352a
        
        if (arg1[1] == 0x54)
            result = GetKeyState(0x11)
        
        if (arg1[1] == 0x54 && result.w s< 0)
            if (data_147ef94 s<= 0)
                result.b = 1
                goto label_74352f
            
            if (data_1512420 != 0)
                goto label_742bfb
            
            data_1512420 = 2
            sub_73eb30()
            result.b = 1
            goto label_74352f
        
        result = arg1[1]
        
        if (result != 0x57)
            if (result != 0x45)
                if (result != 0x52)
                    if (result != 0x51)
                        if (result == 0x53)
                            result = GetKeyState(0x11)
                            
                            if (result.w s< 0)
                                char* ecx_29
                                result, ecx_29 = GetKeyState(0x10)
                                
                                if (result.w s< 0)
                                    sub_6fa410(ecx_29)
                                    goto label_74352a
                    else if (data_1512420 != 0)
                        data_1512420 = 1
                        result.b = 1
                        goto label_74352f
                else if (data_1512420 != 0
                        && ((*(data_147ac28 + 0x1c) & 2) == 0 || *(data_cf65b4 + 0x18) == 0))
                    data_1512420 = 4
                    result.b = 1
                    goto label_74352f
            else if (data_1512420 != 0
                    && ((*(data_147ac28 + 0x1c) & 2) == 0 || *(data_cf65b4 + 0x18) == 0))
                data_1512420 = 3
                result.b = 1
                goto label_74352f
        else if (data_1512420 != 0
                && ((*(data_147ac28 + 0x1c) & 2) == 0 || *(data_cf65b4 + 0x18) == 0))
            data_1512420 = 2
            result.b = 1
            goto label_74352f
        
        char* ecx_30
        
        if (arg1[1] == 0x53)
            result, ecx_30 = GetKeyState(0x11)
        
        if (arg1[1] == 0x53 && result.w s< 0)
            sub_6f9e80(ecx_30)
            goto label_74352a
        
        if (arg1[1] == 0x41)
            result = GetKeyState(0x11)
        
        if (arg1[1] != 0x41 || result.w s>= 0)
            if (arg1[1] != 0x44)
                goto label_74352a
        else if (data_1512420 == 0 || arg1[1] != 0x44)
            goto label_74352a
        
        if (GetKeyState(0x11).w s< 0 && data_1512420 == 0)
            data_147ef94 = 0
            sub_73e3e0()
        
        goto label_74352a
    
    if (data_147ef94 != 1)
        goto label_74352a
    
    int32_t* ecx_8 = data_147df90
    
    if (ecx_8[1] == 0x20)
        int32_t* ecx_10 = data_147df94 * 0xe0 + *sub_5af880(ecx_8)
        int32_t eax_11 = *ecx_10
        int32_t esi_5
        
        if (eax_11 == 2)
            esi_5 = ecx_10[0x22]
        label_742cd6:
            
            if (sub_6f2a60(ecx_10).b != 0)
                int32_t* ecx_11 = data_cf65b8
                *((data_147dec0 << 2) + &data_147dcc0) = esi_5
                int32_t eax_15 = data_147dec0 + 1
                data_147dec0 = eax_15
                data_147dec4 = eax_15
                (*(*ecx_11 + 4))(eax_2)
                sub_6fda60()
                void* eax_17 = data_cf65b4
                HWND hWnd = data_147b084
                *(eax_17 + 0x1c) = 1
                *(eax_17 + 0x28) = 0
                *(eax_17 + 0x20) = 0
                *(eax_17 + 0x24) = esi_5
                SetFocus(hWnd)
            
            goto label_74352a
        
        result = eax_11 - 5
        
        if (eax_11 != 5)
            if (result != 3)
                goto label_74352a
            
            esi_5 = ecx_10[0x34]
            goto label_742cd6
        
        if (ecx_10[0x2c] s> 0)
            result = ecx_10[0x2a]
            esi_5 = *result
            
            if (esi_5 != 0)
                goto label_742cd6
            
            var_148_1 = "FabEditorInputHandle"
            var_14c_1 = 0x64c
            ecx_1 = "el.subFabs[0].subFab"
            var_150_1 = "C:\x\ax2017\Engine\Editor\FabEditor.cpp"
        else
            var_148_1 = "FabEditorInputHandle"
            var_14c_1 = 0x64b
            ecx_1 = "el.numSubFabs > 0"
            var_150_1 = "C:\x\ax2017\Engine\Editor\FabEditor.cpp"
    else
        var_148_1 = "FabDefGet"
        var_14c_1 = 0xeb
        var_150_1 = "C:\x\ax2017\Engine\FabDef.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_FAB"
else
    if (data_1512420 == 0)
        goto label_74352a
    
    int32_t* ecx_6 = data_147df90
    
    if (ecx_6[1] == 0x20)
        result = sub_5af880(ecx_6)
        int32_t i = 0
        uint32_t result_1 = result
        
        if (data_147ef94 s<= 0)
            goto label_742bfb
        
        void* esi_3 = &data_15003f0
        
        do
            int32_t edx_2 = (&data_147df94)[i] * 0xe0
            esi_3 += 0x24
            int32_t ecx_7 = *result
            i += 1
            *(edx_2 + ecx_7 + 0x10) = *(esi_3 - 0x24)
            *(edx_2 + ecx_7 + 0x20) = *(esi_3 - 0x14)
            *(edx_2 + ecx_7 + 0x30) = *(esi_3 - 4)
            result = result_1
        while (i s< data_147ef94)
        
        data_1512420 = 0
        result.b = 1
        goto label_74352f
    
    var_148_1 = "FabDefGet"
    var_14c_1 = 0xeb
    var_150_1 = "C:\x\ax2017\Engine\FabDef.cpp"
    ecx_1 = "ptr->assetType == ASSET_TYPE_FAB"

sub_63b870(result, &data_801800, ecx_1, var_150_1, var_14c_1, var_148_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
