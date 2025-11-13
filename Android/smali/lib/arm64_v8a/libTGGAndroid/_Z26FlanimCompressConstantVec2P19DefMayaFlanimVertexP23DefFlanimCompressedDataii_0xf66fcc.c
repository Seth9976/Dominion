// 函数: _Z26FlanimCompressConstantVec2P19DefMayaFlanimVertexP23DefFlanimCompressedDataii
// 地址: 0xf66fcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg2 + 8) = arg4
int32_t* result = XCallocAllowingZeroSize(arg4)
*arg2 = result
*(arg2 + 0xc) = 3
int32_t x9 = *(arg1 + 8)

if (x9 s>= 1)
    int16_t* x8_4 = &result[sx.q(arg4 s/ 0xa) * 2]
    float v0_1
    int32_t v1_1
    int32_t v2_1
    float v3_1
    
    if (arg3 == 0)
        float* x9_3 = *arg1
        v0_1 = *x9_3
        v1_1 = x9_3[1]
        void* x9_4 = &result[sx.q(arg3) * 2]
        x8_4[sx.q(arg3)] = 0
        *x9_4 = v0_1
        *(x9_4 + 4) = v1_1
        int32_t x11_3 = *(arg1 + 8)
        
        if (x11_3 s>= 2)
            int64_t x9_5 = 0
            int32_t x10_2 = arg3 + 1
            int64_t i = 1
            
            do
                void* x13_4 = *arg1 + x9_5
                v3_1 = *(x13_4 + 0x38)
                v2_1 = *(x13_4 + 0x3c)
                bool z_2
                
                if (v1_1 f== v2_1)
                    v0_1 - v3_1
                    z_2 = v0_1 == v3_1
                else
                    z_2 = false
                
                if (not(z_2))
                    void* x11_4 = &result[sx.q(x10_2) * 2]
                    x8_4[sx.q(x10_2)] = (i.d).w
                    *x11_4 = v3_1
                    *(x11_4 + 4) = v2_1
                    x11_3 = *(arg1 + 8)
                    x10_2 += 1
                    v1_1 = v2_1
                    v0_1 = v3_1
                
                i += 1
                x9_5 += 0x38
            while (i s< sx.q(x11_3))
    else if (arg3 != 1)
        int64_t i_1 = 0
        int32_t x11_5 = 0
        v0_1 = *V20
        v1_1 = *(V20 + 4)
        int64_t x12_2 = 0x14
        
        do
            void* x14_1 = *arg1
            
            if (arg3 == 3)
                void* x15_2 = x14_1 + i_1 * 0x38
                v2_1 = *(x15_2 + 0x1c)
                v3_1 = *(x15_2 + 0x18)
                
                if (i_1 == 0 || v1_1 f!= v2_1 || not(v0_1 == v3_1))
                label_f67140:
                    void* x9_6 = &result[sx.q(x11_5) * 2]
                    x8_4[sx.q(x11_5)] = (i_1.d).w
                    *x9_6 = v3_1
                    *(x9_6 + 4) = v2_1
                    x9 = *(arg1 + 8)
                    x11_5 += 1
                    v1_1 = v2_1
                    v0_1 = v3_1
            else
                if (arg3 != 2)
                    pthread_kill(pthread_self(), 6)
                    DefMayaFlanimVertex* x0_2
                    int32_t x1
                    x0_2, x1 = XNoReturn()
                    return FlanimCompressGetSizeConstantVec2(x0_2, x1) __tailcall
                
                int32_t* x15_1 = x14_1 + x12_2
                v2_1 = *x15_1
                v3_1 = *(x15_1 - 4)
                
                if (i_1 == 0 || v1_1 f!= v2_1 || not(v0_1 == v3_1))
                    goto label_f67140
            
            i_1 += 1
            x12_2 += 0x38
        while (i_1 s< sx.q(x9))
    else
        void* x9_1 = *arg1
        v0_1 = *(x9_1 + 8)
        v1_1 = *(x9_1 + 0xc)
        *x8_4 = 0
        *result = v0_1
        result[1] = v1_1
        int32_t x11_1 = *(arg1 + 8)
        
        if (x11_1 s>= 2)
            int64_t x9_2 = 0
            int64_t i_2 = 1
            int32_t x12_1 = 1
            
            do
                void* x13_2 = *arg1 + x9_2
                v3_1 = *(x13_2 + 0x40)
                v2_1 = *(x13_2 + 0x44)
                bool z_1
                
                if (v1_1 f== v2_1)
                    v0_1 - v3_1
                    z_1 = v0_1 == v3_1
                else
                    z_1 = false
                
                if (not(z_1))
                    void* x11_2 = &result[sx.q(x12_1) * 2]
                    x8_4[sx.q(x12_1)] = (i_2.d).w
                    *x11_2 = v3_1
                    *(x11_2 + 4) = v2_1
                    x11_1 = *(arg1 + 8)
                    x12_1 += 1
                    v1_1 = v2_1
                    v0_1 = v3_1
                
                i_2 += 1
                x9_2 += 0x38
            while (i_2 s< sx.q(x11_1))

return result
