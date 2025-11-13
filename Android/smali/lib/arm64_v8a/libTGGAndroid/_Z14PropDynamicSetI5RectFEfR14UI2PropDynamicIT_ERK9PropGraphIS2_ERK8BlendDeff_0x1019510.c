// 函数: _Z14PropDynamicSetI5RectFEfR14UI2PropDynamicIT_ERK9PropGraphIS2_ERK8BlendDeff
// 地址: 0x1019510
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_60 = v11
int64_t v10
int64_t var_58 = v10
int64_t v9
int64_t var_50 = v9
int32_t x24 = *(arg2 + 0x7c)
float v8 = arg4
int64_t x23_1 = sx.q(*(arg2 + 0x78))
int128_t v1
int128_t v2
int128_t v3

if (x24 != *(arg1 + 0x100) || *(arg2 + 0x80) != *(arg1 + 0x104) || x23_1.d != *(arg1 + 0xfc))
label_101958c:
    v9.d = *(arg1 + 0x11c)
    v10.d = *(arg1 + 0x10c)
    v11.d = *(arg1 + 0x108)
    
    if (v9.d f+ v10.d f+ v11.d <= v8)
        v3 = *(arg1 + 0x94)
        *arg1 = (*(arg1 + 0x84)).d.o
        *(arg1 + 0x10) = v3
        arg4 = (*(arg1 + 0xc4)).d
        v2 = *(arg1 + 0xa4)
        *(arg1 + 0x30) = *(arg1 + 0xb4)
        *(arg1 + 0x40) = arg4.o
        *(arg1 + 0x20) = v2
        int32_t x8_11 = *(arg1 + 0x104)
        v1 = *(arg1 + 0xe4)
        arg4 = (*(arg1 + 0xf4)).d
        v2 = *(arg1 + 0xd4)
        *(arg1 + 0x118) = v9.d
        *(arg1 + 0x80) = x8_11
        *(arg1 + 0x60) = v1
        *(arg1 + 0x70) = arg4.o
        *(arg1 + 0x50) = v2
    else
        if (x24 == *(arg1 + 0x7c) && *(arg2 + 0x80) == *(arg1 + 0x80) && x23_1.d == *(arg1 + 0x78))
            int32_t x0_3
            
            if (x23_1.d != 0)
                x0_3, v1, v2, v3 = memcmp(arg2, arg1, x23_1 * 0x28)
            
            if (x23_1.d == 0 || x0_3 == 0)
                int32_t x8_8 = *(arg1 + 0x110)
                
                if (x8_8 u> 0x19 || (1 << x8_8 & 0x290001d) == 0)
                    pthread_kill(pthread_self(), 6)
                    UI2PropDynamic<float>* x0_6
                    PropGraph<float>* x1_3
                    BlendDef* x2_3
                    float v0_1
                    x0_6, x1_3, x2_3, v0_1 = XNoReturn()
                    return PropDynamicSet<float>(x0_6, x1_3, x2_3, v0_1) __tailcall
        
        v1.d = v8 f- v9.d
        
        if (v1.d f< v10.d f+ v11.d || *(arg1 + 0xfc) s> 1)
            arg4, v1, v2, v3 =
                PropEval<RectF>(arg1, arg1 + 0x84, arg1 + 0x108, v8 - *(arg1 + 0x118), v1.d, v1.d)
        else
            arg4 = *(arg1 + 0x84)
            v1.d = *(arg1 + 0x88)
            v2.d = *(arg1 + 0x8c)
            v3.d = *(arg1 + 0x90)
        
        *arg1 = arg4
        *(arg1 + 4) = v1.d
        *(arg1 + 0x70) = 0
        *(arg1 + 8) = v2.d
        *(arg1 + 0xc) = v3.d
        *(arg1 + 0x80) = 0
        __builtin_memset(arg1 + 0x10, 0, 0x60)
        *(arg1 + 0x78) = -0xffffffff
        *(arg1 + 0x118) = v8
    
    *(arg1 + 0x84) = (*arg2).d.o
    arg4 = (*(arg2 + 0x40)).d
    v3 = *(arg2 + 0x10)
    v2 = *(arg2 + 0x20)
    *(arg1 + 0xb4) = *(arg2 + 0x30)
    *(arg1 + 0xc4) = arg4.o
    *(arg1 + 0x94) = v3
    *(arg1 + 0xa4) = v2
    v1 = *(arg2 + 0x60)
    arg4 = (*(arg2 + 0x70)).d
    v2 = *(arg2 + 0x50)
    *(arg1 + 0x104) = *(arg2 + 0x80)
    *(arg1 + 0xe4) = v1
    *(arg1 + 0xf4) = arg4.o
    *(arg1 + 0xd4) = v2
    int32_t x8_13 = *(arg3 + 8)
    int64_t x9_3 = *arg3
    *(arg1 + 0x114) = v8
    *(arg1 + 0x11c) = v8
    *(arg1 + 0x110) = x8_13
    *(arg1 + 0x108) = x9_3
    v1.d = *arg3
    v9.d = *(arg3 + 4) f+ v1.d
else
    v9.d = 0f
    
    if (x23_1.d != 0)
        int32_t x0_1
        x0_1, v1, v2, v3 = memcmp(arg2, arg1 + 0x84, x23_1 * 0x28)
        
        if (x0_1 != 0)
            goto label_101958c
return v9.d
