// 函数: _Z14PropDynamicSetIiEfR14UI2PropDynamicIT_ERK9PropGraphIS1_ERK8BlendDeff
// 地址: 0x1019c8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_50 = v9
int32_t x24 = *(arg2 + 0x34)
float v8 = arg4
int64_t x23_1 = sx.q(*(arg2 + 0x30))
int128_t v1
int128_t v2
int128_t v3
int128_t v4

if (x24 != *(arg1 + 0x70) || *(arg2 + 0x38) != *(arg1 + 0x74) || x23_1.d != *(arg1 + 0x6c))
label_1019d00:
    arg4 = *(arg1 + 0x8c)
    v2.d = *(arg1 + 0x78)
    v1.d = *(arg1 + 0x7c)
    v1.d = arg4 f+ v1.d
    v1.d = v1.d f+ v2.d
    
    if (v1.d f<= v8)
        v1 = *(arg1 + 0x68)
        v3 = *(arg1 + 0x4c)
        v2 = *(arg1 + 0x5c)
        v4 = *(arg1 + 0x3c)
        *(arg1 + 0x88) = arg4
        *(arg1 + 0x2c) = v1
        *(arg1 + 0x10) = v3
        *(arg1 + 0x20) = v2
        *arg1 = v4
    else
        if (x24 == *(arg1 + 0x34) && *(arg2 + 0x38) == *(arg1 + 0x38) && x23_1.d == *(arg1 + 0x30))
            int32_t x0_3
            
            if (x23_1.d != 0)
                x0_3 = memcmp(arg2, arg1, x23_1 << 4)
            
            if (x23_1.d == 0 || x0_3 == 0)
                int32_t x8_6 = *(arg1 + 0x80)
                
                if (x8_6 u> 0x19 || (1 << x8_6 & 0x290001d) == 0)
                    pthread_kill(pthread_self(), 6)
                    return CalcTrantitionsEndTime(XNoReturn()) __tailcall
        
        int32_t x0_5
        x0_5, v1, v2, v3 = UI2PropDynamic<int32_t>::Eval(v8)
        v1.q = -0xffffffff
        *arg1 = x0_5
        *(arg1 + 0x38) = 0
        __builtin_memset(arg1 + 4, 0, 0x2c)
        *(arg1 + 0x30) = -0xffffffff
        *(arg1 + 0x88) = v8
    
    v2 = *(arg2 + 0x10)
    v1 = *(arg2 + 0x20)
    v3 = *arg2
    *(arg1 + 0x68) = (*(arg2 + 0x2c)).d.o
    *(arg1 + 0x4c) = v2
    *(arg1 + 0x5c) = v1
    *(arg1 + 0x3c) = v3
    int32_t x8_8 = *(arg3 + 8)
    int64_t x9_3 = *arg3
    *(arg1 + 0x84) = v8
    *(arg1 + 0x8c) = v8
    *(arg1 + 0x80) = x8_8
    *(arg1 + 0x78) = x9_3
    v1.d = *arg3
    v9.d = *(arg3 + 4) f+ v1.d
else
    v9.d = 0f
    
    if (x23_1.d != 0)
        int32_t x0_1
        x0_1, v1, v2, v3, v4 = memcmp(arg2, arg1 + 0x3c, x23_1 << 4)
        
        if (x0_1 != 0)
            goto label_1019d00
return v9.d
