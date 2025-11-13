// 函数: _Z18QueueChoiceAbilityR7DomGame9PlayerWhoP9AbilityIDiS3_b
// 地址: 0xbd7ae4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 == 0)
    return 0

int32_t x21_1 = arg2
int64_t x24_1

if (arg4 == 1)
    uint64_t x1 = zx.q(*arg3)
    
    if ((x1 & 0x30) == 0)
        void* x0_4 = AbilityGetRegistered(arg1, x1)
        
        if (*(x0_4 + 0x4c) != 2 || (zx.d(*(x0_4 + 0x70)) & 1) == 0)
        label_bd7b88:
            *arg5 = *arg3
            return 1
        
        memcpy(arg5, arg3, zx.q(arg4) << 2)
        x24_1 = 1
    else
        if ((zx.d(*(AbilityGetStatic(arg1, x1) + 0xb4)) & 1) == 0)
            goto label_bd7b88
        
        memcpy(arg5, arg3, zx.q(arg4) << 2)
        x24_1 = 1
    
    goto label_bd7bac

memcpy(arg5, arg3, zx.q(arg4) << 0x20 s>> 0x1e)
int32_t x26_1
int128_t v0_1

if (arg4 s< 1)
    x26_1 = 0
else
    x24_1 = sx.q(arg4)
label_bd7bac:
    int64_t i = 0
    x26_1 = 1
    
    do
        uint64_t x1_3 = zx.q(*(arg3 + (i << 2)))
        
        if ((x1_3 & 0x30) != 0)
            void* x0_6
            x0_6, v0_1 = AbilityGetStatic(arg1, x1_3)
            
            if ((zx.d(*(x0_6 + 0xb4)) & 1) == 0)
                break
        else
            void* x0_8
            x0_8, v0_1 = AbilityGetRegistered(arg1, x1_3)
            
            if (*(x0_8 + 0x4c) != 2)
                break
            
            if ((zx.d(*(x0_8 + 0x70)) & 1) == 0)
                break
        
        i += 1
        x26_1 = i s< x24_1 ? 1 : 0
    while (zx.q(arg4) != i)

v0_1.q = 0
v0_1:8.q = 0
int32_t x24_2

if (*(arg1 + 0x19d4) == x21_1)
    x24_2 = *(arg1 + 0x19d8)
else
    x24_2 = x21_1

int128_t var_a0
__builtin_memset(&var_a0, 0, 0x38)
int64_t var_d20
int128_t var_90

if ((x26_1 & 1) == 0 && arg4 == 1)
    uint64_t x25_2 = zx.q(*arg3)
    void* x0_10
    
    if ((x25_2 & 0x30) != 0)
        x0_10, v0_1 = AbilityGetStatic(arg1, x25_2)
    
    int32_t x8_12
    int32_t x9_2
    
    if ((x25_2 & 0x30) != 0 && *(x0_10 + 4) == 0)
        int32_t x8_11 = *(x0_10 + 0xc)
        
        x8_12 = x8_11 == 5 ? 0x1d : 0
        
        if (x8_11 == 5)
            x9_2 = (x25_2 u>> 0x12).d & 0x3fff
        else
            x9_2 = 0
    else
        x8_12 = 0
        x9_2 = 0
    
    var_d20 = 0
    int64_t var_d18_1 = 0
    v0_1 = var_d20.o
    var_a0.d = x8_12
    var_90:4.q = 0
    var_a0 = v0_1
    var_90:0xc.d = x9_2
    int128_t var_80
    __builtin_memset(&var_80, 0, 0x18)

if (((x26_1 | not.d(arg6.d)) & 1) == 0)
    int32_t x8_15 = *(__emutls_get_address(__emutls_v.gContextStack_tl, v0_1) + 0x13000)
    
    if (x8_15 s<= 2)
        int64_t* x23_4 =
            __emutls_get_address(__emutls_v.gContextStack_tl) + muls.dp.d(x8_15 - 1, 0x98) + 8
        
        if (CountOngoing(*x23_4, zx.q(x23_4[2].d), 0x18, 0, 0) s<= 0
                && CountOngoing(*x23_4, zx.q(x23_4[2].d), 0x19, 0, 0) s<= 0)
            var_a0:8.q = &var_d20
            int64_t var_70
            var_70.d = ComputeLookahead(arg1, zx.q(x21_1), &var_d20, &var_90:8)

int64_t var_d28 = 0
int32_t var_d38_1 = 0
int32_t var_d40_1 = 0
int32_t var_d60_1 = x26_1 & 1
int32_t var_d48_1 = 4
int128_t* var_d50_1 = &var_a0
int32_t var_d58_1 = 0
return DomNotifyYield(arg1, &var_d28, zx.q(x21_1), zx.q(x24_2), 6, arg5, zx.q(arg4), 1)
