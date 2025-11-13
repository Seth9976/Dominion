// 函数: _ZN7fftimpl7cftfsubEiPf
// 地址: 0x1076b30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 s>= 9)
    if (arg1 s>= 0x21)
        fftimpl::cftmdl1(arg1, arg2)
        
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
        
        return fftimpl::bitrv2(arg1, arg2) __tailcall
    
    if (arg1 != 0x20)
        fftimpl::cftf081(arg2)
        int64_t v3_2 = *(arg2 + 0x18)
        int64_t v1_2 = *(arg2 + 0x30)
        int64_t v2_2 = *(arg2 + 8)
        *(arg2 + 8) = *(arg2 + 0x20)
        *(arg2 + 0x30) = v3_2
        *(arg2 + 0x18) = v1_2
        *(arg2 + 0x20) = v2_2
    else
        fftimpl::cftf161(arg2)
        int64_t v0_1 = *(arg2 + 8)
        int64_t v1_1 = *(arg2 + 0x10)
        int64_t v2_1 = *(arg2 + 0x18)
        int64_t v3_1 = *(arg2 + 0x20)
        int64_t v4_1 = *(arg2 + 0x28)
        int64_t v5_1 = *(arg2 + 0x38)
        int64_t v7_1 = *(arg2 + 0x50)
        int64_t v16_1 = *(arg2 + 0x58)
        int64_t v17_1 = *(arg2 + 0x60)
        int64_t v18_1 = *(arg2 + 0x68)
        int64_t v19_1 = *(arg2 + 0x70)
        *(arg2 + 8) = *(arg2 + 0x40)
        *(arg2 + 0x10) = v3_1
        *(arg2 + 0x28) = v7_1
        *(arg2 + 0x18) = v17_1
        *(arg2 + 0x20) = v1_1
        *(arg2 + 0x38) = v19_1
        *(arg2 + 0x40) = v0_1
        *(arg2 + 0x50) = v4_1
        *(arg2 + 0x58) = v18_1
        *(arg2 + 0x60) = v2_1
        *(arg2 + 0x68) = v16_1
        *(arg2 + 0x70) = v5_1
else
    float v0
    float v1
    float v2
    float v3
    
    if (arg1 == 4)
        v0 = *arg2
        v1 = arg2[1]
        v2 = arg2[2]
        v3 = arg2[3]
        *arg2 = v0 + v2
        arg2[1] = v1 + v3
        arg2[2] = v0 - v2
        arg2[3] = v1 - v3
    else if (arg1 == 8)
        v0 = *arg2
        v1 = arg2[1]
        v2 = arg2[4]
        v3 = arg2[5]
        float v4 = arg2[2]
        float v5 = arg2[3]
        float v6 = arg2[6]
        float v7 = arg2[7]
        float v16 = v0 + v2
        float v17 = v1 + v3
        v0 = v0 - v2
        v1 = v1 - v3
        v2 = v4 + v6
        v3 = v5 + v7
        v4 = v4 - v6
        v5 = v5 - v7
        *arg2 = v16 + v2
        arg2[1] = v17 + v3
        arg2[2] = v0 - v5
        arg2[3] = v1 + v4
        arg2[4] = v16 - v2
        arg2[5] = v17 - v3
        arg2[6] = v0 + v5
        arg2[7] = v1 - v4
