// 函数: _ZN7fftimpl7cftbsubEiPf
// 地址: 0x1076d54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 s>= 9)
    if (arg1 s>= 0x21)
        fftimpl::cftb1st(arg1, arg2)
        
        if (arg1 s>= 0x201)
            int32_t i_1 = arg1
            float* x22_1
            int32_t x23_1
            int32_t i
            
            do
                i = i_1
                i_1 u>>= 2
                x23_1 = arg1 - i_1
                x22_1 = &arg2[sx.q(x23_1)]
                fftimpl::cftmdl1(i_1, x22_1)
            while (i u> 0x803)
            fftimpl::cftleaf(i_1, 1, x22_1)
            
            if (x23_1 s>= 1)
                int32_t x23_2 = neg.d(i_1)
                int32_t x22_2 = 1
                int32_t x25_1 = arg1
                
                do
                    fftimpl::cftleaf(i_1, fftimpl::cfttree(i_1, x23_2 + x25_1, x22_2, arg2), 
                        &arg2[sx.q(neg.d(i_1 << 1) + x25_1)])
                    x25_1 -= i_1
                    x22_2 += 1
                while (x23_2 + x25_1 s> 0)
        else if (arg1 s< 0x81)
            fftimpl::cftfx41(arg1, arg2)
        else
            fftimpl::cftleaf(arg1, 1, arg2)
        
        return fftimpl::bitrv2conj(arg1, arg2) __tailcall
    
    if (arg1 != 0x20)
        fftimpl::cftf081(arg2)
        int64_t v0_7 = *(arg2 + 8)
        int64_t v1_6 = *(arg2 + 0x10)
        int64_t v2_5 = *(arg2 + 0x38)
        int64_t v3_6 = *(arg2 + 0x18)
        int64_t v4_4 = *(arg2 + 0x20)
        int64_t v5_3 = *(arg2 + 0x28)
        *(arg2 + 0x28) = *(arg2 + 0x30)
        *(arg2 + 0x30) = v1_6
        *(arg2 + 8) = v2_5
        *(arg2 + 0x10) = v3_6
        *(arg2 + 0x18) = v5_3
        *(arg2 + 0x20) = v0_7
        *(arg2 + 0x38) = v4_4
    else
        fftimpl::cftf161(arg2)
        int64_t v0_6 = *(arg2 + 8)
        int64_t v1_5 = *(arg2 + 0x10)
        int64_t v2_4 = *(arg2 + 0x18)
        int64_t v3_5 = *(arg2 + 0x20)
        int64_t v4_3 = *(arg2 + 0x28)
        int64_t v5_2 = *(arg2 + 0x30)
        int64_t v6_2 = *(arg2 + 0x38)
        int64_t v7_1 = *(arg2 + 0x40)
        int64_t v17_1 = *(arg2 + 0x50)
        int64_t v22_1 = *(arg2 + 0x70)
        int64_t v18_1 = *(arg2 + 0x78)
        int64_t v19_1 = *(arg2 + 0x58)
        int64_t v20_1 = *(arg2 + 0x60)
        int64_t v21_1 = *(arg2 + 0x68)
        *(arg2 + 0x38) = *(arg2 + 0x48)
        *(arg2 + 0x40) = v0_6
        *(arg2 + 8) = v18_1
        *(arg2 + 0x10) = v6_2
        *(arg2 + 0x18) = v19_1
        *(arg2 + 0x20) = v2_4
        *(arg2 + 0x28) = v21_1
        *(arg2 + 0x30) = v4_3
        *(arg2 + 0x48) = v22_1
        *(arg2 + 0x50) = v5_2
        *(arg2 + 0x58) = v17_1
        *(arg2 + 0x60) = v1_5
        *(arg2 + 0x68) = v20_1
        *(arg2 + 0x70) = v3_5
        *(arg2 + 0x78) = v7_1
else
    int128_t v0
    int128_t v1
    uint128_t v2
    uint128_t v3
    
    if (arg1 == 4)
        v0.d = *arg2
        v1.d = arg2[1]
        v2.d = arg2[2]
        v3.d = arg2[3]
        float v4 = v0.d f- v2.d
        float v5 = v1.d f- v3.d
        v0.d = v0.d f+ v2.d
        v1.d = v1.d f+ v3.d
        *arg2 = v0.d
        arg2[1] = v1.d
        arg2[2] = v4
        arg2[3] = v5
    else if (arg1 == 8)
        v2.q = *(arg2 + 8)
        v0.q = *(arg2 + 0x10)
        v1.q = *arg2
        v3.q = *(arg2 + 0x18)
        float128 v0_1 = vrev64_s32(v0)
        float128 v1_1 = vrev64_s32(v1)
        uint128_t v2_1 = vzip1q_s32(v2, v2)
        uint128_t v3_1 = vzip1q_s32(v3, v3)
        v1_1:8.q = v1_1.q
        v0_1:8.q = v0_1.q
        float128 v4_1 = vsubq_f32(v2_1, v3_1)
        float128 v2_2 = vaddq_f32(v2_1, v3_1)
        float128 v3_2 = vsubq_f32(v1_1, v0_1)
        float128 v0_2 = vaddq_f32(v1_1, v0_1)
        uint128_t v1_2 = vextq_s8(v4_1, v2_2, 0xc)
        uint128_t v5_1 = vextq_s8(v3_2, v0_2, 0xc)
        uint128_t v6_1 = vextq_s8(v1_2, v4_1, 4)
        uint128_t v1_3 = vextq_s8(v1_2, v1_2, 8)
        float128 v0_3 = vaddq_f32(v0_2, v2_2)
        float128 v2_3 = vaddq_f32(v3_2, v4_1)
        uint128_t v3_3 = vextq_s8(v5_1, v3_2, 4)
        uint128_t v4_2 = vextq_s8(v5_1, v5_1, 8)
        uint128_t v1_4 = vextq_s8(v6_1, v1_3, 0xc)
        int64_t v0_4 = vextq_s8(v0_3, v0_3, 4)
        float128 v3_4 = vextq_s8(v3_3, v4_2, 0xc)
        *arg2 = v0_4
        float128 v0_5 = vsubq_f32(v3_4, v1_4)
        arg2[2] = v2_3:0xc.d
        *(arg2 + 0xc) = v0_5
        arg2[7] = v2_3.d
