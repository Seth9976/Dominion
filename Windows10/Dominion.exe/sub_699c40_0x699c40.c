// 函数: sub_699c40
// 地址: 0x699c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int128_t* edx
ecx, edx = __chkstk(0x1ba8)
__security_cookie
int32_t* arg_3c = arg2
char arg_c
int32_t* eax_2
eax_2.b = arg_c
char arg_34 = eax_2.b
int32_t* eax_4 = arg5
float arg_38 = arg3
int32_t ecx_4
int128_t xmm0_50

if (ecx == 0)
label_69a840:
    xmm0_50 = data_7ffcb8
    ecx_4 = 0
label_69a852:
    *arg1 = xmm0_50
    arg1[1].d = ecx_4
    CookieCheckFunction(arg1)
    return arg1

uint32_t eax_5 = zx.d(ecx.w)
char const* const var_24_1
int32_t var_20_1
char const* const var_1c_1
char* ecx_3

if (eax_5 u>= data_caf264)
label_69a927:
    var_1c_1 = "DataArray<struct UIState>::DataArrayGet"
    var_20_1 = 0x6d
    var_24_1 = "C:\x\ax2017\Engine\DataArray.h"
    ecx_3 = "DataArrayTryToGet(id) != NULL"
else
    eax_5 = data_caf260 + eax_5 * 0x438
    
    if (*(eax_5 + 0x434) != ecx)
        goto label_69a927
    
    bool cond:0_1 = *(eax_5 + 8) != 0
    *(eax_5 + 0x1c) = 1
    
    if (cond:0_1)
        goto label_69a840
    
    int32_t* ecx_2 = *(eax_5 + 4)
    
    if (ecx_2[1] == 0x1e)
        void* eax_7 = sub_5af880(ecx_2)
        void arg_2ec
        memset(&arg_2ec, 0, 0x189c)
        int32_t arg_1b88 = 1
        ecx_4 = 0
        int128_t arg_288 = *edx
        arg2:3.b = 0
        int32_t arg_20 = 0
        int128_t arg_298 = edx[1]
        __builtin_memset(&arg6, 0, 0x18)
        int32_t var_8_1 = 0
        int128_t arg_2a8 = edx[2]
        int128_t arg_2b8 = edx[3]
        int128_t arg_2c8 = edx[4]
        void* esi_1 = eax_7
        int128_t arg_2d8 = edx[5]
        uint32_t i_2 = 0
        int32_t arg_2e8 = 0xffffffff
        arg_c.d = 0
        
        if (*(esi_1 + 8) s<= 0)
            xmm0_50 = arg8
        else
            uint32_t i = 0
            int32_t* arg_14
            int32_t arg_28
            
            do
                int32_t* edi_2 = i * 0x178 + *esi_1
                arg_14 = edi_2
                uint32_t eax_8
                int32_t edx_3
                eax_8, edx_3 = sub_698630(i_2, i_2, eax_5, edi_2[2])
                int128_t* ecx_6 = &arg_288
                uint32_t esi_2 = eax_8
                uint32_t arg_2c = esi_2
                void arg_108
                void arg_168
                int128_t arg_1c8
                int128_t arg_1d8
                int128_t arg_1e8
                int128_t arg_1f8
                int128_t arg_208
                int128_t arg_218
                
                if (edi_2[1] != 6)
                    int128_t* eax_16 = sub_698fb0(&arg_168, edx_3, ecx_6, &arg_168)
                    arg_1c8 = *eax_16
                    arg_1d8 = eax_16[1]
                    arg_1e8 = eax_16[2]
                    arg_1f8 = eax_16[3]
                    arg_208 = eax_16[4]
                    arg_218 = eax_16[5]
                    float xmm0_32 = *(esi_2 + 0x10)
                    xmm0_32 - 0f
                    eax_16:1.b = (xmm0_32 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_32, 0f) ? 1 : 0) << 2 | (xmm0_32 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    int32_t eax_17
                    
                    if (not(p_2))
                        if (*(esi_2 + 8) s<= *esi_2)
                            eax_17.b = edi_2[0x11].b
                        else
                            eax_17.b = *(esi_2 + 0xc)
                    
                    if (p_2 || eax_17.b == 0)
                        void* eax_19 = edi_2[1] - 2
                        char const* const var_24_9
                        int32_t var_20_12
                        char const* const var_1c_16
                        char* ecx_47
                        
                        if (eax_19 u> 7)
                        label_69a657:
                            eax_19 = data_147abe8
                            int32_t edx_23 = *(esi_2 + 0xa0)
                            
                            if (eax_19 == 0)
                            label_69a8fa:
                                var_1c_16 = "GetGameData"
                                var_20_12 = 0x45
                                var_24_9 = "C:\x\ax2017\Engine\Game.h"
                                ecx_47 = "gpGameData"
                                goto label_69a910
                            
                            void* eax_58 = *(eax_19 + 0x10)
                            
                            if (edx_23 != 0)
                                uint32_t ecx_42 = zx.d(edx_23.w)
                                
                                if (ecx_42 u< *(eax_58 + 4))
                                    void* ecx_44 = ecx_42 * 0x7c + *eax_58
                                    
                                    if (*(ecx_44 + 0x78) == edx_23 && ecx_44 != 0 && edi_2[1] != 9)
                                        sub_6b8440(ecx_44)
                                        *(esi_2 + 0xa0) = 0
                        else
                            switch (eax_19)
                                case nullptr
                                    int32_t arg_30
                                    float arg_74
                                    int32_t eax_21
                                    int32_t ecx_11
                                    float edx_6
                                    float edi_3
                                    
                                    if (*(esi_2 + 0x120) s<= *esi_2)
                                        float ecx_12 = edi_2[0x2b]
                                        edx_6 = ecx_12
                                        int32_t eax_22 = edi_2[0x2c]
                                        edi_3 = edx_6
                                        arg_30 = eax_22
                                        arg3 = ecx_12
                                        ecx_11 = eax_22
                                        arg_74 = edx_6
                                        eax_21 = ecx_11
                                    else
                                        ecx_11 = *(esi_2 + 0x12c)
                                        edx_6 = *(esi_2 + 0x130)
                                        eax_21 = *(esi_2 + 0x124)
                                        edi_3 = *(esi_2 + 0x128)
                                        arg_74 = edx_6
                                        esi_2 = arg_2c
                                        arg_30 = ecx_11
                                        arg3 = edx_6
                                    
                                    float arg_b4 = edi_3
                                    edi_2 = arg_14
                                    int32_t arg_b0 = eax_21
                                    eax_19 = edi_2[0x2c] * edi_2[0x2b]
                                    
                                    if (eax_19 s> 0x1e)
                                        var_1c_16 = "UIStateUpdate"
                                        var_20_12 = 0x87d
                                        var_24_9 = "C:\x\ax2017\Engine\UIDef.cpp"
                                        ecx_47 = "el.rows * el.cols <= 30"
                                        goto label_69a910
                                    
                                    if (ecx_11 i* edx_6 s> 0x1e)
                                        var_1c_16 = "UIStateUpdate"
                                        var_20_12 = 0x87e
                                        var_24_9 = "C:\x\ax2017\Engine\UIDef.cpp"
                                        ecx_47 = "dimsUpdate.x * dimsUpdate.y <= 30"
                                        goto label_69a910
                                    
                                    void arg_e0
                                    int128_t xmm0_33 =
                                        *sub_69c1a0(&arg_e0, arg_c.d, ecx, &arg_e0, &arg_1c8)
                                    int32_t eax_27 = 0
                                    int32_t arg_78 = 0
                                    
                                    if (arg_74 s> 0)
                                        int32_t ecx_15 = arg_30
                                        float edx_8 = arg3
                                        
                                        do
                                            int32_t edi_4 = 0
                                            
                                            if (ecx_15 s> 0)
                                                do
                                                    int32_t arg_6c = eax_27
                                                    int32_t arg_68 = edi_4
                                                    uint32_t eax_29
                                                    int32_t ecx_17
                                                    eax_29, ecx_17 =
                                                        sub_6990b0(&arg_68, esi_2, arg_14, &arg_68)
                                                    
                                                    if (*(eax_29 + 0x20) != 0)
                                                        ecx_17 = *(eax_29 + 0x24)
                                                        int32_t edx_10 = *(eax_29 + 0x28)
                                                        arg_68 = ecx_17
                                                        arg_6c = edx_10
                                                    
                                                    int32_t var_1c_8 = ecx_17
                                                    int128_t* eax_31 = sub_6978b0(&arg_108, arg_2c, 
                                                        arg_14, &arg_108, &arg_1c8, &arg_68, 
                                                        &arg_b0)
                                                    int64_t xmm1_7 = (*eax_31).q
                                                    float xmm1_8 = xmm1_7 f+ *(arg_2c + 0x154)
                                                    int128_t arg_238 = eax_31[1]
                                                    int128_t arg_248 = eax_31[2]
                                                    int128_t arg_258 = eax_31[3]
                                                    int128_t arg_268 = eax_31[4]
                                                    int32_t ecx_20 = arg_3c[1]
                                                    int128_t arg_278 = eax_31[5]
                                                    int32_t arg_80 = *arg_3c
                                                    int64_t arg_228
                                                    arg_228.d = xmm1_8
                                                    int32_t arg_84 = ecx_20
                                                    arg_228:4.d = xmm1_7:4.d f+ *(arg_2c + 0x158)
                                                    
                                                    if (*(arg_14 + 0xda) != 0)
                                                        int32_t xmm3_1 = xmm0_33:8.d
                                                        int32_t xmm1_9 = xmm0_33.d
                                                        int32_t xmm2_4
                                                        int32_t xmm4_1
                                                        
                                                        if (not(xmm3_1 f< xmm1_9))
                                                            xmm2_4 = xmm0_33:0xc.d
                                                            xmm4_1 = xmm0_33:4.d
                                                        
                                                        if (xmm3_1 f< xmm1_9 || xmm2_4 f< xmm4_1)
                                                            sub_63b870(arg_14, &data_801800, 
                                                                "RectIsNormalized(r)", 
                                                                "C:\x\ax2017\Engine\Rect.cpp", 0xa4, 
                                                                "RectContains")
                                                            
                                                            if (sub_63bc30() != 0)
                                                                breakpoint
                                                            
                                                            sub_63bb00()
                                                            noreturn
                                                        
                                                        int32_t xmm0_41 = *arg_3c
                                                        int32_t xmm1_10
                                                        
                                                        if (not(xmm0_41 f< xmm1_9))
                                                            xmm1_10 = arg_3c[1]
                                                        
                                                        if (xmm0_41 f< xmm1_9 || xmm1_10 f< xmm4_1
                                                                || xmm3_1 f< xmm0_41
                                                                || not(xmm2_4 f>= xmm1_10))
                                                            arg_80 = 0xc61c4000
                                                            arg_84 = 0xc61c4000
                                                    
                                                    int32_t var_28_2 = ecx_20
                                                    *(eax_29 + 0x434)
                                                    void arg_f0
                                                    int128_t* eax_35 = sub_699c40(&arg_f0, &arg_80, 
                                                        arg_34.d, arg_38, &arg_c, arg_2c, &arg_68)
                                                    int128_t xmm0_43 = *eax_35
                                                    int32_t ecx_22 = eax_35[1].d
                                                    
                                                    if (*(eax_29 + 0x1c) == 2)
                                                        *(eax_5 + 0x1c) = 2
                                                    
                                                    if (xmm0_43 != 0)
                                                        arg8 = xmm0_43
                                                        var_8_1 = ecx_22
                                                    
                                                    esi_2 = arg_2c
                                                    edi_4 += 1
                                                    eax_27 = arg_78
                                                while (edi_4 s< arg_30)
                                                
                                                ecx_15 = arg_30
                                                edx_8 = arg3
                                            
                                            eax_27 += 1
                                            arg_78 = eax_27
                                        while (eax_27 s< edx_8)
                                        
                                        edi_2 = arg_14
                                    
                                    goto label_69a657
                                case 1
                                    if (*(esi_2 + 0x15c) != 0)
                                        sub_6ea940(esi_2 + 0x160, 0, &data_7ffb14)
                                    
                                    goto label_69a657
                                case 2, 5
                                    goto label_69a657
                                case 3
                                    char eax_43
                                    int32_t ecx_36
                                    eax_43, ecx_36 = sub_698c30(eax_19, &arg_1c8, edi_2, arg_3c)
                                    
                                    if (eax_43 == 0 || *(esi_2 + 0x21) != 0)
                                        int32_t var_1c_12 = ecx_36
                                        
                                        if (sub_698dd0(esi_2 + 0x28, esi_2 + 0x20, edi_2, 
                                                esi_2 + 0x28, eax_43, arg_34) == 1)
                                            int32_t eax_49 = *(eax_5 + 0x2c)
                                            
                                            if (eax_49 == 0)
                                                int32_t eax_52
                                                
                                                if (arg4 != 0)
                                                    eax_52 = *(arg4 + 0x11c)
                                                
                                                if (arg4 == 0 || eax_52 == 0)
                                                    var_8_1 = arg_c.d
                                                    arg8.d = 2
                                                    
                                                    if (arg_14 != 0)
                                                        arg8:4.d = *arg_14
                                                        arg8:8.d = *eax_4
                                                        arg8:0xc.d = eax_4[1]
                                                else
                                                    arg_28 = 0
                                                    
                                                    if (eax_4 == 0)
                                                        sub_63b870(eax_52, &data_801800, 
                                                            "parentTableSlot", 
                                                            "C:\x\ax2017\Engine\UIDef.cpp", 0x8e3, 
                                                            "UIStateUpdate")
                                                        
                                                        if (sub_63bc30() != 0)
                                                            breakpoint
                                                        
                                                        sub_63bb00()
                                                        noreturn
                                                    
                                                    arg8.d = 3
                                                    var_8_1 = eax_52(ecx, eax_4, arg_c.d, &arg_28)
                                            else
                                                arg8.d = 3
                                                int32_t var_20_8 = arg_c.d
                                                int32_t arg_a8 = 0
                                                var_8_1 = eax_49(ecx, var_20_8, &arg_a8)
                                    else
                                        if (arg2:3.b != 0)
                                            uint32_t edx_20 = arg6
                                            int32_t var_1c_11 = ecx_36
                                            sub_698dd0(edx_20 + 0x28, edx_20 + 0x20, arg7, 
                                                edx_20 + 0x28, 0, arg_34)
                                        
                                        arg2:3.b = 1
                                        arg_20 = arg_c.d
                                        arg7 = edi_2
                                        arg6 = esi_2
                                    
                                    goto label_69a657
                                case 4
                                    var_1c_16 = "UIStateUpdate"
                                    var_20_12 = 0x878
                                    var_24_9 = "C:\x\ax2017\Engine\UIDef.cpp"
                                    ecx_47 = "Halt"
                                label_69a910:
                                    sub_63b870(eax_19, &data_801800, ecx_47, var_24_9, var_20_12, 
                                        var_1c_16)
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                                case 6
                                    eax_19 = data_147abe8
                                    int32_t edx_13 = *(esi_2 + 0x9c)
                                    
                                    if (eax_19 == 0)
                                        goto label_69a8fa
                                    
                                    void* eax_38 = *(eax_19 + 0xc)
                                    
                                    if (edx_13 != 0)
                                        uint32_t ecx_23 = zx.d(edx_13.w)
                                        
                                        if (ecx_23 u< *(eax_38 + 4))
                                            int32_t* ecx_25 = ecx_23 * 0x94 + *eax_38
                                            
                                            if (ecx_25[0x24] == edx_13 && ecx_25 != 0)
                                                sub_6e5cc0(ecx_25, esi_2.w, edi_2, arg_38)
                                    
                                    goto label_69a657
                                case 7
                                    eax_19 = data_147abe8
                                    int32_t ecx_26 = *(esi_2 + 0xa0)
                                    
                                    if (eax_19 == 0)
                                        goto label_69a8fa
                                    
                                    void* eax_39 = *(eax_19 + 0x10)
                                    int32_t* edx_14
                                    
                                    if (ecx_26 != 0)
                                        uint32_t edx_15 = zx.d(ecx_26.w)
                                        
                                        if (edx_15 u< *(eax_39 + 4))
                                            edx_14 = edx_15 * 0x7c + *eax_39
                                            
                                            if (edx_14[0x1e] != ecx_26)
                                                edx_14 = nullptr
                                        else
                                            edx_14 = nullptr
                                    else
                                        edx_14 = nullptr
                                    
                                    int32_t* ecx_27 = edi_2[0x18]
                                    
                                    if (ecx_27 != 0)
                                        int128_t arg_88
                                        int32_t* arg_9c
                                        int32_t* arg_a0
                                        int32_t* arg_a4
                                        int128_t arg_b8
                                        int128_t arg_c8
                                        
                                        if (edx_14 == 0)
                                            arg_88.d = 0x3f800000
                                            arg_9c = edx_14
                                            arg_a0 = edx_14
                                            arg_a4 = edx_14
                                            arg_b8 = data_800248
                                            arg_c8 = arg9
                                            edx_14 = sub_6b80f0(ecx_27, &arg_b8)
                                            int32_t ecx_28 = edx_14[0x1e]
                                            edx_14[8] = 1
                                            *(esi_2 + 0xa0) = ecx_28
                                        
                                        if (*edx_14 != edi_2[0x18])
                                            sub_6b8440(edx_14)
                                            int32_t* ecx_31 = edi_2[0x18]
                                            arg_88.d = 0x3f800000
                                            arg_9c = nullptr
                                            arg_b8 = data_800248
                                            arg_a0 = nullptr
                                            arg_a4 = nullptr
                                            arg_c8 = arg9
                                            edx_14 = sub_6b80f0(ecx_31, &arg_b8)
                                            int32_t eax_42 = edx_14[0x1e]
                                            edx_14[8] = 1
                                            *(esi_2 + 0xa0) = eax_42
                                        
                                        sub_6bca30(edx_14, data_8c4634)
                                    else if (edx_14 != 0)
                                        sub_6b8440(edx_14)
                                        *(esi_2 + 0xa0) = 0
                                    
                                    goto label_69a657
                    
                    sub_699030(&arg_288)
                else
                    int128_t* eax_10 = sub_698fb0(&arg_108, edx_3, ecx_6, &arg_108)
                    arg_1c8 = *eax_10
                    arg_1d8 = eax_10[1]
                    arg_1e8 = eax_10[2]
                    arg_1f8 = eax_10[3]
                    arg_208 = eax_10[4]
                    arg_218 = eax_10[5]
                    int128_t* eax_12 = sub_699790(&arg_168, esi_2, edi_2, &arg_168, &arg_1c8)
                    int32_t edx_5 = arg_1b88 * 0x64
                    arg_1b88 += 1
                    int32_t ecx_10 = *esi_2
                    *(&arg_288 + edx_5) = *eax_12
                    *(&arg_298 + edx_5) = eax_12[1]
                    *(&arg_2a8 + edx_5) = eax_12[2]
                    *(&arg_2b8 + edx_5) = eax_12[3]
                    *(&arg_2c8 + edx_5) = eax_12[4]
                    int128_t xmm0_18 = eax_12[5]
                    (&arg_2e8)[arg_1b88 * 0x19] = edi_2[0x1a]
                    *(&arg_2d8 + edx_5) = xmm0_18
                    int32_t eax_13
                    
                    if (*(esi_2 + 8) s<= ecx_10)
                        eax_13.b = edi_2[0x11].b
                    else
                        eax_13.b = *(esi_2 + 0xc)
                    
                    float xmm1_1
                    
                    xmm1_1 = eax_13.b != 0 ? -1f : 1f
                    
                    bool cond:1_1 = *(esi_2 + 0x5c) == 0
                    float xmm0_21 = arg_38 * xmm1_1 f+ *(esi_2 + 0x14)
                    *(esi_2 + 0x14) = xmm0_21
                    float xmm2_1
                    
                    if (cond:1_1)
                        xmm2_1 = _mm_cvtepi32_ps(zx.o(edi_2[0x1c]))
                    else
                        xmm2_1 = *(esi_2 + 0x60)
                    
                    int32_t eax_14
                    
                    if (*(esi_2 + 0x134) s<= ecx_10)
                        eax_14 = edi_2[0x1b]
                    else
                        eax_14 = *(esi_2 + 0x138)
                    
                    float xmm1_4 = _mm_cvtepi32_ps(zx.o(eax_14)) + xmm2_1
                    
                    if (not(0f <= xmm0_21))
                        *(esi_2 + 0x14) = 0
                        xmm0_21 = (zx.o(0)).d
                    
                    float xmm0_24 = (xmm0_21 * 1000f - xmm2_1) / (xmm1_4 - xmm2_1)
                    
                    if (not(0 f< xmm0_24))
                        *(esi_2 + 0x10) = 0
                    else if (xmm0_24 < 1f)
                        *(esi_2 + 0x10) = sub_4ae110(1, xmm0_24, (zx.o(0)).d, 1f)
                    else
                        *(esi_2 + 0x10) = 0x3f800000
                esi_1 = eax_7
                i_2 = arg_c.d + 1
                i = i_2
                arg_c.d = i_2
            while (i s< *(esi_1 + 8))
            
            if (arg2:3.b == 0)
                ecx_4 = var_8_1
                xmm0_50 = arg8
            else
                uint32_t esi_5 = arg6
                uint32_t i_1 = i
                
                if (sub_698dd0(esi_5 + 0x28, esi_5 + 0x20, arg7, esi_5 + 0x28, 1, arg_34) == 1)
                    int32_t eax_63 = *(eax_5 + 0x2c)
                    
                    if (eax_63 == 0)
                        int32_t eax_66
                        
                        if (arg4 != 0)
                            eax_66 = *(arg4 + 0x11c)
                        
                        if (arg4 == 0 || eax_66 == 0)
                            arg8.d = 2
                            goto label_69a7e1
                        
                        if (eax_4 == 0)
                            sub_63b870(eax_66, &data_801800, "parentTableSlot", 
                                "C:\x\ax2017\Engine\UIDef.cpp", 0x918, "UIStateUpdate")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        arg_28 = 0
                        arg8.d = 3
                        int32_t eax_67 = eax_66(ecx, eax_4, arg_20, &arg_28)
                        xmm0_50 = arg8
                        int32_t var_8_2 = eax_67
                        ecx_4 = eax_67
                    else
                        arg8.d = 3
                        arg_28 = 0
                        ecx_4 = eax_63(ecx, arg_20, &arg_28)
                        xmm0_50 = arg8
                else if (*(esi_5 + 0x21) != 0 || *(esi_5 + 0x23) != 0 || *(esi_5 + 0x22) != 0)
                    ecx_4 = var_8_1
                    xmm0_50 = arg8
                else
                    arg8.d = 1
                    *(eax_5 + 0x1c) = 2
                label_69a7e1:
                    
                    if (arg_14 == 0)
                        ecx_4 = arg_20
                        xmm0_50 = arg8
                    else
                        arg8:4.d = *arg_14
                        arg8:0xc.d = eax_4[1]
                        ecx_4 = arg_20
                        arg8:8.d = *eax_4
                        xmm0_50 = arg8
        
        goto label_69a852
    
    var_1c_1 = "UIDefGet"
    var_20_1 = 0x127
    var_24_1 = "C:\x\ax2017\Engine\UIDef.cpp"
    ecx_3 = "ptr->assetType == ASSET_TYPE_UI"

sub_63b870(eax_5, &data_801800, ecx_3, var_24_1, var_20_1, var_1c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
