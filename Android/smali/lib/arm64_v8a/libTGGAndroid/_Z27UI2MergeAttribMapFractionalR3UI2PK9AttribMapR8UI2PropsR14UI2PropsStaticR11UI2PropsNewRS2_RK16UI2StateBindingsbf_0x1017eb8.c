// 函数: _Z27UI2MergeAttribMapFractionalR3UI2PK9AttribMapR8UI2PropsR14UI2PropsStaticR11UI2PropsNewRS2_RK16UI2StateBindingsbf
// 地址: 0x1017eb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int32_t var_c74 = 0

if (*arg6 s< 1)
    return 

v8 = arg9.q
int64_t x27_1 = 0
int64_t x26_1 = 0

while (true)
    int32_t* x8_6 = *(arg6 + 8)
    int32_t x9_1 = *(x8_6 + x27_1)
    float var_c70[0x100]
    AttribMap* var_870
    
    if (x9_1 == 0x76)
        int32_t* x8_4 = *(x8_6 + x27_1 + 8)
        arg9 = *(arg5 + 0x3c)
        float v2 = *(arg5 + 0x78)
        float v1 = arg9 + *(arg5 + 0xb4)
        arg9 = arg9 + (*x8_4 - arg9) f* v8.d
        float v4 = v2 + *(arg5 + 0xf0)
        v1 = v1 + (x8_4[2] f- v1) f* v8.d
        v2 = v2 + (x8_4[1] f- v2) f* v8.d
        float v3 = v4 + (x8_4[3] f- v4) f* v8.d
        __builtin_memset(arg5 + 0x40, 0, 0x2c)
        *(arg5 + 0x3c) = arg9
        *(arg5 + 0x6c) = -0xffffffff
        *(arg5 + 0x74) = 0
        __builtin_memset(arg5 + 0x7c, 0, 0x2c)
        *(arg5 + 0x78) = v2
        *(arg5 + 0xa8) = -0xffffffff
        *(arg5 + 0xb0) = 0
        __builtin_memset(arg5 + 0xb8, 0, 0x2c)
        *(arg5 + 0xe4) = -0xffffffff
        *(arg5 + 0xec) = 0
        *(arg5 + 0xb4) = v1 - arg9
        __builtin_memset(arg5 + 0xf4, 0, 0x2c)
        *(arg5 + 0xf0) = v3 - v2
        *(arg5 + 0x120) = -0xffffffff
        *(arg5 + 0x128) = 0
    label_1017ff0:
        x26_1 += 1
        x27_1 += 0x10
        
        if (x26_1 s>= sx.q(*arg6))
            uint64_t x19_2 = zx.q(var_c74)
            
            if (x19_2.d s< 1)
                break
            
            AttribMap** x20_2 = &var_870
            float (* x24_2)[0x100] = &var_c70
            v8.d = fconvert.s(1f)
            
            while (not(*x24_2 f!= v8.d))
                AttribMap* x4_1 = *x20_2
                x20_2 = &x20_2[1]
                UI2MergeAttribMap(arg1, arg2, arg3, arg4, x4_1, arg7, false, nullptr)
                uint64_t temp0_1 = x19_2
                x19_2 -= 1
                x24_2 = &(*x24_2)[1]
                
                if (temp0_1 == 1)
                    return 
        else
            continue
    else if (x9_1 != 0x80)
        char var_cb8_1 = arg8 & 1
        int64_t var_cb0_1 = 0
        UI2PropsStatic& var_cc8_1 = arg4
        void* __offset(UI2, 0xc18) var_cc0_1 = arg1 + 0xc18
        UI2Props& var_cd0_1 = arg3
        UI2MergeAttribute(arg6, zx.q(x26_1.d), arg1, arg2, arg7, &var_c74, &var_870, &var_c70)
        goto label_1017ff0
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return MakeUIEmpty() __tailcall
