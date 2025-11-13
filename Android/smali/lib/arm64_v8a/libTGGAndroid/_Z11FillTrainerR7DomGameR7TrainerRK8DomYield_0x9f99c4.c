// 函数: _Z11FillTrainerR7DomGameR7TrainerRK8DomYield
// 地址: 0x9f99c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int32_t x23 = *(arg3 + 0x58)
void* x21 = *((sx.q(x23) << 3) + 0x14a7240)
int32_t x23_1
int32_t* x28_1
int64_t fp
x23_1, x28_1, fp = sub_9fa200(arg1, arg3, x23, arg2)
*x28_1 = *(arg3 + 0x58)
x28_1[1] = *(arg3 + 0x48)
int64_t x8_3 = *(x28_1 + 0x10)
x28_1[2] = 0
*(x28_1 + 0x18) = x8_3
int32_t x8_4 = *(arg3 + 0x5c)

if (x8_4 == 3)
    x28_1[2] = AbilitySourceCard(arg1, zx.q(*(arg3 + 0x60)))
else if (x8_4 == 2)
    x28_1[2] = *(arg3 + 0x60)

x28_1[3].b = (*(arg3 + 4) == 2 ? 1 : 0).b
int64_t x8_7 = sx.q(*(x21 + 0xd8))
int64_t x0_2

if (0 == x8_7 u>> 0x3e)
    x0_2 = x8_7 << 2
else
    x0_2 = -1

int32_t* x0_3
int128_t v0
x0_3, v0 = operator new[](x0_2)
uint64_t i_8 = zx.q(*(x21 + 0xd8))

if (i_8.d s>= 1)
    int64_t x10_1 = sx.q(x23_1)
    int32_t* x9_4 = *(x21 + 0xd0) + 0x54
    v8.d = float.s(0xc479c000)
    uint64_t i_6 = i_8
    uint64_t i
    
    do
        v0.d = *x9_4
        x9_4 = &x9_4[0x1c]
        
        if (v0.d f> v8.d)
            v8.d = v0.d
        else
            v8.d = v8.d
        
        i = i_6
        i_6 -= 1
    while (i != 1)
    
    if (i_8.d s>= 1)
        int64_t x22_1 = 0
        int64_t x24_1 = 0
        v9.d = 0f
        int32_t x25_1 = -1
        uint64_t x23_2
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        
        do
            void* x20_1 = *(x21 + 0xd0) + x22_1
            v0.d = *(x20_1 + 0x54)
            v0.d = v0.d f- v8.d
            v0, v1_1, v2_1, v3_1 = expf(v0.d)
            int32_t x8_9 = *(x20_1 + 0x50)
            v9.d = v9.d f+ v0.d
            x22_1 += 0x70
            x0_3[x24_1] = x8_9
            x23_2 = sx.q(*(x21 + 0xd8))
            x24_1 += 1
            
            if (x8_9 s> x25_1)
                x25_1 = x8_9
        while (x24_1 s< x23_2)
        
        if (x23_2.d s>= 1)
            void* x9_5 = fp + x10_1 * 0x84
            int64_t i_1 = 0
            v10.d = float.s(0xc479c000)
            v11.d = fconvert.s(1f)
            int32_t* x22_2 = x0_3
            int32_t var_3398_1 = v9.d
            int32_t var_3394_1 = v8.d
            
            do
                if (*x22_2 == x25_1)
                    void* x8_12 = *(x21 + 0xd0)
                    v1_1.d = *(x21 + 0xb0)
                    v0.d = *(x9_5 + 0x4f8)
                    v10.d = *(x9_5 + 0x4fc)
                    void* x8_13 = x8_12 + i_1
                    v2_1.d = *(x8_13 + 0x50)
                    v1_1.d = float.s(v1_1.d)
                    v12.d = *(x8_12 + (x10_1 << 2) + 0x2c + i_1)
                    v13.d = *(x8_13 + 0x60)
                    v3_1.d = sqrt(v1_1.d)
                    v1_1.d = v0.d f+ v1_1.d
                    v1_1.d = v1_1.d f+ v11.d
                    v2_1.d = float.s(v2_1.d)
                    v2_1.d = v2_1.d f+ v11.d
                    v0.d = v1_1.d f/ v0.d
                    v14.d = v3_1.d f/ v2_1.d
                    v0, v1_1, v2_1, v3_1 = logf(v0.d)
                    v0.d = v10.d f+ v0.d
                    v0.d = v14.d f* v0.d
                    v0.d = v13.d f* v0.d
                    v10.d = v12.d f+ v0.d
                
                i_1 += 0x70
                x22_2 = &x22_2[1]
            while ((x23_2 & 0xffffffff) * 0x70 != i_1)
            
            int32_t* fp_2 = x28_1
            
            if (x23_2.d s>= 1)
                int64_t x23_3 = 0
                void* x8_14 = fp + x10_1 * 0x84
                v11.d = fconvert.s(1f)
                int64_t x8_16
                
                do
                    int64_t x9_11 = *(x21 + 0xd0)
                    v0.d = *(x21 + 0xb0)
                    void* x8_17 = x9_11 + x23_3 * 0x70
                    v12.d = *(x8_17 + 0x60)
                    v13.d = float.s(v0.d)
                    v1_1.d = v12.d f+ v12.d
                    v0.d = v1_1.d f* v13.d
                    v0.d = sqrt(v0.d)
                    uint32_t temp0_1 = vcvts_s32_f32(v0.d)
                    uint32_t x28_3
                    
                    if (temp0_1 s< 1)
                        x28_3 = 0
                    else
                        int32_t x9_13 = *(x9_11 + x23_3 * 0x70 + 0x50)
                        uint32_t x22_3 = 0
                        v14.d = sqrt(v13.d)
                        x28_3 = x9_13 & not.d(x9_13 s>> 0x1f)
                        int32_t x20_3 = x9_13 - 1
                        
                        while (x28_3 != x22_3)
                            v0.d = *(x8_14 + 0x4f8)
                            v1_1.d = float.s(x20_3)
                            v1_1.d = v1_1.d f+ v11.d
                            v15.d = *(x8_17 + (x10_1 << 2) + 0x2c)
                            v9.d = *(x8_14 + 0x4fc)
                            v8.d = v14.d f/ v1_1.d
                            v1_1.d = v0.d f+ v13.d
                            v1_1.d = v1_1.d f+ v11.d
                            v0.d = v1_1.d f/ v0.d
                            v0, v1_1, v2_1, v3_1 = logf(v0.d)
                            v0.d = v9.d f+ v0.d
                            v0.d = v8.d f* v0.d
                            v0.d = v12.d f* v0.d
                            v0.d = v15.d f+ v0.d
                            
                            if (v0.d f>= v10.d)
                                x28_3 = x22_3
                                break
                            
                            x22_3 += 1
                            x20_3 -= 1
                            
                            if (temp0_1 == x22_3)
                                x28_3 = temp0_1
                                break
                        
                        fp_2 = x28_1
                    
                    x23_3 += 1
                    int32_t x9_9 = x0_3[x23_3] - x28_3
                    int32_t x9_10
                    
                    x9_10 = x9_9 == 1 ? 0 : x9_9
                    
                    x0_3[x23_3] = x9_10
                    x8_16 = sx.q(*(x21 + 0xd8))
                while (x23_3 s< x8_16)
                
                x23_2 = zx.q(x8_16.d)
            
            DomGame& x28_4 = arg1
            DomYield const& x22_4 = arg3
            v9.d = var_3398_1
            v8.d = var_3394_1
            
            if (x23_2.d s>= 1)
                uint64_t x9_14 = zx.q(x23_2.d)
                int32_t x8_19
                int64_t i_9
                
                if (x23_2.d u>= 8)
                    i_9 = x9_14 & 0xfffffff8
                    void* x8_20 = &x0_3[4]
                    v0.q = 0
                    v0:8.q = 0
                    int64_t i_7 = i_9
                    v1_1.q = 0
                    v1_1:8.q = 0
                    int64_t i_2
                    
                    do
                        v2_1 = *(x8_20 - 0x10)
                        v3_1 = *x8_20
                        i_2 = i_7
                        i_7 -= 8
                        x8_20 += 0x20
                        v0 += v2_1
                        v1_1 += v3_1
                    while (i_2 != 8)
                    uint128_t v0_1
                    v0_1.d = vaddvq_u32(v1_1 + v0)
                    x8_19 = v0_1.d
                    
                    if (i_9 != x9_14)
                        goto label_9f9d94
                else
                    i_9 = 0
                    x8_19 = 0
                label_9f9d94:
                    void* x11_1 = &x0_3[i_9]
                    int64_t i_5 = x9_14 - i_9
                    int64_t i_3
                    
                    do
                        int32_t x10_4 = *x11_1
                        x11_1 += 4
                        i_3 = i_5
                        i_5 -= 1
                        x8_19 += x10_4
                    while (i_3 != 1)
                
                if (x23_2.d s>= 1)
                    int32_t x8_21
                    
                    x8_21 = x8_19 s> 1 ? x8_19 : 1
                    
                    int64_t i_4 = 0
                    int32_t var_d48
                    int32_t* var_3390_1 = &var_d48
                    v10.d = float.s(x8_21)
                    
                    do
                        int32_t var_26d8[0x320]
                        memset(&var_26d8, 0, 0x190c)
                        DomYield var_dc0
                        YldCopy(&var_dc0, x22_4)
                        float v0_2 = float.s(x0_3[i_4]) f/ v10.d
                        
                        if (v0_2 == 0f)
                            v0_2 = float.s(0x358637bd)
                        
                        float var_26e0 = v0_2
                        void* x25_2 = *(x21 + 0xd0) + i_4 * 0x70
                        float var_26dc_1 = expf(*(x25_2 + 0x54) f- v8.d) f/ v9.d
                        int32_t var_dcc
                        var_dcc.q = 0
                        int32_t var_dd4_1 = 0
                        int32_t var_1a58_1 = 0
                        sub_9f5644(x28_4, &var_dc0, x25_2)
                        uint64_t x8_27 = zx.q(*(x22_4 + 4) - 3)
                        int32_t var_d4c
                        int64_t x27_3
                        
                        if (x8_27.d u> 6)
                            uint64_t x20_4 = zx.q(var_d4c)
                            
                            if (x20_4.d s>= 1)
                                memcpy(&var_26d8, var_3390_1, x20_4 << 2)
                            
                            int32_t var_1a58_2 = x20_4.d
                            x27_3 = *(fp_2 + 0x18)
                            
                            if (x27_3 == *(fp_2 + 0x20))
                                goto label_9fa0bc
                            
                            memcpy(x27_3, &var_26e0, 0x191c)
                            *(fp_2 + 0x18) = x27_3 + 0x191c
                        else
                            switch (x8_27)
                                case 0
                                    int32_t x8_35 = 1
                                    int32_t var_1a58_3 = 1
                                    var_26d8[0] = var_d48
                                    int32_t var_b8
                                    
                                    if (var_b8 s> 0x3eb)
                                        if (var_b8 == 0x3ec)
                                            x8_35 = 9
                                        else if (var_b8 == 0x452)
                                            x8_35 = 0xb
                                        else
                                            if (var_b8 != 0x475)
                                            label_9fa1f8:
                                                pthread_kill(pthread_self(), 6)
                                                DomGame* x0_29
                                                void* x1_14
                                                int32_t x2_7
                                                int64_t* x3_2
                                                x0_29, x1_14, x2_7, x3_2 = XNoReturn()
                                                return sub_9fa200(x0_29, x1_14, x2_7, x3_2)
                                                    __tailcall
                                            
                                            x8_35 = 0x14
                                    else if (var_b8 != 2)
                                        if (var_b8 == 0x3ea)
                                            x8_35 = 7
                                        else
                                            if (var_b8 != 0x3eb)
                                                goto label_9fa1f8
                                            
                                            x8_35 = 8
                                    
                                    int32_t var_dc8_1 = x8_35
                                    goto label_9fa0a0
                                case 1
                                    uint64_t x20_5 = zx.q(var_d4c)
                                    void var_1a54
                                    
                                    if (x20_5.d s>= 1)
                                        memcpy(&var_1a54, var_3390_1, x20_5 << 2)
                                    int32_t var_dd4_2 = x20_5.d
                                    x27_3 = *(fp_2 + 0x18)
                                    
                                    if (x27_3 == *(fp_2 + 0x20))
                                        goto label_9fa0bc
                                    
                                    memcpy(x27_3, &var_26e0, 0x191c)
                                    *(fp_2 + 0x18) = x27_3 + 0x191c
                                case 2, 6
                                    int32_t var_dd0_1 = var_d4c + 1
                                    x27_3 = *(fp_2 + 0x18)
                                    
                                    if (x27_3 != *(fp_2 + 0x20))
                                        memcpy(x27_3, &var_26e0, 0x191c)
                                        *(fp_2 + 0x18) = x27_3 + 0x191c
                                    else
                                    label_9fa0bc:
                                        void* x26_3 = *(x28_1 + 0x10)
                                        size_t x27_5 = x27_3 - x26_3
                                        int64_t x20_6 = (x27_5 s>> 2) * 0x14de631624a3c377
                                        
                                        if (x20_6 + 1 u> 0xa32056a92e09e)
                                            std::__ndk1::__vector_base_common<true>::__throw_length_error()
                                            abort()
                                            noreturn
                                        
                                        int64_t x9_19 = x20_6 << 1
                                        int64_t x8_42
                                        
                                        if (x9_19 u< x20_6 + 1)
                                            x8_42 = x20_6 + 1
                                        else
                                            x8_42 = x9_19
                                        
                                        int64_t x22_5
                                        
                                        x22_5 = x20_6 u< 0x51902b549704f ? x8_42 : 0xa32056a92e09e
                                        
                                        int64_t x28_5
                                        
                                        if (x22_5 == 0)
                                            x28_5 = 0
                                        else
                                            if (x22_5 u> 0xa32056a92e09e)
                                                abort()
                                                noreturn
                                            
                                            x28_5 = operator new(x22_5 * 0x191c)
                                        
                                        int64_t fp_4 = x28_5 + x20_6 * 0x191c
                                        memcpy(fp_4, &var_26e0, 0x191c)
                                        int64_t x25_3 = fp_4 - x27_5
                                        
                                        if (x27_5 s>= 1)
                                            memcpy(x25_3, x26_3, x27_5)
                                        
                                        fp_2 = x28_1
                                        x28_4 = arg1
                                        x22_4 = arg3
                                        *(fp_2 + 0x10) = x25_3
                                        *(fp_2 + 0x18) = fp_4 + 0x191c
                                        *(fp_2 + 0x20) = x28_5 + x22_5 * 0x191c
                                        
                                        if (x26_3 != 0)
                                            operator delete(x26_3)
                                case 3
                                    if (var_d4c != 1)
                                        goto label_9fa0a0
                                    
                                    int32_t x0_11 = AbilitySource(x28_4, zx.q(var_d48))
                                    uint64_t x26_2 = zx.q(var_d48)
                                    var_dcc = x0_11
                                    int32_t var_3360[0xb0]
                                    int32_t var_d6c
                                    int32_t x0_13 = AbilityGetAssociatedCards(x28_4, zx.q(var_d6c), 
                                        x26_2, &var_3360)
                                    int32_t var_1a58_4
                                    
                                    if (x0_13 s>= 1)
                                        var_1a58_4 = x0_13
                                    label_9f9ffc:
                                        int64_t j = 0
                                        
                                        do
                                            j += 1
                                            var_26d8[j] = var_3360[j]
                                        while (j s< sx.q(var_1a58_4))
                                        
                                        goto label_9fa0a0
                                    
                                    if (AbilitySource(x28_4, x26_2) == 0x1121)
                                        int32_t x0_19 = CardsAtCard(x28_4, 
                                            zx.q(AbilitySourceCard(x28_4, x26_2)), &var_3360)
                                        var_1a58_4 = x0_19
                                        
                                        if (x0_19 s>= 1)
                                            goto label_9f9ffc
                                        
                                        goto label_9fa0a0
                                    
                                    int32_t var_1a58_5 = x0_13
                                    x27_3 = *(fp_2 + 0x18)
                                    
                                    if (x27_3 == *(fp_2 + 0x20))
                                        goto label_9fa0bc
                                    
                                    memcpy(x27_3, &var_26e0, 0x191c)
                                    *(fp_2 + 0x18) = x27_3 + 0x191c
                                case 4, 5
                                    if (var_d4c != 1)
                                    label_9fa0a0:
                                        x27_3 = *(fp_2 + 0x18)
                                        
                                        if (x27_3 == *(fp_2 + 0x20))
                                            goto label_9fa0bc
                                        
                                        memcpy(x27_3, &var_26e0, 0x191c)
                                        *(fp_2 + 0x18) = x27_3 + 0x191c
                                    else
                                        var_dcc = var_d48
                                        x27_3 = *(fp_2 + 0x18)
                                        
                                        if (x27_3 == *(fp_2 + 0x20))
                                            goto label_9fa0bc
                                        
                                        memcpy(x27_3, &var_26e0, 0x191c)
                                        *(fp_2 + 0x18) = x27_3 + 0x191c
                        i_4 += 1
                    while (i_4 s< sx.q(*(x21 + 0xd8)))

return operator delete[](x0_3)
