// 函数: sub_668710
// 地址: 0x668710
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
float eax_1 = __security_cookie ^ &__saved_ebp
float var_14 = eax_1

if (data_ca9a74 != 0)
    if ((*(data_147ac28 + 0x1c) & 1) == 0 || *(data_cf65b4 + 0x18) == 0)
        if (data_ca9a78 != 1 && data_ca9a94 == 1)
            int32_t ecx
            ecx.b = 1
            sub_665770(ecx)
        
        eax_1 = sub_63b5f0("dragginf false")
        data_ca9a74 = 0
    else
        if (data_ca9a94 != 0)
            goto label_6687d7
        
        float var_b8
        eax_1 = sub_63c270(&var_b8)
        float xmm1_2 = data_ca9a7c - var_b8
        float var_b4
        float xmm0_2 = data_ca9a80 - var_b4
        
        if (not(50f > xmm1_2 * xmm1_2 + xmm0_2 * xmm0_2))
            data_ca9a94 = 1
        label_6687d7:
            
            if (data_c28c60 == 0 && data_c28c61 == 0)
                if (data_c28c62 == 0 || data_ca9a90 == 0xffffffff)
                    goto label_669824
                
                goto label_6687f5
            
            char const* const var_10c
            int32_t var_108
            char const* const var_104_1
            int128_t var_30
            int32_t eax_20
            char* ecx_2
            
            if (data_ca9a90 == 0xffffffff)
            label_669824:
                sub_63c270(&var_b8)
                int16_t eax_45 = GetKeyState(0x10)
                HWND eax_47
                
                if (eax_45 s< 0 && *(data_cf65b4 + 0x18) != 0)
                    eax_47 = GetFocus()
                
                if (eax_45 s< 0 && *(data_cf65b4 + 0x18) != 0
                        && (eax_47 == data_147b084 || eax_47 == 0))
                    float xmm7_17 = data_ca9a7c
                    uint32_t xmm4_37[0x4] = var_b4 f- data_ca9a80
                    int32_t eax_48 = data_ca9a8c
                    var_30:0xc.d = data_ca9a80 f- data_ca9a88
                    uint32_t xmm3_49[0x4] = var_b8 - xmm7_17
                    int32_t var_b0_3 = xmm4_37
                    float xmm6_23 = xmm7_17 f- data_ca9a84
                    int32_t var_a4_4 = xmm3_49
                    
                    if (eax_48 == 0)
                        int32_t xmm2_42 = _mm_and_ps(xmm3_49, 0x7fffffff)
                        
                        if (_mm_and_ps(xmm4_37, 0x7fffffff) f<= xmm2_42)
                            xmm4_37 = zx.o(0)
                            data_ca9a8c = 1
                            var_b0_3 = 0
                        else
                            data_ca9a8c = 2
                            xmm3_49 = zx.o(0)
                            var_a4_4 = 0
                    else if (eax_48 == 1)
                        xmm4_37 = zx.o(0)
                        var_b0_3 = 0
                    else if (eax_48 == 2)
                        xmm3_49 = zx.o(0)
                        var_a4_4 = 0
                    
                    eax_20 = data_ca9a78
                    float xmm5_21 = xmm3_49[0] + xmm6_23
                    float xmm6_25 = xmm4_37[0] f+ var_30:0xc.d
                    
                    if (eax_20 != 0)
                        if (eax_20 != 2)
                            float xmm2_43 = 1f f/ data_c27c48
                            data_c27c4c = data_c27c4c - xmm2_43 * xmm5_21
                            data_c27c50 = data_c27c50 - xmm2_43 * xmm6_25
                            goto label_6699d1
                        
                        var_104_1 = "UI2DraggingUpdate"
                        var_108 = 0x3b39
                        goto label_669ba3
                    
                    float xmm1_81 = 1f f/ data_c27c48
                    float var_b4_1 = xmm1_81 * xmm6_25
                    var_b8 = xmm1_81 * xmm5_21
                    sub_667d10()
                    xmm7_17 = data_ca9a7c
                    xmm3_49 = var_a4_4
                    xmm4_37 = var_b0_3
                label_6699d1:
                    float xmm4_38 = xmm4_37 f+ data_ca9a80
                    data_ca9a75 = 1
                    data_ca9a88 = xmm4_38
                    data_ca9a84 = xmm3_49 f+ xmm7_17
                    void* eax_49 = sub_6656f0()
                    CookieCheckFunction(eax_49)
                    return eax_49
                
                float xmm3_51 = var_b8
                eax_20 = data_ca9a78
                data_ca9a8c = 0
                float xmm3_52 = xmm3_51 f- data_ca9a84
                float xmm4_40 = var_b4 f- data_ca9a88
                
                if (eax_20 != 0)
                    if (eax_20 == 2)
                        var_104_1 = "UI2DraggingUpdate"
                        var_108 = 0x3b4c
                    label_669ba3:
                        ecx_2 = "Halt"
                        var_10c = "C:\x\ax2017\Engine\UI2.cpp"
                    label_669bb2:
                        sub_63b870(eax_20, &data_801800, ecx_2, var_10c, var_108, var_104_1)
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    float xmm2_45 = 1f f/ data_c27c48
                    data_c27c4c = data_c27c4c - xmm2_45 * xmm3_52
                    data_c27c50 = data_c27c50 - xmm2_45 * xmm4_40
                else
                    float xmm1_85 = 1f f/ data_c27c48
                    var_30:0xc.d = xmm1_85 * xmm4_40
                    var_30:8.d = xmm1_85 * xmm3_52
                    sub_667d10()
            else
            label_6687f5:
                int16_t eax_4 = GetKeyState(0x20)
                HWND eax_6
                
                if (eax_4 s< 0 && *(data_cf65b4 + 0x18) != 0)
                    eax_6 = GetFocus()
                
                if (eax_4 s< 0 && *(data_cf65b4 + 0x18) != 0
                        && (eax_6 == data_147b084 || eax_6 == 0))
                    goto label_669824
                
                bool cond:2_1 = data_c28c62 == 0
                var_30 = data_ca9a98
                
                if (not(cond:2_1) && GetKeyState(0x11) s< 0 && *(data_cf65b4 + 0x18) != 0)
                    HWND eax_9 = GetFocus()
                    
                    if (eax_9 == data_147b084 || eax_9 == 0)
                        var_30 = data_ca9aa8
                
                eax_20 = data_ca9a90
                
                if (eax_20 u> 7)
                    var_104_1 = "UI2DraggingUpdate"
                    var_108 = 0x3b84
                    goto label_669ba3
                
                float var_a0_1
                float var_9c_1
                float var_94_1
                int32_t xmm0_7
                int32_t xmm1_6
                
                switch (eax_20)
                    case 0
                        float xmm1_5 = var_30:8.d
                        
                        if (xmm1_5 f< var_30.d)
                        label_6688b9:
                            var_104_1 = "RectBottomRight"
                            var_108 = 0x12d
                            var_10c = "C:\x\ax2017\Engine\Rect.cpp"
                            ecx_2 = "RectIsNormalized(r)"
                            goto label_669bb2
                        
                        float xmm0_6 = var_30:0xc.d
                        
                        if (xmm0_6 f< var_30:4.d)
                            goto label_6688b9
                        
                        var_9c_1 = xmm1_5
                        xmm1_6 = 0xbf800000
                        var_a0_1 = xmm0_6
                        xmm0_7 = -0x40800000
                        var_94_1 = -1f
                        goto label_668a39
                    case 1
                        float xmm1_7 = var_30:8.d
                        
                        if (xmm1_7 f< var_30.d)
                            goto label_6688b9
                        
                        float xmm0_8 = var_30:0xc.d
                        
                        if (xmm0_8 f< var_30:4.d)
                            goto label_6688b9
                        
                        var_a0_1 = xmm0_8
                        xmm0_7 = 0x80000000
                        var_9c_1 = xmm1_7
                        xmm1_6 = 0xbf800000
                        var_94_1 = -0f
                        goto label_668a39
                    case 2
                        xmm1_6 = 0xbf800000
                        var_9c_1 = var_30:8.d
                        var_a0_1 = var_30:4.d
                        xmm0_7 = 0x3f800000
                        var_94_1 = 1f
                    label_668a39:
                        float var_98_1 = xmm1_6
                        float var_bc_1 = xmm0_7
                        
                        if (GetKeyState(0x12) s< 0 && *(data_cf65b4 + 0x18) != 0)
                            HWND eax_12 = GetFocus()
                            
                            if (eax_12 == data_147b084 || eax_12 == 0)
                                float xmm0_20 = xmm1_6
                                var_98_1 = xmm0_20 + xmm0_20
                                var_9c_1 = (var_30:8.d f+ var_30.d) * 0.5f
                                var_94_1 = var_bc_1 + var_bc_1
                                var_a0_1 = (var_30:0xc.d f+ var_30:4.d) * 0.5f
                        
                        sub_63c270(&var_b8)
                        int16_t eax_13
                        int32_t edx_1
                        eax_13, edx_1 = GetKeyState(0x10)
                        float var_ac_1
                        float var_50
                        float xmm1_22
                        
                        if (eax_13 s>= 0 || *(data_cf65b4 + 0x18) == 0)
                        label_668bf3:
                            float xmm0_34 = var_b8 f- data_ca9a7c
                            float xmm0_36 = var_b4 f- data_ca9a80
                            float xmm1_23[0x4] = *sub_668650(&var_50, edx_1, &var_30, &var_50)
                            xmm1_22 = xmm0_34 / (_mm_shuffle_ps(xmm1_23, xmm1_23, 0xaa) f- xmm1_23)
                                * var_98_1 + 1f
                            var_ac_1 = xmm0_36 / (_mm_shuffle_ps(xmm1_23, xmm1_23, 0xff)
                                - _mm_shuffle_ps(xmm1_23, xmm1_23, 0x55)) * var_94_1 + 1f
                        else
                            HWND eax_15
                            eax_15, edx_1 = GetFocus()
                            
                            if (eax_15 != data_147b084 && eax_15 != 0)
                                goto label_668bf3
                            
                            int32_t eax_16 = data_ca9a90
                            
                            if (eax_16 != 0 && eax_16 != 2 && eax_16 != 5 && eax_16 != 7)
                                goto label_668bf3
                            
                            float xmm3_3 = (var_9c_1 f- data_c27c4c) f* data_c27c48
                            float xmm4_3 = (var_a0_1 f- data_c27c50) f* data_c27c48
                            float xmm1_16 = data_ca9a7c - xmm3_3
                            float xmm2_2 = var_b8 - xmm3_3
                            float xmm0_25 = var_b4 - xmm4_3
                            float xmm1_18 = data_ca9a80 - xmm4_3
                            xmm1_22 = sub_4ac580(ebp_1, xmm0_25 * xmm0_25 + xmm2_2 * xmm2_2)
                                / sub_4ac580(ebp_1, xmm1_18 * xmm1_18 + xmm1_16 * xmm1_16)
                            var_ac_1 = xmm1_22
                        
                        float xmm0_40 = *(data_147abe8 + 0x2c)
                        eax_20 = data_ca9a78
                        
                        if (eax_20 != 0)
                            if (eax_20 == 2)
                                var_104_1 = "UI2DraggingUpdate"
                                var_108 = 0x3c3c
                                goto label_669ba3
                        else
                            float var_f0
                            float var_40
                            
                            if (data_c28c62 == eax_20.b)
                            label_669303:
                                int32_t i = 0
                                int32_t i_1 = 0
                                
                                if (data_c28c58 s> 0)
                                    int32_t* esi_3 = &data_ca9abc
                                    int32_t* var_c0_4 = &data_ca9abc
                                    
                                    do
                                        void* eax_35 = sub_665600((&data_c27c58)[i])
                                        sub_64c550(eax_35 + 0x14, xmm0_40, &var_50)
                                        float xmm3_29 = (esi_3[-1] f- var_9c_1) * xmm1_22 + var_9c_1
                                        float xmm1_53 = (esi_3[1] f- var_9c_1) * xmm1_22 + var_9c_1
                                        float xmm2_34 = (*esi_3 - var_a0_1) * var_ac_1 + var_a0_1
                                        float xmm0_62 = (esi_3[2] f- var_a0_1) * var_ac_1 + var_a0_1
                                        float xmm5_16
                                        
                                        if (xmm1_53 <= xmm3_29)
                                            xmm5_16 = xmm1_53
                                            xmm1_53 = xmm3_29
                                        else
                                            xmm5_16 = xmm3_29
                                        
                                        float xmm4_29
                                        
                                        if (xmm0_62 <= xmm2_34)
                                            xmm4_29 = xmm0_62
                                            xmm0_62 = xmm2_34
                                        else
                                            xmm4_29 = xmm2_34
                                        
                                        float xmm3_31
                                        
                                        if (0f <= xmm5_16)
                                            xmm3_31 = xmm5_16 + 0.5f
                                        else
                                            xmm3_31 = xmm5_16 - 0.5f
                                        
                                        int32_t esi_4 = int.d(xmm3_31)
                                        float xmm7_12 = _mm_cvtepi32_ps(zx.o(esi_4))
                                        float xmm3_33
                                        
                                        if (0f <= xmm4_29)
                                            xmm3_33 = xmm4_29 + 0.5f
                                        else
                                            xmm3_33 = xmm4_29 - 0.5f
                                        
                                        int32_t edi_3 = int.d(xmm3_33)
                                        float xmm1_54 = xmm1_53 - xmm5_16
                                        var_30:0xc.d = edi_3
                                        float xmm0_63 = xmm0_62 - xmm4_29
                                        float xmm3_35 = _mm_cvtepi32_ps(zx.o(edi_3))
                                        float xmm1_55
                                        
                                        if (0f <= xmm1_54)
                                            xmm1_55 = xmm1_54 + 0.5f
                                        else
                                            xmm1_55 = xmm1_54 - 0.5f
                                        
                                        float xmm1_57 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_55)))
                                        float xmm0_64
                                        
                                        if (0f <= xmm0_63)
                                            xmm0_64 = xmm0_63 + 0.5f
                                        else
                                            xmm0_64 = xmm0_63 - 0.5f
                                        
                                        float xmm1_58 = xmm1_57 + xmm7_12
                                        void* eax_38 = eax_35
                                        float xmm0_67 =
                                            _mm_cvtepi32_ps(zx.o(int.d(xmm0_64))) + xmm3_35
                                        float xmm0_69 = xmm7_12 - var_50
                                        int32_t* eax_42
                                        
                                        if (*(eax_38 + 0x15f8) != 6)
                                            void var_90
                                            int128_t* eax_43 =
                                                sub_67d460(eax_38 + 0x554, xmm0_40, &var_90)
                                            float xmm6_18 = _mm_cvtepi32_ps(zx.o(esi_4))
                                            float xmm7_15 = *(eax_43 + 8)
                                            float xmm5_19 = *eax_43
                                            float xmm4_34 = *(eax_43 + 0xc)
                                            float xmm2_40 = *(eax_43 + 4)
                                            float var_70
                                            eax_42 = &var_70
                                            float xmm6_21 = (xmm6_18 * xmm7_15 - xmm1_58 * xmm5_19)
                                                / ((1f - xmm5_19) * xmm7_15
                                                - (1f - xmm7_15) * xmm5_19)
                                            float xmm3_43 = _mm_cvtepi32_ps(zx.o(edi_3)) * xmm4_34
                                            var_70 = xmm6_21
                                            float xmm3_45 = (xmm3_43 - xmm0_67 * xmm2_40) / (
                                                (1f - xmm2_40) * xmm4_34 - (1f - xmm4_34) * xmm2_40)
                                            float var_6c_1 = xmm3_45
                                            float var_68_1 = (xmm1_58
                                                - _mm_cvtepi32_ps(zx.o(esi_4))) / (xmm7_15 - xmm5_19)
                                                + xmm6_21
                                            float var_64_1 = (xmm0_67
                                                - _mm_cvtepi32_ps(zx.o(edi_3))) / (xmm4_34 - xmm2_40)
                                                + xmm3_45
                                        else
                                            int32_t ecx_18 = *(eax_38 + 0x189c)
                                            
                                            if (ecx_18 != 0)
                                                int32_t esi_5 = 0
                                                
                                                do
                                                    char* eax_39 = sub_64e7a0(
                                                        *(eax_38 + (esi_5 << 2) + 0x179c))
                                                    sub_64c550(&eax_39[0x14], xmm0_40, &var_f0)
                                                    float xmm2_36 = var_f0
                                                    float xmm4_30[0x4] = var_f0.o
                                                    float xmm3_37 = xmm2_36 - xmm0_69
                                                    var_40.o = xmm4_30
                                                    float var_ec
                                                    float var_4c
                                                    float xmm6_13 = var_ec - (xmm3_35 - var_4c)
                                                    float xmm1_60 =
                                                        _mm_shuffle_ps(xmm4_30, xmm4_30, 0xaa)
                                                    float xmm4_31 =
                                                        _mm_shuffle_ps(xmm4_30, xmm4_30, 0xff)
                                                    var_40 = xmm3_37 - xmm2_36 + xmm2_36
                                                    float var_38 = xmm1_60 - xmm2_36 + xmm3_37
                                                        - xmm1_60 + var_38
                                                    float var_3c = xmm6_13 - var_ec + var_3c
                                                    float var_34 = xmm4_31 - var_ec + xmm6_13
                                                        - xmm4_31 + var_34
                                                    sub_667c30(&var_40, 0x76, eax_39, &var_40)
                                                    esi_5 += 1
                                                while (esi_5 != ecx_18)
                                                
                                                edi_3 = var_30:0xc.d
                                                eax_38 = eax_35
                                            
                                            void var_80
                                            int128_t* eax_41 =
                                                sub_67d460(eax_38 + 0x554, xmm0_40, &var_80)
                                            float xmm6_14 = _mm_cvtepi32_ps(zx.o(esi_4))
                                            float xmm7_13 = *(eax_41 + 8)
                                            float xmm5_18 = *eax_41
                                            float xmm4_32 = *(eax_41 + 0xc)
                                            float xmm2_38 = *(eax_41 + 4)
                                            float var_60
                                            eax_42 = &var_60
                                            float xmm6_17 = (xmm6_14 * xmm7_13 - xmm1_58 * xmm5_18)
                                                / ((1f - xmm5_18) * xmm7_13
                                                - (1f - xmm7_13) * xmm5_18)
                                            float xmm3_39 = _mm_cvtepi32_ps(zx.o(edi_3)) * xmm4_32
                                            var_60 = xmm6_17
                                            float xmm3_41 = (xmm3_39 - xmm0_67 * xmm2_38) / (
                                                (1f - xmm2_38) * xmm4_32 - (1f - xmm4_32) * xmm2_38)
                                            float var_5c_1 = xmm3_41
                                            float var_58_1 = (xmm1_58
                                                - _mm_cvtepi32_ps(zx.o(esi_4))) / (xmm7_13 - xmm5_18)
                                                + xmm6_17
                                            float var_54_1 = (xmm0_67
                                                - _mm_cvtepi32_ps(zx.o(edi_3))) / (xmm4_32 - xmm2_38)
                                                + xmm3_41
                                        
                                        sub_667c30(eax_42, 0x76, eax_35, eax_42)
                                        i = i_1 + 1
                                        esi_3 = &var_c0_4[4]
                                        i_1 = i
                                        var_c0_4 = esi_3
                                    while (i s< data_c28c58)
                            else
                                HWND eax_21 = GetKeyState(0x11)
                                
                                if (eax_21.w s>= 0)
                                label_6690be:
                                    char const* const var_10c_2
                                    int32_t var_108_2
                                    char const* const var_104_7
                                    char* ecx_11
                                    
                                    if (data_c28c58 != 1)
                                        var_104_7 = "UI2DraggingUpdate"
                                        var_108_2 = 0x3bb0
                                        var_10c_2 = "C:\x\ax2017\Engine\UI2.cpp"
                                        ecx_11 = "gUI2Editor.s.activeSetCount == 1"
                                    label_669b82:
                                        sub_63b870(eax_21, &data_801800, ecx_11, var_10c_2, 
                                            var_108_2, var_104_7)
                                        
                                        if (sub_63bc30() != 0)
                                            breakpoint
                                        
                                        sub_63bb00()
                                        noreturn
                                    
                                    char* eax_32 = sub_665600(data_c27c58)
                                    float xmm2_24 = (data_ca9ab8 - var_9c_1) * xmm1_22 + var_9c_1
                                    float xmm1_43 = (data_ca9ac0 - var_9c_1) * xmm1_22 + var_9c_1
                                    float xmm3_17 = (data_ca9abc - var_a0_1) * var_ac_1
                                    float xmm5_5 = (data_ca9ac4 - var_a0_1) * var_ac_1
                                    float xmm7_10
                                    
                                    if (xmm1_43 <= xmm2_24)
                                        xmm7_10 = xmm1_43
                                        xmm1_43 = xmm2_24
                                    else
                                        xmm7_10 = xmm2_24
                                    
                                    float xmm4_22
                                    
                                    if (xmm5_5 + var_a0_1 <= xmm3_17 + var_a0_1)
                                        xmm4_22 = xmm5_5
                                        xmm5_5 = xmm3_17
                                    else
                                        xmm4_22 = xmm3_17
                                    
                                    float xmm4_23 = xmm4_22 + var_a0_1
                                    float xmm5_7
                                    
                                    if (0 f<= xmm7_10)
                                        xmm5_7 = xmm7_10 + 0.5f
                                    else
                                        xmm5_7 = xmm7_10 - 0.5f
                                    
                                    int32_t esi_2 = int.d(xmm5_7)
                                    float xmm6_11 = _mm_cvtepi32_ps(zx.o(esi_2))
                                    float xmm5_9
                                    
                                    if (0f <= xmm4_23)
                                        xmm5_9 = xmm4_23 + 0.5f
                                    else
                                        xmm5_9 = xmm4_23 - 0.5f
                                    
                                    int32_t edi_2 = int.d(xmm5_9)
                                    float xmm1_44 = xmm1_43 - xmm7_10
                                    float xmm3_20 = var_a0_1 + xmm5_5 - xmm4_23
                                    float xmm5_11 = _mm_cvtepi32_ps(zx.o(edi_2))
                                    float xmm1_45
                                    
                                    if (0f <= xmm1_44)
                                        xmm1_45 = xmm1_44 + 0.5f
                                    else
                                        xmm1_45 = xmm1_44 - 0.5f
                                    
                                    float xmm1_47 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_45)))
                                    float xmm3_21
                                    
                                    if (0f <= xmm3_20)
                                        xmm3_21 = xmm3_20 + 0.5f
                                    else
                                        xmm3_21 = xmm3_20 - 0.5f
                                    
                                    eax_21 = sub_64c550(&eax_32[0x14], xmm0_40, &var_f0)
                                    float unused_1 = eax_21->unused
                                    float xmm0_54 = eax_21 - unused_1
                                    float xmm1_49 = eax_21
                                    float xmm5_14 = (float.s(esi_2) - unused_1) / xmm0_54
                                    float xmm4_26 = (xmm1_47 + xmm6_11 - unused_1) / xmm0_54
                                    float xmm0_56 = eax_21 - xmm1_49
                                    float xmm3_24 = (float.s(edi_2) - xmm1_49) / xmm0_56
                                    float xmm2_28 =
                                        (float.s(int.d(xmm3_21)) + xmm5_11 - xmm1_49) / xmm0_56
                                    
                                    if (xmm4_26 < xmm5_14 || xmm2_28 < xmm3_24)
                                        var_104_7 = "RectIntersect"
                                        var_108_2 = 0xe9
                                        var_10c_2 = "C:\x\ax2017\Engine\Rect.cpp"
                                        ecx_11 = "RectIsNormalized(r0)"
                                        goto label_669b82
                                    
                                    float xmm4_27 = __minss_xmmss_memss(xmm4_26, 0x3f800000)
                                    int32_t xmm2_29 = __minss_xmmss_memss(xmm2_28, 0x3f800000)
                                    int128_t xmm0_57 = zx.o(0)
                                    float xmm5_15 = _mm_max_ss(xmm5_14, 0)
                                    int32_t xmm3_25 = _mm_max_ss(xmm3_24, 0)
                                    float var_38_2 = xmm4_27
                                    int32_t var_34_2 = xmm2_29
                                    var_40 = xmm5_15
                                    int32_t var_3c_2 = xmm3_25
                                    
                                    if (not(xmm5_15 > xmm4_27) && not(xmm3_25 f> xmm2_29))
                                        xmm0_57 = var_40.o
                                    
                                    var_50.o = xmm0_57
                                    sub_667ca0(eax_32, &var_50)
                                else
                                    eax_21 = data_cf65b4
                                    
                                    if (eax_21->__offset(0x18).b == 0)
                                        goto label_6690be
                                    
                                    eax_21 = GetFocus()
                                    
                                    if (eax_21 != data_147b084 && eax_21 != 0)
                                        goto label_6690be
                                    
                                    if (data_c28c62 == 0)
                                        goto label_669303
                                    
                                    if (GetKeyState(0x11) s>= 0 || *(data_cf65b4 + 0x18) == 0)
                                        goto label_669303
                                    
                                    HWND eax_24 = GetFocus()
                                    
                                    if (eax_24 != data_147b084 && eax_24 != 0)
                                        goto label_669303
                                    
                                    char const* const var_10c_1
                                    int32_t var_108_1
                                    char const* const var_104_3
                                    char* ecx_5
                                    
                                    if (data_c28c58 != 1)
                                        var_104_3 = "UI2DraggingUpdate"
                                        var_108_1 = 0x3bba
                                        var_10c_1 = "C:\x\ax2017\Engine\UI2.cpp"
                                        ecx_5 = "gUI2Editor.s.activeSetCount == 1"
                                    label_669b52:
                                        sub_63b870(eax_24, &data_801800, ecx_5, var_10c_1, 
                                            var_108_1, var_104_3)
                                        
                                        if (sub_63bc30() != 0)
                                            breakpoint
                                        
                                        sub_63bb00()
                                        noreturn
                                    
                                    void* eax_25 = sub_665600(data_c27c58)
                                    float xmm4_7 = (data_ca9aa8.d - var_9c_1) * xmm1_22 + var_9c_1
                                    float xmm1_31 = (data_ca9aa8:8 f- var_9c_1) * xmm1_22 + var_9c_1
                                    float xmm3_8 = (data_ca9aa8:4 f- var_a0_1) * var_ac_1 + var_a0_1
                                    float xmm2_14 =
                                        (data_ca9aa8:0xc f- var_a0_1) * var_ac_1 + var_a0_1
                                    float xmm6_1
                                    
                                    if (xmm1_31 <= xmm4_7)
                                        xmm6_1 = xmm1_31
                                        xmm1_31 = xmm4_7
                                    else
                                        xmm6_1 = xmm4_7
                                    
                                    float xmm5_1
                                    
                                    if (xmm2_14 <= xmm3_8)
                                        xmm5_1 = xmm2_14
                                        xmm2_14 = xmm3_8
                                    else
                                        xmm5_1 = xmm3_8
                                    
                                    float xmm4_9
                                    
                                    if (0f <= xmm6_1)
                                        xmm4_9 = xmm6_1 + 0.5f
                                    else
                                        xmm4_9 = xmm6_1 - 0.5f
                                    
                                    float xmm7_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm4_9)))
                                    float xmm4_11
                                    
                                    if (0f <= xmm5_1)
                                        xmm4_11 = xmm5_1 + 0.5f
                                    else
                                        xmm4_11 = xmm5_1 - 0.5f
                                    
                                    float xmm1_32 = xmm1_31 - xmm6_1
                                    float xmm2_15 = xmm2_14 - xmm5_1
                                    float xmm4_13 = _mm_cvtepi32_ps(zx.o(int.d(xmm4_11)))
                                    float xmm1_33
                                    
                                    if (0f <= xmm1_32)
                                        xmm1_33 = xmm1_32 + 0.5f
                                    else
                                        xmm1_33 = xmm1_32 - 0.5f
                                    
                                    float xmm1_35 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_33)))
                                    float xmm2_16
                                    
                                    if (0f <= xmm2_15)
                                        xmm2_16 = xmm2_15 + 0.5f
                                    else
                                        xmm2_16 = xmm2_15 - 0.5f
                                    
                                    var_30.d = xmm7_2
                                    var_30:4.d = xmm4_13
                                    float xmm0_44 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_16)))
                                    var_30:8.d = xmm1_35 + xmm7_2
                                    var_30:0xc.d = xmm0_44 + xmm4_13
                                    int128_t* eax_30 = sub_67d460(eax_25 + 0x554, xmm0_40, &var_50)
                                    eax_24 = sub_64c550(eax_25 + 0x14, xmm0_40, &var_f0)
                                    float xmm2_19 = var_30:8.d
                                    float xmm5_2 = var_30.d
                                    float unused = eax_24->unused
                                    float xmm3_10 = eax_24 - unused
                                    float xmm3_12 = xmm3_10 f* *(eax_30 + 8) + unused
                                    float xmm6_4 = xmm3_10 f* *eax_30 + unused
                                    float xmm0_46 = eax_24
                                    float xmm4_15 = eax_24 - xmm0_46
                                    float var_a4_1 = xmm3_12
                                    float var_a8_4 = xmm6_4
                                    float xmm4_17 = xmm4_15 f* *(eax_30 + 0xc) + xmm0_46
                                    float xmm7_5 = xmm4_15 f* *(eax_30 + 4) + xmm0_46
                                    float var_b0_1 = xmm4_17
                                    float var_ac_3 = xmm7_5
                                    float xmm0_47
                                    float xmm1_37
                                    
                                    if (not(xmm2_19 < xmm5_2))
                                        xmm0_47 = var_30:0xc.d
                                        xmm1_37 = var_30:4.d
                                    
                                    if (xmm2_19 < xmm5_2 || xmm0_47 < xmm1_37)
                                        var_104_3 = "RectUnion"
                                        var_108_1 = 0xdb
                                        var_10c_1 = "C:\x\ax2017\Engine\Rect.cpp"
                                        ecx_5 = "RectIsNormalized(r0)"
                                        goto label_669b52
                                    
                                    float var_94_3
                                    
                                    if (xmm6_4 <= xmm5_2)
                                        xmm7_5 = var_ac_3
                                        var_94_3 = xmm6_4
                                    else
                                        var_94_3 = xmm5_2
                                    
                                    float var_a0_2
                                    
                                    if (xmm2_19 <= xmm3_12)
                                        xmm4_17 = var_b0_1
                                        var_a0_2 = xmm3_12
                                    else
                                        xmm7_5 = var_ac_3
                                        var_a0_2 = xmm2_19
                                    
                                    float var_98_2
                                    
                                    if (xmm7_5 <= xmm1_37)
                                        xmm5_2 = var_30.d
                                        var_98_2 = xmm7_5
                                    else
                                        xmm4_17 = var_b0_1
                                        var_98_2 = xmm1_37
                                    
                                    float var_9c_2
                                    
                                    if (xmm0_47 <= xmm4_17)
                                        xmm3_12 = var_a4_1
                                        var_9c_2 = xmm4_17
                                    else
                                        xmm6_4 = var_a8_4
                                        var_9c_2 = xmm0_47
                                    
                                    var_94_3 - xmm5_2
                                    float xmm1_39 = var_30:4.d
                                    eax_24:1.b = (var_94_3 == xmm5_2 ? 1 : 0) << 6
                                        | (is_unordered.d(var_94_3, xmm5_2) ? 1 : 0) << 2
                                        | (var_94_3 < xmm5_2 ? 1 : 0)
                                    bool p_2 = unimplemented  {test ah, 0x44}
                                    
                                    if (not(p_2))
                                        var_98_2 - xmm1_39
                                        xmm7_5 = var_ac_3
                                        eax_24:1.b = (var_98_2 == xmm1_39 ? 1 : 0) << 6
                                            | (is_unordered.d(var_98_2, xmm1_39) ? 1 : 0) << 2
                                            | (var_98_2 < xmm1_39 ? 1 : 0)
                                        bool p_4 = unimplemented  {test ah, 0x44}
                                        
                                        if (not(p_4))
                                            var_a0_2 - xmm2_19
                                            xmm6_4 = var_a8_4
                                            eax_24:1.b = (var_a0_2 == xmm2_19 ? 1 : 0) << 6
                                                | (is_unordered.d(var_a0_2, xmm2_19) ? 1 : 0) << 2
                                                | (var_a0_2 < xmm2_19 ? 1 : 0)
                                            bool p_6 = unimplemented  {test ah, 0x44}
                                            
                                            if (not(p_6))
                                                var_9c_2 - xmm0_47
                                                xmm7_5 = var_ac_3
                                                eax_24:1.b = (var_9c_2 == xmm0_47 ? 1 : 0) << 6
                                                    | (is_unordered.d(var_9c_2, xmm0_47) ? 1 : 0)
                                                    << 2 | (var_9c_2 < xmm0_47 ? 1 : 0)
                                                bool p_8 = unimplemented  {test ah, 0x44}
                                                
                                                if (not(p_8))
                                                    sub_667c30(&var_30, 0x76, eax_25, &var_30)
                                                    xmm0_47 = var_30:0xc.d
                                                    xmm2_19 = var_30:8.d
                                                    xmm1_39 = var_30:4.d
                                                    xmm5_2 = var_30.d
                                                    xmm3_12 = var_a4_1
                                                    xmm4_17 = var_b0_1
                                                    xmm6_4 = var_a8_4
                                                    xmm7_5 = var_ac_3
                                    
                                    float xmm2_20 = xmm2_19 - xmm5_2
                                    float xmm0_48 = xmm0_47 - xmm1_39
                                    var_40 = (xmm6_4 - xmm5_2) / xmm2_20
                                    float var_3c_1 = (xmm7_5 - xmm1_39) / xmm0_48
                                    float var_38_1 = (xmm3_12 - xmm5_2) / xmm2_20
                                    float var_34_1 = (xmm4_17 - xmm1_39) / xmm0_48
                                    sub_667ca0(eax_25, &var_40)
                    case 3
                        float xmm1_8 = var_30:8.d
                        
                        if (xmm1_8 f< var_30.d)
                            goto label_6688b9
                        
                        float xmm0_11 = var_30:0xc.d
                        
                        if (xmm0_11 f< var_30:4.d)
                            goto label_6688b9
                        
                        var_a0_1 = xmm0_11
                        xmm0_7 = 0xbf800000
                        var_9c_1 = xmm1_8
                        xmm1_6 = 0x80000000
                        var_94_1 = -1f
                        goto label_668a39
                    case 4
                        xmm1_6 = (zx.o(0)).d
                        var_9c_1 = var_30.d
                        var_a0_1 = var_30:4.d
                        xmm0_7 = 0x3f800000
                        var_94_1 = 1f
                        goto label_668a39
                    case 5
                        var_9c_1 = var_30.d
                        var_a0_1 = var_30:0xc.d
                        xmm0_7 = 0xbf800000
                        var_94_1 = -1f
                    label_668a34:
                        xmm1_6 = 0x3f800000
                        goto label_668a39
                    case 6
                        var_9c_1 = var_30.d
                        var_a0_1 = var_30:4.d
                        xmm0_7 = (zx.o(0)).d
                        var_94_1 = 0f
                        goto label_668a34
                    case 7
                        var_9c_1 = var_30.d
                        var_a0_1 = var_30:4.d
                        xmm0_7 = 0x3f800000
                        var_94_1 = 1f
                        goto label_668a34
            data_ca9a84 = var_b8
            data_ca9a88 = var_b4
            data_ca9a75 = 1
            void* eax_50 = sub_6656f0()
            CookieCheckFunction(eax_50)
            return eax_50

CookieCheckFunction(eax_1)
return eax_1
