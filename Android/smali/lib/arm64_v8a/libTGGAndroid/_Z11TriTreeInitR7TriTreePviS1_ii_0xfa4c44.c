// 函数: _Z11TriTreeInitR7TriTreePviS1_ii
// 地址: 0xfa4c44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v14
int64_t var_80 = v14
int64_t v13
int64_t var_70 = v13
int64_t v12
int64_t var_68 = v12
int64_t v11
int64_t var_60 = v11
int64_t v10
int64_t var_58 = v10
int64_t v9
int64_t var_50 = v9
int64_t v8
int64_t var_48 = v8
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = arg2
*(arg1 + 0x18) = arg4
*(arg1 + 0x20) = arg3
*(arg1 + 0x24) = arg5
*(arg1 + 0x28) = arg6

if (arg6 s>= 1)
    int64_t x21_1 = 0
    int64_t x24_1 = sx.q(arg3)
    v8.d = 0f
    
    while (true)
        int16_t* x8_1 = arg4 + x21_1 * 6
        int32_t* x10_1 = arg2 + sx.q(*x8_1) * x24_1
        int32_t* x9_2 = arg2 + sx.q(x8_1[1]) * x24_1
        v10.d = *x10_1
        int64_t v0
        v0.d = *x9_2
        v9.d = v10.d f+ v8.d
        
        if (not(v10.d f<= v0.d))
            v10 = v0
        else if (not(v9.d f>= v0.d))
            v9 = v0
        
        v12.d = x10_1[1]
        v0.d = x9_2[1]
        v11.d = v12.d f+ v8.d
        
        if (not(v12.d f<= v0.d))
            v12 = v0
        else if (not(v11.d f>= v0.d))
            v11 = v0
        
        v14.d = x10_1[2]
        v0.d = x9_2[2]
        v13.d = v14.d f+ v8.d
        
        if (not(v14.d f<= v0.d))
            v14 = v0
        else if (not(v13.d f>= v0.d))
            v13 = v0
        
        int32_t* x8_3 = arg2 + sx.q(x8_1[2]) * x24_1
        v0.d = *x8_3
        
        if (not(v10.d f<= v0.d))
            v10 = v0
        else if (not(v9.d f>= v0.d))
            v9 = v0
        
        v0.d = x8_3[1]
        
        if (not(v12.d f<= v0.d))
            v12 = v0
        else if (not(v11.d f>= v0.d))
            v11 = v0
        
        v0.d = x8_3[2]
        
        if (not(v14.d f<= v0.d))
            v14 = v0
        else if (not(v13.d f>= v0.d))
            v13 = v0
        
        void* x8_4 = *gRTreeGlobals
        *(gRTreeGlobals + 0x14) += 1
        
        if (x8_4 == 0)
            int64_t* x0_1
            x0_1, v0 = XMalloc(8 | (0xfffffff & (*(gRTreeGlobals + 0x10) * 3)) << 4)
            *x0_1 = *(gRTreeGlobals + 8)
            int32_t x9_5 = *(gRTreeGlobals + 0x10)
            x8_4 = *gRTreeGlobals
            *(gRTreeGlobals + 8) = x0_1
            
            if (x9_5 s>= 1)
                int64_t i = 0
                void* x9_6 = &x0_1[1]
                
                do
                    void* x11_2 = x9_6
                    *x9_6 = x8_4
                    x9_6 += 0x30
                    i += 1
                    x8_4 = x11_2
                while (i s< sx.q(*(gRTreeGlobals + 0x10)))
                
                x8_4 = x9_6 - 0x30
            
            *gRTreeGlobals = x8_4
        
        *gRTreeGlobals = *x8_4
        *x8_4 = v10.d
        *(x8_4 + 4) = v12.d
        *(x8_4 + 8) = v14.d
        *(x8_4 + 0xc) = v9.d
        *(x8_4 + 0x10) = v11.d
        *(x8_4 + 0x14) = v13.d
        *(x8_4 + 0x20) = 0
        *(x8_4 + 0x24) = x21_1.d
        *(x8_4 + 0x18) = 0
        x21_1 += 1
        *(x8_4 + 0x20) = *(arg1 + 8)
        *(arg1 + 8) = x8_4
        *(x8_4 + 0x18) = 0
        
        if (x21_1 == zx.q(arg6))
            break
        
        arg4 = *(arg1 + 0x18)

return RTreeUpdate(arg1) __tailcall
