// 函数: sub_636940
// 地址: 0x636940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t esi
int32_t var_e0 = esi
int32_t eax_1

if (arg1[0x5f0] != 0)
    if (arg1[0x92] != 0xb)
        eax_1.b = 0
        char var_6d = 0
        char var_6e = 0
        char var_75
        int128_t var_4c
        int128_t* eax_7 = sub_6377f0(eax_1, &var_75, &arg1[0x24], &var_4c)
        void* edi_1 = &arg1[0x46]
        int128_t var_6c = *eax_7
        int128_t var_5c = eax_7[1]
        void var_ac
        char var_76
        int128_t* eax_9 = sub_6377f0(&var_ac, &var_76, edi_1, &var_ac)
        int128_t xmm0_7 = *eax_9
        var_4c = xmm0_7
        float xmm0_8[0x4] = eax_9[1]
        float var_9c[0x4] = xmm0_8
        void var_d4
        char var_77
        int128_t* eax_10
        int32_t edx_4
        eax_10, edx_4 = sub_6377f0(eax_9, &var_77, &arg1[0x70], &var_d4)
        bool cond:0 = var_75 != 0
        int128_t var_2c = *eax_10
        int128_t xmm0_10 = eax_10[1]
        char var_7c_1
        
        if (not(cond:0) && var_76 == 0 && var_77 == 0)
            var_7c_1 = 0
        
        if (cond:0 || var_76 != 0 || var_77 != 0 || (arg1[0x93].b & 1) != 0)
            var_7c_1 = 1
        
        int32_t ecx_6 = arg1[0x92]
        char const* const var_f0_3
        int32_t var_ec_4
        char const* const var_e8_5
        char* ecx_9
        
        if (ecx_6 u> 0xa)
            var_e8_5 = "MoveComponent<struct DomLoc,struct DomMoveCallback>::MoveUpdate"
            var_ec_4 = 0x1a1
            var_f0_3 = "C:\x\ax2017\Jams\Dominion\code\CardMotion.h"
        label_6370b1:
            ecx_9 = "Halt"
        label_6370bb:
            sub_63b870(eax_10, &data_801800, ecx_9, var_f0_3, var_ec_4, var_e8_5)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        float* var_e8_6
        float var_e8_8
        float var_8c_1[0x4]
        int128_t var_1c_1
        void* eax_12
        void* esi_3
        int128_t xmm0_13
        float xmm1_1[0x4]
        float xmm3_4
        
        switch (ecx_6)
            case 0, 3, 6
                int32_t var_e8_7 = ecx_6
                var_e8_8 = 0f
            case 1
                float xmm2_7 = xmm0_8[2] f- xmm0_10:8.d
                float xmm1_6 = xmm0_8[1] f- xmm0_10:4.d
                float xmm0_23 = xmm0_8[3] f- xmm0_10:0xc.d
                
                if (not(25f <= xmm2_7 * xmm2_7 + xmm1_6 * xmm1_6 + xmm0_23 * xmm0_23))
                    ecx_6.b = 1
                    var_6d = 1
                    goto label_636c75
                
                eax_10 = data_cc8dc0
                
                if (eax_10 == 0)
                    var_e8_5 = "GetLocalSettings"
                    var_ec_4 = 0x5fb
                    var_f0_3 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                    ecx_9 = "gGameSettings.localSettings"
                    goto label_6370bb
                
                int32_t eax_15 = *(eax_10 + 8)
                
                if (eax_15 == 0)
                    xmm3_4 = 0.0500000007f
                    eax_12 = &var_d4
                    var_e8_6 = &var_d4
                label_636c6a:
                    eax_10, ecx_6 = sub_4adec0(eax_12, &var_2c, &var_4c, xmm3_4, var_e8_6)
                label_636c72:
                    ecx_6.b = var_6d
                    goto label_636c75
                
                if (eax_15 == 1)
                    xmm3_4 = 0.100000001f
                    eax_12 = &var_d4
                    var_e8_6 = &var_d4
                    goto label_636c6a
                
                eax_10 = eax_15 - 3
                
                if (eax_15 == 3)
                    xmm3_4 = 0.899999976f
                    eax_12 = &var_d4
                    var_e8_6 = &var_d4
                    goto label_636c6a
                
                var_e8_5 = "MoveToExp"
                var_ec_4 = 0xb1
                var_f0_3 = "C:\x\ax2017\Jams\Dominion\code\CardMotion.cpp"
                goto label_6370b1
            case 2
                void* ecx_10 = data_cc8dc0
                
                if (ecx_10 == 0)
                    var_e8_5 = "GetLocalSettings"
                    var_ec_4 = 0x5fb
                    var_f0_3 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                    ecx_9 = "gGameSettings.localSettings"
                    goto label_6370bb
                
                int32_t ecx_11 = *(ecx_10 + 8)
                float xmm0_14
                
                if (ecx_11 == 0)
                    xmm0_14 = 500f
                else if (ecx_11 == 1)
                    xmm0_14 = 1000f
                else
                    if (ecx_11 != 3)
                        var_e8_5 = "MoveToLinear"
                        var_ec_4 = 0x5a
                        var_f0_3 = "C:\x\ax2017\Jams\Dominion\code\CardMotion.cpp"
                        goto label_6370b1
                    
                    xmm0_14 = 2000f
                
                float xmm7_1 = xmm0_8[1]
                float xmm5_1 = xmm0_10:4.d
                float xmm1_3 = xmm7_1 - xmm5_1
                float xmm4_1 = xmm0_10:8.d
                float xmm2_2 = xmm0_8[2] - xmm4_1
                float xmm6_1 = xmm0_10:0xc.d
                float xmm3_2 = arg2 * xmm0_14
                float xmm0_16 = xmm0_8[3] - xmm6_1
                
                if (not(xmm3_2 * xmm3_2 <= xmm2_2 * xmm2_2 + xmm1_3 * xmm1_3 + xmm0_16 * xmm0_16))
                    ecx_6.b = 1
                    var_6d = 1
                    goto label_636c75
                
                float xmm4_2 = xmm4_1 - xmm0_8[2]
                float xmm6_2 = xmm6_1 - xmm0_8[3]
                float xmm5_2 = xmm5_1 - xmm7_1
                eax_12 = &var_d4
                xmm3_4 =
                    xmm3_2 / sub_4ac580(ebp, xmm4_2 * xmm4_2 + xmm5_2 * xmm5_2 + xmm6_2 * xmm6_2)
                var_e8_6 = &var_d4
                goto label_636c6a
            case 4
                xmm0_13 = *eax_10
                esi_3 = &arg1[0x94]
                xmm1_1 = eax_10[1]
                var_1c_1 = xmm0_13
                var_8c_1 = xmm1_1
            label_636b3e:
                void* ecx_8 = *esi_3
                
                if (*(ecx_8 + 0x1a18) == 0)
                    var_e8_5 = "TriggerMovementUpdate"
                    var_ec_4 = 0x1113d
                    var_f0_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    ecx_9 = "callback.gfx->move.numTargets"
                    goto label_6370bb
                
                if (*(ecx_8 + 0x4a0) == 6)
                    void* ecx_19 = ecx_8 + 0x258
                    float xmm0_33
                    eax_10, xmm0_33 = sub_5e72a0(ecx_19)
                    float xmm2_16 = *(esi_3 + 0x10)
                    xmm2_16 f- 0
                    eax_10:1.b = (xmm2_16 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm2_16, 0f) ? 1 : 0) << 2 | (xmm2_16 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    bool p_4
                    
                    if (not(p_2))
                        xmm0_33 f- 0
                        eax_10:1.b = (xmm0_33 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_33, 0f) ? 1 : 0) << 2 | (xmm0_33 < 0f ? 1 : 0)
                        p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_2 || p_4)
                        if (not(xmm2_16 < 0.200000003f) && not(0.200000003f <= xmm0_33))
                            bool cond:3_1 = *(esi_3 + 4) != 1
                            float xmm0_34[0x4] = zx.o(0)
                            int32_t eax_25 = *(esi_3 + 0x14)
                            uint32_t edi_4 = *esi_3
                            var_7c_1.d = eax_25
                            var_9c = zx.o(0)
                            void* var_f0_7
                            int32_t var_ec_9
                            
                            if (cond:3_1)
                                if (*(edi_4 + 0x2c) == 0)
                                    void* eax_28 = sub_5cbb20(edi_4)
                                    ecx_19 = *(edi_4 + 0x10c)
                                    var_9c[0] = 1
                                    
                                    if (ecx_19 == 0)
                                        ecx_19 = eax_28
                                    
                                    var_9c[2] = *(edi_4 + 0xa0)
                                    eax_25 = var_7c_1.d
                                    var_9c[3] = ecx_19
                                    xmm0_34 = var_9c
                                
                                int32_t var_e8_13 = 1
                                var_ec_9 = eax_25
                                var_f0_7 = nullptr
                            else
                                ecx_19 = *(esi_3 + 8)
                                
                                if (*(edi_4 + 0x2c) == 0)
                                    int32_t eax_26 = sub_5cbb20(edi_4)
                                    int32_t ecx_21 = *(edi_4 + 0x10c)
                                    var_9c[0] = 1
                                    
                                    if (ecx_21 == 0)
                                        ecx_21 = eax_26
                                    
                                    int32_t eax_27 = *(edi_4 + 0xa0)
                                    var_9c[3] = ecx_21
                                    var_9c[2] = eax_27
                                    xmm0_34 = var_9c
                                    eax_25 = var_7c_1.d
                                
                                int32_t var_e8_12 = 1
                                var_ec_9 = eax_25
                                var_f0_7 = ecx_19
                            
                            var_9c = xmm0_34
                            sub_6339d0(eax_25, &var_9c, ecx_19, var_f0_7, var_ec_9)
                            edi_1 = &arg1[0x46]
                            *(esi_3 + 0xc) = 1
                        
                        *(esi_3 + 0x10) = xmm0_33
                    
                    xmm1_1 = var_8c_1
                    xmm0_13 = var_1c_1
                
                __builtin_memcpy(edi_1, &arg1[0x70], 0x88)
                *(arg1 + 0x180) = xmm0_13
                arg1[0x46] = 0
                *(arg1 + 0x190) = xmm1_1
                goto label_63707b
            case 5
                goto label_636c72
            case 7
                int32_t var_e8_9 = ecx_6
                var_e8_8 = 0.400000006f
            case 8
                var_6d = 1
                esi_3 = &arg1[0x94]
                var_4c = *eax_10
                int128_t var_3c_1 = eax_10[1]
            label_636c99:
                eax_10 = sub_633aa0(esi_3, 0)
                arg1[0x5f3] = 0
                __builtin_memcpy(edi_1, &arg1[0x70], 0x88)
                bool cond:2_1 = arg1[0x46] == 1
                __builtin_memcpy(&arg1[0x24], &arg1[0x46], 0x88)
                __builtin_memcpy(&arg1[2], &arg1[0x46], 0x88)
                
                if (not(cond:2_1))
                    var_e8_5 = "MoveComponent<struct DomLoc,struct DomMoveCallback>::MoveUpdate"
                    var_ec_4 = 0x1ac
                    var_f0_3 = "C:\x\ax2017\Jams\Dominion\code\CardMotion.h"
                    ecx_9 = "locCurrent.type == LOC_USER"
                    goto label_6370bb
                
                int32_t eax_21 = arg1[0x5f0] - 1
                arg1[0x5f0] = eax_21
                memmove(&arg1[0x70], &arg1[0x9c], eax_21 * 0xb0)
                
                if (arg1[0x5f0] s> 0)
                    uint32_t ecx_16 = arg1[0x94]
                    
                    if (*(ecx_16 + 0x2c) == 0)
                        sub_5cbb20(ecx_16)
                        uint32_t eax_24
                        eax_24.b = var_6d
                        CookieCheckFunction(eax_24)
                        return eax_24
                
            label_63707b:
                eax_10.b = var_6d
                CookieCheckFunction(eax_10)
                return eax_10
            case 9
                int32_t var_ec_2 = ecx_6
                eax_10, ecx_6 = sub_4ea230(&var_d4, edx_4, &var_6c, esi.w, edi_1, &var_d4, &var_2c, 
                    *arg1, arg2, &var_6e)
                ecx_6.b = var_6e
                var_6d = ecx_6.b
            label_636c75:
                xmm0_13 = *eax_10
                xmm1_1 = eax_10[1]
                goto label_636c7c
            case 0xa
                int32_t var_ec_6 = ecx_6
                var_4c = xmm0_7
                float xmm0_26[0x4] = var_9c
                sub_4eae20(&arg1[0x6e], &arg1[0x68], &var_4c, &arg1[0x6e], &arg1[0x6b], &var_2c, 
                    arg2, &var_6e)
                float xmm4_6[0x4] = var_9c
                float xmm2_11 = xmm0_26[2]
                float xmm1_9 = xmm0_26[3]
                float xmm3_7 = xmm0_26[1] - _mm_shuffle_ps(xmm4_6, xmm4_6, 0x55)
                float xmm2_12 = xmm2_11 - _mm_shuffle_ps(xmm4_6, xmm4_6, 0xaa)
                float xmm1_10 = xmm1_9 - _mm_shuffle_ps(xmm4_6, xmm4_6, 0xff)
                int32_t xmm0_32
                eax_10, ecx_6, xmm0_32 =
                    sub_4ac580(ebp, xmm2_12 * xmm2_12 + xmm3_7 * xmm3_7 + xmm1_10 * xmm1_10)
                ecx_6.b = var_6e
                xmm1_1 = xmm0_26
                var_6d = ecx_6.b
                arg1[0x5f3] = xmm0_32
                xmm0_13 = var_4c
            label_636c7c:
                esi_3 = &arg1[0x94]
                var_8c_1 = xmm1_1
                var_1c_1 = xmm0_13
                
                if (ecx_6.b == 0)
                    goto label_636b3e
                
                goto label_636c99
        
        eax_10, ecx_6 = sub_4eace0(&var_d4, &var_2c, &var_6c, arg2, &var_d4, &arg1[0x5f3], &var_6e, 
            var_7c_1, var_e8_8)
        ecx_6.b = var_6e
        var_6d = ecx_6.b
        goto label_636c75
    
    float xmm0_1 = arg2 * 1000f
    float xmm0_2
    
    if (0 f<= xmm0_1)
        xmm0_2 = xmm0_1 + 0.5f
    else
        xmm0_2 = xmm0_1 - 0.5f
    
    arg1[0x9a] -= int.d(xmm0_2)
    
    if (not(0 f< _mm_cvtepi32_ps(zx.o(arg1[0x9a]))))
        sub_633aa0(&arg1[0x94], 0)
        __builtin_memcpy(&arg1[0x70], &arg1[0x46], 0x88)
        int32_t eax_3 = arg1[0x5f0] - 1
        arg1[0x5f0] = eax_3
        memmove(&arg1[0x70], &arg1[0x9c], eax_3 * 0xb0)
        uint32_t eax_6
        eax_6.b = 1
        CookieCheckFunction(eax_6)
        return eax_6

eax_1.b = 0
CookieCheckFunction(eax_1)
return eax_1
