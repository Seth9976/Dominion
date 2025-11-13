// 函数: sub_7461f0
// 地址: 0x7461f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
float i = __security_cookie ^ &__saved_ebp
float i_2 = i

if (data_1593c78 != 0)
    if ((*(data_147ac28 + 0x1c) & 1) != 0)
        i = data_cf65b4
    
    char const* const var_bc
    int32_t var_b8
    char const* const var_b4_1
    char* ecx_3
    
    if ((*(data_147ac28 + 0x1c) & 1) == 0 || *(i i+ 0x18) == 0)
        char* ecx
        
        if (data_1593c98 == 0 && data_1593c99 == 0 && data_151345c == 1)
            int16_t eax_21
            eax_21, ecx = GetKeyState(0x11)
            
            if (eax_21 s< 0)
                goto label_7472df
            
            i, ecx = GetKeyState(0x12)
            
            if (i.w s< 0)
                goto label_7472df
            
            int32_t* ecx_24 = data_1512450
            
            if (ecx_24[1] != 0x1e)
                var_b4_1 = "UIDefGet"
                var_b8 = 0x127
                var_bc = "C:\x\ax2017\Engine\UIDef.cpp"
                ecx_3 = "ptr->assetType == ASSET_TYPE_UI"
            label_74732e:
                sub_63b870(i, &data_801800, ecx_3, var_bc, var_b8, var_b4_1)
                
                if (sub_63bc30() == 0)
                    sub_63bb00()
                    noreturn
                
                breakpoint
            
            int32_t* eax_22 = sub_5af880(ecx_24)
            float var_98
            sub_63c270(&var_98)
            float xmm0_102 = 1f f/ data_1593c6c
            float var_94
            float xmm0_104 = xmm0_102 * var_94 f+ data_1593c74
            float xmm1_75 = xmm0_102 * var_98 f+ data_1593c70
            int32_t eax_23 = sub_744e90(data_151245c)
            i = eax_23 - 1
            
            if (eax_23 - 1 s< 0)
            label_7472cb:
                data_151345c = 0
                sub_74ac70()
            else
                int32_t edx_7 = *eax_22
                int32_t* ecx_29 = i i* 0x178 + 0x14 + edx_7
                
                while (true)
                    if (ecx_29[0xc].b == 0 && *(ecx_29 + 0x31) == 0)
                        int32_t xmm1_76 = ecx_29[-1]
                        int32_t xmm2_40 = ecx_29[1]
                        int32_t xmm4_41
                        int32_t xmm5_37
                        
                        if (not(xmm2_40 f< xmm1_76))
                            xmm4_41 = *ecx_29
                            xmm5_37 = ecx_29[2]
                        
                        if (xmm2_40 f< xmm1_76 || xmm5_37 f< xmm4_41)
                            var_b4_1 = "RectContains"
                            var_b8 = 0xa4
                            goto label_74731f
                        
                        if (not(xmm1_75 f< xmm1_76) && not(xmm0_104 f< xmm4_41)
                                && not(xmm2_40 f< xmm1_75) && xmm5_37 f>= xmm0_104)
                            if (i == 0xffffffff)
                                goto label_7472cb
                            
                            data_151245c = *(i i* 0x178 + edx_7)
                            break
                    
                    ecx_29 -= 0x178
                    float i_3 = i
                    i -= 1
                    
                    if (i_3 i- 1 s< 0)
                        goto label_7472cb
            
            sub_74ac70()
            goto label_7472df
        
    label_7472df:
        ecx.b = 1
        i = sub_744ce0(ecx)
        data_1593c78 = 0
    else
        if (data_1593c98 != 0)
            goto label_746292
        
        float var_78
        i = sub_63c270(&var_78)
        float xmm0_2 = data_1593c80 - var_78
        float var_74
        float xmm1_2 = data_1593c84 - var_74
        
        if (not(50f > xmm1_2 * xmm1_2 + xmm0_2 * xmm0_2))
            data_1593c98 = 1
        label_746292:
            int32_t* ecx_2 = data_1512450
            
            if (ecx_2[1] == 0x1e)
                void* eax_2 = sub_5af880(ecx_2)
                char ecx_4 = data_1513462
                
                if (data_1513460.b == 0 && data_1513460:1.b == 0)
                    if (ecx_4 == 0 || data_1593c94 == 0xffffffff)
                        goto label_7462ea
                    
                    goto label_74654f
                
                if (data_1593c94 == 0xffffffff)
                label_7462ea:
                    float var_5c
                    sub_63c270(&var_5c)
                    float var_58
                    
                    if (GetKeyState(0x10) s>= 0)
                        float xmm3_6 = var_5c
                        uint32_t eax_6 = data_1593c7c
                        data_1593c90 = 0
                        float xmm3_7 = xmm3_6 f- data_1593c88
                        float xmm4_4 = var_58 f- data_1593c8c
                        
                        if (eax_6 == 0)
                            float xmm1_9 = 1f f/ data_1593c6c
                            float var_84_1 = xmm1_9 * xmm4_4
                            float var_88 = xmm1_9 * xmm3_7
                            eax_6 = sub_745c40(&var_88)
                        else if (eax_6 != 2)
                            float xmm2_5 = 1f f/ data_1593c6c
                            data_1593c70 = data_1593c70 - xmm2_5 * xmm3_7
                            data_1593c74 = data_1593c74 - xmm2_5 * xmm4_4
                        
                        data_1593c88 = var_5c
                        data_1593c8c = var_58
                        CookieCheckFunction(eax_6)
                        return eax_6
                    
                    float xmm3_2 = data_1593c84 f- data_1593c8c
                    float xmm7_1 = data_1593c80
                    uint32_t xmm4_2[0x4] = var_58 f- data_1593c84
                    int32_t eax_4 = data_1593c90
                    float xmm6_2 = xmm7_1 f- data_1593c88
                    int32_t var_44_1 = xmm4_2
                    uint32_t xmm3_4[0x4] = var_5c - xmm7_1
                    int32_t var_3c_1 = xmm3_4
                    
                    if (eax_4 == 0)
                        int32_t xmm2_2 = _mm_and_ps(xmm3_4, 0x7fffffff)
                        
                        if (_mm_and_ps(xmm4_2, 0x7fffffff) f<= xmm2_2)
                            xmm4_2 = zx.o(0)
                            data_1593c90 = 1
                            var_44_1 = 0
                        else
                            data_1593c90 = 2
                            xmm3_4 = zx.o(0)
                            var_3c_1 = 0
                    else if (eax_4 == 1)
                        xmm4_2 = zx.o(0)
                        var_44_1 = 0
                    else if (eax_4 == 2)
                        xmm3_4 = zx.o(0)
                        var_3c_1 = 0
                    
                    uint32_t eax_5 = data_1593c7c
                    float xmm5_2 = xmm3_4[0] f+ xmm6_2
                    float xmm6_4 = xmm4_2[0] + xmm3_2
                    
                    if (eax_5 == 0)
                        float xmm1_5 = 1f f/ data_1593c6c
                        float var_7c_1 = xmm1_5 * xmm6_4
                        float var_80 = xmm1_5 * xmm5_2
                        eax_5 = sub_745c40(&var_80)
                        xmm7_1 = data_1593c80
                        xmm3_4 = var_3c_1
                        xmm4_2 = var_44_1
                    else if (eax_5 != 2)
                        float xmm2_3 = 1f f/ data_1593c6c
                        data_1593c70 = data_1593c70 - xmm2_3 * xmm5_2
                        data_1593c74 = data_1593c74 - xmm2_3 * xmm6_4
                    
                    data_1593c8c = xmm4_2 f+ data_1593c84
                    data_1593c88 = xmm3_4 f+ xmm7_1
                    CookieCheckFunction(eax_5)
                    return eax_5
                
            label_74654f:
                int128_t var_30 = data_1593c9c
                
                if (ecx_4 != 0 && GetKeyState(0x11) s< 0)
                    var_30 = data_1593cac
                
                i = data_1593c94
                
                if (i u> 7)
                    var_b4_1 = "DraggingUpdate"
                    var_b8 = 0x367
                    var_bc = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
                    ecx_3 = "Halt"
                else
                    int32_t xmm0_20 = (zx.o(0)).d
                    float var_48_1
                    float var_40_1
                    float var_38_1
                    float var_34_1
                    float xmm0_25
                    float xmm1_14
                    
                    switch (i)
                        case 0
                            float xmm1_13 = var_30:8.d
                            
                            if (not(xmm1_13 f< var_30.d))
                                float xmm0_21 = var_30:0xc.d
                                
                                if (xmm0_21 f< var_30:4.d)
                                    goto label_7465c5
                                
                                var_48_1 = xmm1_13
                                xmm1_14 = -1f
                                var_38_1 = xmm0_21
                                xmm0_20 = -0x40800000
                                var_40_1 = -1f
                                var_34_1 = -1f
                                goto label_746715
                            
                        label_7465c5:
                            var_b4_1 = "RectBottomRight"
                            var_b8 = 0x12d
                        label_74731f:
                            ecx_3 = "RectIsNormalized(r)"
                            var_bc = "C:\x\ax2017\Engine\Rect.cpp"
                        case 1
                            float xmm1_15 = var_30:8.d
                            
                            if (xmm1_15 f< var_30.d)
                                goto label_7465c5
                            
                            float xmm0_22 = var_30:0xc.d
                            
                            if (xmm0_22 f< var_30:4.d)
                                goto label_7465c5
                            
                            var_48_1 = xmm1_15
                            xmm1_14 = -1f
                            var_38_1 = xmm0_22
                            xmm0_20 = 0x80000000
                            var_40_1 = -1f
                            var_34_1 = -0f
                            goto label_746715
                        case 2
                            xmm1_14 = -1f
                            var_48_1 = var_30:8.d
                            var_38_1 = var_30:4.d
                            xmm0_20 = 0x3f800000
                            var_40_1 = -1f
                            var_34_1 = 1f
                        label_746715:
                            
                            if (GetKeyState(0x12) s< 0)
                                var_48_1 = (var_30:8.d f+ var_30.d) * 0.5f
                                var_38_1 = (var_30:0xc.d f+ var_30:4.d) * 0.5f
                                var_40_1 = xmm1_14 + xmm1_14
                                var_34_1 = xmm0_20 f+ xmm0_20
                            
                            float var_90
                            sub_63c270(&var_90)
                            float xmm0_33 = var_90
                            int16_t eax_9
                            int32_t edx_1
                            eax_9, edx_1 = GetKeyState(0x10)
                            int32_t eax_10
                            
                            if (eax_9 s< 0)
                                eax_10 = data_1593c94
                            
                            float var_8c
                            float var_3c_3
                            float xmm1_34
                            float xmm4_8
                            
                            if (eax_9 s< 0
                                    && (eax_10 == 0 || eax_10 == 2 || eax_10 == 5 || eax_10 == 7))
                                float xmm3_12 = (var_48_1 f- data_1593c70) f* data_1593c6c
                                float xmm4_7 = (var_38_1 f- data_1593c74) f* data_1593c6c
                                float xmm2_8 = data_1593c80 - xmm3_12
                                float xmm1_28 = xmm0_33 - xmm3_12
                                float xmm0_36 = var_8c - xmm4_7
                                float xmm2_10 = data_1593c84 - xmm4_7
                                xmm1_34 = sub_4ac580(ebp_1, xmm0_36 * xmm0_36 + xmm1_28 * xmm1_28)
                                    / sub_4ac580(ebp_1, xmm2_10 * xmm2_10 + xmm2_8 * xmm2_8)
                                xmm4_8 = xmm1_34
                                var_3c_3 = xmm1_34
                            else
                                float xmm1_36 = xmm0_33 f- data_1593c80
                                float xmm5_4 = var_8c f- data_1593c84
                                void var_a8
                                float xmm1_37[0x4] = *sub_744c10(&var_a8, edx_1, &var_30, &var_a8)
                                xmm1_34 = xmm1_36
                                    / (_mm_shuffle_ps(xmm1_37, xmm1_37, 0xaa) f- xmm1_37)
                                    * var_40_1 + 1f
                                xmm4_8 = xmm5_4 / (_mm_shuffle_ps(xmm1_37, xmm1_37, 0xff)
                                    - _mm_shuffle_ps(xmm1_37, xmm1_37, 0x55)) * var_34_1 + 1f
                                var_3c_3 = xmm4_8
                            
                            i = data_1593c7c
                            
                            if (i != 0)
                                if (i == 2)
                                    float xmm5_30 = (data_1593cbc - var_48_1) * xmm1_34 + var_48_1
                                    float xmm3_47 = (data_1593cc4 - var_48_1) * xmm1_34 + var_48_1
                                    float xmm1_72 = (data_1593cc0 - var_38_1) * xmm4_8
                                    float xmm2_36 = (data_1593cc8 - var_38_1) * xmm4_8
                                    float xmm6_22
                                    
                                    if (xmm3_47 <= xmm5_30)
                                        xmm6_22 = xmm3_47
                                        xmm3_47 = xmm5_30
                                    else
                                        xmm6_22 = xmm5_30
                                    
                                    float xmm4_39
                                    
                                    if (var_38_1 + xmm2_36 <= var_38_1 + xmm1_72)
                                        xmm4_39 = xmm2_36
                                        xmm2_36 = xmm1_72
                                    else
                                        xmm4_39 = xmm1_72
                                    
                                    float xmm4_40 = xmm4_39 + var_38_1
                                    float xmm5_32
                                    
                                    if (0f <= xmm6_22)
                                        xmm5_32 = xmm6_22 + 0.5f
                                    else
                                        xmm5_32 = xmm6_22 - 0.5f
                                    
                                    float xmm7_24 = _mm_cvtepi32_ps(zx.o(int.d(xmm5_32)))
                                    float xmm5_34
                                    
                                    if (0f <= xmm4_40)
                                        xmm5_34 = xmm4_40 + 0.5f
                                    else
                                        xmm5_34 = xmm4_40 - 0.5f
                                    
                                    float xmm3_48 = xmm3_47 - xmm6_22
                                    float xmm2_38 = xmm2_36 + var_38_1 - xmm4_40
                                    float xmm5_36 = _mm_cvtepi32_ps(zx.o(int.d(xmm5_34)))
                                    float xmm3_49
                                    
                                    if (0f <= xmm3_48)
                                        xmm3_49 = xmm3_48 + 0.5f
                                    else
                                        xmm3_49 = xmm3_48 - 0.5f
                                    
                                    float xmm3_51 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_49)))
                                    float xmm2_39
                                    
                                    if (0f <= xmm2_38)
                                        xmm2_39 = xmm2_38 + 0.5f
                                    else
                                        xmm2_39 = xmm2_38 - 0.5f
                                    
                                    i = int.d(xmm2_39)
                                    *(eax_2 + 0xc) = xmm7_24
                                    *(eax_2 + 0x10) = xmm5_36
                                    float xmm0_98 = _mm_cvtepi32_ps(zx.o(i))
                                    *(eax_2 + 0x14) = xmm3_51 + xmm7_24
                                    *(eax_2 + 0x18) = xmm0_98 + xmm5_36
                                
                            label_747160:
                                data_1593c88 = xmm0_33
                                data_1593c8c = var_8c
                                CookieCheckFunction(i)
                                return i
                            
                            if (data_1513462 == i.b)
                            label_746dfe:
                                i = 0f
                                float i_1 = 0f
                                
                                if (data_151345c s> 0)
                                    int32_t* esi_2 = &data_1593cc0
                                    
                                    do
                                        void* eax_15 = sub_744f10((&data_151245c)[i], nullptr)
                                        float xmm4_34 = (esi_2[-1] f- var_48_1) * xmm1_34 + var_48_1
                                        float xmm0_73 = (esi_2[1] f- var_48_1) * xmm1_34 + var_48_1
                                        float xmm3_32 = (*esi_2 - var_38_1) * var_3c_3 + var_38_1
                                        float xmm1_58 = (esi_2[2] f- var_38_1) * var_3c_3 + var_38_1
                                        float xmm6_17
                                        
                                        if (xmm0_73 <= xmm4_34)
                                            xmm6_17 = xmm0_73
                                            xmm0_73 = xmm4_34
                                        else
                                            xmm6_17 = xmm4_34
                                        
                                        float xmm5_25
                                        
                                        if (xmm1_58 <= xmm3_32)
                                            xmm5_25 = xmm1_58
                                            xmm1_58 = xmm3_32
                                        else
                                            xmm5_25 = xmm3_32
                                        
                                        float xmm3_34
                                        
                                        if (0f <= xmm6_17)
                                            xmm3_34 = xmm6_17 + 0.5f
                                        else
                                            xmm3_34 = xmm6_17 - 0.5f
                                        
                                        int32_t eax_16 = int.d(xmm3_34)
                                        float xmm3_36
                                        
                                        if (0f <= xmm5_25)
                                            xmm3_36 = xmm5_25 + 0.5f
                                        else
                                            xmm3_36 = xmm5_25 - 0.5f
                                        
                                        int32_t ecx_21 = int.d(xmm3_36)
                                        float xmm0_74 = xmm0_73 - xmm6_17
                                        float xmm1_59 = xmm1_58 - xmm5_25
                                        float xmm7_18 = _mm_cvtepi32_ps(zx.o(ecx_21))
                                        float xmm0_75
                                        
                                        if (0f <= xmm0_74)
                                            xmm0_75 = xmm0_74 + 0.5f
                                        else
                                            xmm0_75 = xmm0_74 - 0.5f
                                        
                                        float xmm3_38 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_75)))
                                        float xmm1_60
                                        
                                        if (0f <= xmm1_59)
                                            xmm1_60 = xmm1_59 + 0.5f
                                        else
                                            xmm1_60 = xmm1_59 - 0.5f
                                        
                                        float xmm5_26 = *(eax_15 + 0x98)
                                        esi_2 = &esi_2[4]
                                        float xmm4_35 = *(eax_15 + 0xa4)
                                        float xmm1_61 = float.s(eax_16)
                                        float xmm3_39 = xmm3_38 + xmm1_61
                                        float xmm2_33 = *(eax_15 + 0x9c)
                                        float xmm0_77 = float.s(int.d(xmm1_60)) + xmm7_18
                                        float xmm7_19 = *(eax_15 + 0xa0)
                                        float xmm6_21 = (xmm7_19 * xmm1_61 - xmm5_26 * xmm3_39)
                                            / ((1f - xmm5_26) * xmm7_19 - (1f - xmm7_19) * xmm5_26)
                                        *(eax_15 + 0x10) = xmm6_21
                                        float xmm3_43 = (xmm4_35 * float.s(ecx_21)
                                            - xmm2_33 * xmm0_77)
                                            / ((1f - xmm2_33) * xmm4_35 - (1f - xmm4_35) * xmm2_33)
                                        i = i_1 i+ 1
                                        i_1 = i
                                        *(eax_15 + 0x14) = xmm3_43
                                        *(eax_15 + 0x18) =
                                            (xmm3_39 - float.s(eax_16)) / (xmm7_19 - xmm5_26)
                                            + xmm6_21
                                        *(eax_15 + 0x1c) =
                                            (xmm0_77 - float.s(ecx_21)) / (xmm4_35 - xmm2_33)
                                            + xmm3_43
                                    while (i s< data_151345c)
                                
                                goto label_747160
                            
                            i = GetKeyState(0x11)
                            
                            if (i.w s< 0)
                                if (data_1513462 == 0)
                                    goto label_746dfe
                                
                                i = GetKeyState(0x11)
                                
                                if (i.w s>= 0)
                                    goto label_746dfe
                                
                                if (data_151345c == 1)
                                    void* eax_14 = sub_744f10(data_151245c, nullptr)
                                    float xmm4_20 = (data_1593cac.d - var_48_1) * xmm1_34 + var_48_1
                                    float xmm2_25 =
                                        (data_1593cac:8 f- var_48_1) * xmm1_34 + var_48_1
                                    float xmm1_50 =
                                        (data_1593cac:4 f- var_38_1) * var_3c_3 + var_38_1
                                    float xmm3_23 =
                                        (data_1593cac:0xc f- var_38_1) * var_3c_3 + var_38_1
                                    float xmm6_11
                                    
                                    if (xmm2_25 <= xmm4_20)
                                        xmm6_11 = xmm2_25
                                        xmm2_25 = xmm4_20
                                    else
                                        xmm6_11 = xmm4_20
                                    
                                    float xmm5_16
                                    
                                    if (xmm3_23 <= xmm1_50)
                                        xmm5_16 = xmm3_23
                                        xmm3_23 = xmm1_50
                                    else
                                        xmm5_16 = xmm1_50
                                    
                                    float xmm4_22
                                    
                                    if (0f <= xmm6_11)
                                        xmm4_22 = xmm6_11 + 0.5f
                                    else
                                        xmm4_22 = xmm6_11 - 0.5f
                                    
                                    i = int.d(xmm4_22)
                                    float xmm7_11 = _mm_cvtepi32_ps(zx.o(i))
                                    float xmm4_24
                                    
                                    if (0f <= xmm5_16)
                                        xmm4_24 = xmm5_16 + 0.5f
                                    else
                                        xmm4_24 = xmm5_16 - 0.5f
                                    
                                    float xmm2_26 = xmm2_25 - xmm6_11
                                    float xmm3_24 = xmm3_23 - xmm5_16
                                    float xmm2_27
                                    
                                    if (0f <= xmm2_26)
                                        xmm2_27 = xmm2_26 + 0.5f
                                    else
                                        xmm2_27 = xmm2_26 - 0.5f
                                    
                                    float xmm2_29 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_27)))
                                    float xmm3_25
                                    
                                    if (0f <= xmm3_24)
                                        xmm3_25 = xmm3_24 + 0.5f
                                    else
                                        xmm3_25 = xmm3_24 - 0.5f
                                    
                                    float xmm0_61 = *(eax_14 + 0x10)
                                    float xmm2_30 = xmm2_29 + xmm7_11
                                    float xmm4_26 = *(eax_14 + 0x18) - xmm0_61
                                    float var_68_2 = xmm2_30
                                    float xmm6_14 = xmm4_26 f* *(eax_14 + 0x98) + xmm0_61
                                    float xmm1_51 = float.s(int.d(xmm4_24))
                                    float xmm4_28 = xmm4_26 f* *(eax_14 + 0xa0) + xmm0_61
                                    float xmm0_62 = *(eax_14 + 0x14)
                                    float xmm5_18 = *(eax_14 + 0x1c) - xmm0_62
                                    float var_6c_2 = xmm1_51
                                    float xmm3_27 = float.s(int.d(xmm3_25)) + xmm1_51
                                    float xmm5_20 = xmm5_18 f* *(eax_14 + 0xa4) + xmm0_62
                                    float xmm7_14 = xmm5_18 f* *(eax_14 + 0x9c) + xmm0_62
                                    float xmm0_63 = float.s(i)
                                    float var_64_2 = xmm3_27
                                    
                                    if (not(xmm2_30 < xmm0_63) && not(xmm3_27 < xmm1_51))
                                        float var_44_5
                                        
                                        var_44_5 = xmm6_14 <= xmm0_63 ? xmm6_14 : xmm0_63
                                        
                                        float var_40_2
                                        
                                        var_40_2 = xmm2_30 <= xmm4_28 ? xmm4_28 : xmm2_30
                                        
                                        float var_34_3
                                        
                                        var_34_3 = xmm7_14 <= xmm1_51 ? xmm7_14 : xmm1_51
                                        
                                        float var_38_2
                                        
                                        var_38_2 = xmm3_27 <= xmm5_20 ? xmm5_20 : xmm3_27
                                        
                                        var_44_5 - xmm0_63
                                        i:1.b = (var_44_5 == xmm0_63 ? 1 : 0) << 6
                                            | (is_unordered.d(var_44_5, xmm0_63) ? 1 : 0) << 2
                                            | (var_44_5 < xmm0_63 ? 1 : 0)
                                        bool p_2 = unimplemented  {test ah, 0x44}
                                        
                                        if (not(p_2))
                                            var_34_3 - xmm1_51
                                            i:1.b = (var_34_3 == xmm1_51 ? 1 : 0) << 6
                                                | (is_unordered.d(var_34_3, xmm1_51) ? 1 : 0) << 2
                                                | (var_34_3 < xmm1_51 ? 1 : 0)
                                            bool p_4 = unimplemented  {test ah, 0x44}
                                            
                                            if (not(p_4))
                                                var_40_2 - xmm2_30
                                                i:1.b = (var_40_2 == xmm2_30 ? 1 : 0) << 6
                                                    | (is_unordered.d(var_40_2, xmm2_30) ? 1 : 0)
                                                    << 2 | (var_40_2 < xmm2_30 ? 1 : 0)
                                                bool p_6 = unimplemented  {test ah, 0x44}
                                                
                                                if (not(p_6))
                                                    var_38_2 - xmm3_27
                                                    i:1.b = (var_38_2 == xmm3_27 ? 1 : 0) << 6 | (
                                                        is_unordered.d(var_38_2, xmm3_27) ? 1 : 0) << 2
                                                        | (var_38_2 < xmm3_27 ? 1 : 0)
                                                    bool p_8 = unimplemented  {test ah, 0x44}
                                                    
                                                    if (not(p_8))
                                                        *(eax_14 + 0x10) = xmm7_11.o
                                        
                                        float xmm3_28 = *(eax_14 + 0x10)
                                        float xmm2_31 = *(eax_14 + 0x14)
                                        float xmm1_53 = *(eax_14 + 0x18) - xmm3_28
                                        float xmm0_69 = *(eax_14 + 0x1c) - xmm2_31
                                        *(eax_14 + 0x98) = (xmm6_14 - xmm3_28) / xmm1_53
                                        *(eax_14 + 0x9c) = (xmm7_14 - xmm2_31) / xmm0_69
                                        *(eax_14 + 0xa0) = (xmm4_28 - xmm3_28) / xmm1_53
                                        *(eax_14 + 0xa4) = (xmm5_20 - xmm2_31) / xmm0_69
                                        goto label_747160
                                    
                                    var_b4_1 = "RectUnion"
                                    var_b8 = 0xdb
                                    ecx_3 = "RectIsNormalized(r0)"
                                    var_bc = "C:\x\ax2017\Engine\Rect.cpp"
                                else
                                    var_b4_1 = "DraggingUpdate"
                                    var_b8 = 0x392
                                    var_bc = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
                                    ecx_3 = "gUI.s.activeSetCount == 1"
                            else if (data_151345c == 1)
                                void* eax_13 = sub_744f10(data_151245c, nullptr)
                                float xmm2_16 = (data_1593cc8 - var_38_1) * var_3c_3
                                float xmm4_15 = (data_1593cbc - var_48_1) * xmm1_34 + var_48_1
                                float xmm3_16 = (data_1593cc4 - var_48_1) * xmm1_34 + var_48_1
                                float xmm0_50 = (data_1593cc0 - var_38_1) * var_3c_3
                                float xmm6_5
                                
                                if (xmm3_16 <= xmm4_15)
                                    xmm6_5 = xmm3_16
                                    xmm3_16 = xmm4_15
                                else
                                    xmm6_5 = xmm4_15
                                
                                float xmm4_16
                                
                                if (var_38_1 + xmm2_16 <= var_38_1 + xmm0_50)
                                    xmm4_16 = xmm2_16
                                    xmm2_16 = xmm0_50
                                else
                                    xmm4_16 = xmm0_50
                                
                                float xmm1_43 = var_38_1 + xmm4_16
                                float xmm5_8
                                
                                if (0 f<= xmm6_5)
                                    xmm5_8 = xmm6_5 + 0.5f
                                else
                                    xmm5_8 = xmm6_5 - 0.5f
                                
                                i = int.d(xmm5_8)
                                float xmm5_10
                                
                                if (0f <= xmm1_43)
                                    xmm5_10 = xmm1_43 + 0.5f
                                else
                                    xmm5_10 = xmm1_43 - 0.5f
                                
                                float xmm3_17 = xmm3_16 - xmm6_5
                                float xmm2_18 = xmm2_16 + var_38_1 - xmm1_43
                                float xmm5_12 = _mm_cvtepi32_ps(zx.o(int.d(xmm5_10)))
                                float xmm3_18
                                
                                if (0f <= xmm3_17)
                                    xmm3_18 = xmm3_17 + 0.5f
                                else
                                    xmm3_18 = xmm3_17 - 0.5f
                                
                                float xmm7_5 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_18)))
                                float xmm2_19
                                
                                if (0f <= xmm2_18)
                                    xmm2_19 = xmm2_18 + 0.5f
                                else
                                    xmm2_19 = xmm2_18 - 0.5f
                                
                                float xmm1_44 = *(eax_13 + 0x14)
                                float xmm3_19 = *(eax_13 + 0x10)
                                float xmm0_53 = *(eax_13 + 0x1c) - xmm1_44
                                float xmm2_21 = *(eax_13 + 0x18) - xmm3_19
                                float xmm5_14 = (xmm5_12 - xmm1_44) / xmm0_53
                                float xmm6_9 =
                                    (float.s(int.d(xmm2_19)) + xmm5_12 - xmm1_44) / xmm0_53
                                float xmm7_8 = (xmm7_5 + float.s(i) - xmm3_19) / xmm2_21
                                *(eax_13 + 0x98) = (float.s(i) - xmm3_19) / xmm2_21
                                *(eax_13 + 0x9c) = xmm5_14
                                *(eax_13 + 0xa0) = xmm7_8
                                *(eax_13 + 0xa4) = xmm6_9
                                int32_t xmm1_45 = *(eax_13 + 0x98)
                                
                                if (not(xmm7_8 f< xmm1_45) && not(xmm6_9 < xmm5_14))
                                    float xmm7_9 = __minss_xmmss_memss(xmm7_8, 0x3f800000)
                                    int32_t xmm6_10 = __minss_xmmss_memss(xmm6_9, 0x3f800000)
                                    float xmm1_46 = _mm_max_ss(xmm1_45, 0)
                                    int32_t xmm5_15 = _mm_max_ss(xmm5_14, 0)
                                    float var_68_1 = xmm7_9
                                    int32_t var_64_1 = xmm6_10
                                    int32_t var_6c_1 = xmm5_15
                                    
                                    if (xmm1_46 > xmm7_9 || xmm5_15 f> xmm6_10)
                                        *(eax_13 + 0x98) = data_7ff530
                                    else
                                        *(eax_13 + 0x98) = xmm1_46.o
                                    
                                    goto label_747160
                                
                                var_b4_1 = "RectIntersect"
                                var_b8 = 0xe9
                                ecx_3 = "RectIsNormalized(r0)"
                                var_bc = "C:\x\ax2017\Engine\Rect.cpp"
                            else
                                var_b4_1 = "DraggingUpdate"
                                var_b8 = 0x389
                                var_bc = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
                                ecx_3 = "gUI.s.activeSetCount == 1"
                        case 3
                            float xmm1_16 = var_30:8.d
                            
                            if (xmm1_16 f< var_30.d)
                                goto label_7465c5
                            
                            xmm0_25 = var_30:0xc.d
                            
                            if (xmm0_25 f< var_30:4.d)
                                goto label_7465c5
                            
                            var_48_1 = xmm1_16
                            xmm1_14 = -0f
                            goto label_74666c
                        case 4
                            xmm0_20 = 0x3f800000
                            var_48_1 = var_30.d
                            var_38_1 = var_30:4.d
                            xmm1_14 = (zx.o(0)).d
                            var_40_1 = 0f
                            var_34_1 = 1f
                            goto label_746715
                        case 5
                            xmm1_14 = 1f
                            var_48_1 = var_30.d
                            xmm0_25 = var_30:0xc.d
                        label_74666c:
                            var_38_1 = xmm0_25
                            xmm0_20 = 0xbf800000
                            var_40_1 = xmm1_14
                            var_34_1 = -1f
                            goto label_746715
                        case 6
                            var_48_1 = var_30.d
                            var_38_1 = var_30:4.d
                            xmm1_14 = 1f
                            var_40_1 = 1f
                            var_34_1 = 0f
                            goto label_746715
                        case 7
                            xmm1_14 = 1f
                            var_48_1 = var_30.d
                            var_38_1 = var_30:4.d
                            xmm0_20 = 0x3f800000
                            var_40_1 = 1f
                            var_34_1 = 1f
                            goto label_746715
            else
                var_b4_1 = "UIDefGet"
                var_b8 = 0x127
                var_bc = "C:\x\ax2017\Engine\UIDef.cpp"
                ecx_3 = "ptr->assetType == ASSET_TYPE_UI"
            
            goto label_74732e

CookieCheckFunction(i)
return i
