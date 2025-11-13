// 函数: _Z14PropDynamicSetI4Vec2EfR14UI2PropDynamicIT_ERK9PropGraphIS2_ERK8BlendDeff
// 地址: 0x10198e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_50 = v9
int32_t x24 = *(arg2 + 0x4c)
float v8 = arg4
int64_t x23_1 = sx.q(*(arg2 + 0x48))
int128_t v1
int128_t v2
int128_t v3

if (x24 != *(arg1 + 0xa0) || *(arg2 + 0x50) != *(arg1 + 0xa4) || x23_1.d != *(arg1 + 0x9c))
label_101995c:
    arg4 = *(arg1 + 0xbc)
    v2.d = *(arg1 + 0xa8)
    v1.d = *(arg1 + 0xac)
    v1.d = arg4 f+ v1.d
    v1.d = v1.d f+ v2.d
    
    if (v1.d f<= v8)
        v1 = *(arg1 + 0x64)
        *arg1 = *(arg1 + 0x54)
        *(arg1 + 0x10) = v1
        int32_t x8_10 = *(arg1 + 0xa4)
        v2 = *(arg1 + 0x84)
        v1 = *(arg1 + 0x94)
        v3 = *(arg1 + 0x74)
        *(arg1 + 0xb8) = arg4
        *(arg1 + 0x50) = x8_10
        *(arg1 + 0x30) = v2
        *(arg1 + 0x40) = v1
        *(arg1 + 0x20) = v3
    else
        if (x24 == *(arg1 + 0x4c) && *(arg2 + 0x50) == *(arg1 + 0x50) && x23_1.d == *(arg1 + 0x48))
            int32_t x0_3
            
            if (x23_1.d != 0)
                x0_3 = memcmp(arg2, arg1, x23_1 * 0x18)
            
            if (x23_1.d == 0 || x0_3 == 0)
                int32_t x8_8 = *(arg1 + 0xb0)
                
                if (x8_8 u> 0x19 || (1 << x8_8 & 0x290001d) == 0)
                    pthread_kill(pthread_self(), 6)
                    UI2PropDynamic<ColorRgbaI>* x0_6
                    PropGraph<ColorRgbaI>* x1_2
                    BlendDef* x2_2
                    float v0_2
                    x0_6, x1_2, x2_2, v0_2 = XNoReturn()
                    return PropDynamicSet<ColorRgbaI>(x0_6, x1_2, x2_2, v0_2) __tailcall
        
        arg4, v1, v2 = UI2PropDynamic<Vec2>::Eval(v8)
        *arg1 = arg4
        *(arg1 + 4) = v1.d
        v2.q = 0
        v2:8.q = 0
        *(arg1 + 0x50) = 0
        __builtin_memset(arg1 + 8, 0, 0x40)
        *(arg1 + 0x48) = -0xffffffff
        *(arg1 + 0xb8) = v8
    
    arg4 = (*(arg2 + 0x10)).d
    *(arg1 + 0x54) = *arg2
    *(arg1 + 0x64) = arg4.o
    v1 = *(arg2 + 0x30)
    arg4 = (*(arg2 + 0x40)).d
    v2 = *(arg2 + 0x20)
    *(arg1 + 0xa4) = *(arg2 + 0x50)
    *(arg1 + 0x84) = v1
    *(arg1 + 0x94) = arg4.o
    *(arg1 + 0x74) = v2
    int32_t x8_12 = *(arg3 + 8)
    int64_t x9_3 = *arg3
    *(arg1 + 0xb4) = v8
    *(arg1 + 0xbc) = v8
    *(arg1 + 0xb0) = x8_12
    *(arg1 + 0xa8) = x9_3
    v1.d = *arg3
    v9.d = *(arg3 + 4) f+ v1.d
else
    v9.d = 0f
    
    if (x23_1.d != 0)
        int32_t x0_1
        x0_1, v1, v2, v3 = memcmp(arg2, arg1 + 0x54, x23_1 * 0x18)
        
        if (x0_1 != 0)
            goto label_101995c
return v9.d
