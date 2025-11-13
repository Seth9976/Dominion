// 函数: sub_65aab0
// 地址: 0x65aab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = data_147abe8
float xmm1 = arg4
float var_11c = xmm1
float xmm2 = *(eax_2 + 0x2c)
void** esi = arg2
void* edi
void* var_2f0 = edi

if (arg3[0x568] != 0)
    arg2.b = *(arg3 + 0x13c1)
    sub_658550(eax_2, arg2.b, arg3, xmm1, esi)
    xmm1 = var_11c

uint32_t eax_3 = arg3[0x57e]

if (eax_3 != 2)
    void var_30
    float var_18
    float var_14
    
    if (eax_3 == 3 && arg3[0x55a].b != 0)
        var_18 = arg3[0x5b3]
        float xmm0_4 = arg3[0x5b4]
        float var_20 = 0f
        int32_t var_1c_1 = 0
        var_14 = xmm0_4
        var_20.o = var_20.o
        float* eax_6 = sub_655430(&var_30, &var_20, &arg3[0x588], &var_30)
        float xmm3_2 = arg3[0x588]
        esi = &arg3[0xb9]
        float xmm2_2[0x4] = *eax_6
        arg3[0x5d6] = arg3[0x542]
        int32_t eax_8 = arg3[0x544]
        float xmm0_7 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xaa)
        arg3[0x5cc] = xmm2_2
        arg3[0x5d7] = eax_8
        int32_t eax_9 = arg3[0x546]
        float xmm1_2 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0x55)
        arg3[0x5d8] = eax_9
        int32_t eax_10 = arg3[0x501]
        float xmm2_4 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xff) - xmm1_2
        arg3[0x5e3] = eax_10
        int32_t eax_11 = arg3[0x55e]
        arg3[0x5cd] = xmm1_2
        float xmm1_3 = xmm2
        arg3[0x5e0] = eax_11
        void* eax_12 = &esi[0x1e]
        arg3[0x5cf] = xmm2_4
        arg3[0x5ce] = xmm0_7 f- xmm2_2
        float xmm2_6 = xmm1_3 f- esi[0x23]
        float xmm4_2 = xmm3_2 f* arg3[0x547]
        float xmm3_3 = xmm3_2 f* arg3[0x548]
        bool cond:1_1 = esi[0x1f] f+ *eax_12 > xmm2_6
        var_14 = xmm4_2
        float xmm2_7
        
        if (cond:1_1 || esi[0x1b] s> 1)
            float xmm0_11 = sub_67f6b0(esi, xmm1_3 f- esi[0x22])
            edi = &esi[0xf]
            float xmm0_12 = sub_67f6b0(edi, xmm2_6)
            float xmm0_13 = sub_64c3c0(&esi[0x1e], xmm2_6)
            xmm1_3 = xmm2
            eax_12 = &esi[0x1e]
            xmm4_2 = var_14
            xmm2_7 = xmm0_13 * (xmm0_12 - xmm0_11) + xmm0_11
        else
            xmm2_7 = esi[0xf]
            edi = &esi[0xf]
        
        arg3[0x5d0] = xmm4_2 * xmm2_7
        arg3[0x5d1] = xmm3_3 * xmm2_7
        float xmm2_11 = xmm1_3 f- esi[0x23]
        float xmm2_12
        
        if (esi[0x1f] f+ *eax_12 > xmm2_11 || esi[0x1b] s> 1)
            float xmm0_18 = sub_67f6b0(esi, xmm1_3 f- esi[0x22])
            var_14 = sub_67f6b0(edi, xmm2_11)
            xmm1_3 = xmm2
            xmm2_12 = sub_64c3c0(&esi[0x1e], xmm2_11) * (var_14 - xmm0_18) + xmm0_18
        else
            xmm2_12 = *edi
        
        arg3[0x5da] = xmm2_12 f* arg3[0x588]
        arg3[0x5d9] = *sub_67d3c0(&arg3[0x275], xmm1_3, &var_14)
        arg3[0x5dd] = *sub_67d3c0(&arg3[0x299], xmm2, &var_14)
        arg3[0x5df] = *(arg3 + 0x156b)
        arg3[0x5de] = *(arg3 + 0x1573)
        sub_6ea940(&arg3[0x5c8], 0, &data_7ffb14)
    
    float ecx_13 = arg3[0x627]
    eax_3 = 0
    uint32_t var_118_3 = 0
    var_14 = ecx_13
    
    if (ecx_13 != 0)
        do
            uint32_t eax_19 = sub_64e7a0(arg3[eax_3 + 0x5e7])
            float xmm0_23 = arg3[0x5a0]
            xmm0_23 f- 0
            uint32_t ecx_15 = eax_19
            eax_19:1.b = (xmm0_23 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_23, 0f) ? 1 : 0) << 2
                | (xmm0_23 < 0f ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            bool p_8
            
            if (not(p_6))
                float xmm0_24 = *(ecx_15 + 0x1680)
                xmm0_24 f- 0
                eax_19:1.b = (xmm0_24 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_24, 0f) ? 1 : 0) << 2 | (xmm0_24 < 0f ? 1 : 0)
                p_8 = unimplemented  {test ah, 0x44}
            
            if (p_6 || p_8 || *(ecx_15 + 0x136c) != 0)
                int32_t eax_20 = arg3[0x57e]
                int128_t var_110
                int32_t* eax_22
                
                if (eax_20 == 2)
                    int32_t var_2f4_9 = 0
                    edi = __builtin_memcpy(&var_110, &arg3[0x588], 0xd0)
                    esi = ecx_15
                    void var_2e0
                    void var_40
                    eax_22 = sub_656980(&var_2e0, esi[0x5ac], arg3, &var_2e0, &var_40, &var_30)
                    bool cond:2_1 = data_147abd0 == 0
                    var_110 = *eax_22
                    int128_t var_100_1 = *(eax_22 + 0x10)
                    
                    if (not(cond:2_1))
                        char* eax_32 = esi[0x578]
                        char* const edx_7 = &data_801800
                        int32_t var_2f4_10 = arg3[0x5a5]
                        char* const ecx_21 = &data_801800
                        
                        if (eax_32 != 0)
                            edx_7 = eax_32
                        
                        char* eax_33 = arg3[0x578]
                        char* const var_2f8_4 = edx_7
                        
                        if (eax_33 != 0)
                            ecx_21 = eax_33
                        
                        char* const var_2fc_3 = ecx_21
                        eax_22 = sub_63b5f0("%s %s tbl layer %d")
                else
                    eax_22 = eax_20 - 6
                    int32_t* temp3_1
                    
                    if (eax_20 != 6)
                        temp3_1 = eax_22
                        eax_22 -= 4
                    
                    if (eax_20 == 6 || temp3_1 != 4)
                        bool cond:5_1 = data_147abd0 == 0
                        edi = __builtin_memcpy(&var_110, &arg3[0x588], 0xd0)
                        
                        if (cond:5_1)
                            esi = ecx_15
                        else
                            esi = ecx_15
                            char* const edx_5 = &data_801800
                            int32_t var_2f4_8 = arg3[0x5a5]
                            char* const ecx_19 = &data_801800
                            char* eax_29 = esi[0x578]
                            
                            if (eax_29 != 0)
                                edx_5 = eax_29
                            
                            char* eax_30 = arg3[0x578]
                            char* const var_2f8_2 = edx_5
                            
                            if (eax_30 != 0)
                                ecx_19 = eax_30
                            
                            char* const var_2fc_1 = ecx_19
                            eax_22 = sub_63b5f0("%s %s layer %d")
                    else
                        int128_t var_2c0
                        eax_22 = sub_65a660(&var_2c0, ecx_15, arg3, esi.w, edi, &var_2c0)
                        void* esi_1 = &arg3[0x588]
                        
                        if (eax_22.b != 0)
                            float var_26c
                            float xmm0_26 = var_26c f* arg3[0x59d]
                            int128_t var_1f0
                            __builtin_memcpy(&var_1f0, esi_1, 0xd0)
                            float var_19c_1 = xmm0_26
                            esi_1 = &var_1f0
                            float var_268
                            float var_198_1 = var_268 f* arg3[0x59e]
                            float var_264
                            float var_194_1 = var_264 f* arg3[0x59f]
                            float var_260
                            float var_190_1 = var_260 f* arg3[0x5a0]
                            int128_t var_18c_1 = *(arg3 + 0x1684)
                            var_1f0 = var_2c0
                            int128_t var_2b0
                            int128_t var_1e0 = var_2b0
                        
                        edi = __builtin_memcpy(&var_110, esi_1, 0xd0)
                        esi = ecx_15
                
                if (esi[0x5c6] != arg3)
                    sub_63b870(eax_22, &data_801800, "child.parent == &ui", 
                        "C:\x\ax2017\Engine\UI2.cpp", 0x22be, "UI2UpdateChildren")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t var_2f4_7 = 0
                sub_65d0f0(&var_110, arg3, esi, var_11c, &var_110)
            
            eax_3 = var_118_3 + 1
            var_118_3 = eax_3
        while (eax_3 != var_14)
    
    if (arg3[0x53a] != 0 && arg3[0x53c] != 0)
        var_18 = arg3[0x5b3]
        var_14 = arg3[0x5b4]
        int32_t eax_26
        float edx_4
        eax_26, edx_4 = sub_657fc0(arg3)
        int32_t eax_27 = arg3[0x53a]
        int32_t var_38 = eax_26
        float var_34_2 = edx_4
        
        if (eax_27 != 1)
            sub_63b870(eax_27 - 1, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x1ff6, 
                "UI2TextUpdateScrollbar")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        if (not(edx_4 <= var_14))
            var_18 = var_18 - 0f
        
        eax_3 = sub_658da0(&var_38, &var_18, arg3, var_11c, &var_38)
else
    float xmm0_1 = arg3[0x5b3]
    xmm0_1 f- 0
    eax_3:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    bool p_4
    
    if (not(p_2))
        float xmm0_2 = arg3[0x5b4]
        xmm0_2 f- 0
        eax_3:1.b = (xmm0_2 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 0f) ? 1 : 0) << 2
            | (xmm0_2 < 0f ? 1 : 0)
        p_4 = unimplemented  {test ah, 0x44}
    
    if (p_2 || p_4)
        void* eax_4 = sub_659b10(eax_3, esi, arg3, xmm1, arg5)
        CookieCheckFunction(eax_4)
        return eax_4

CookieCheckFunction(eax_3)
return eax_3
