// 函数: _Z12MyMethod_NewP17UI2StateOverridesR3UI2PK9AttribMapRK16UI2StateBindingsRiPS5_PfS5_
// 地址: 0x1015394
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_80 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
void var_380
int64_t* result = StateTreeLookup(GetStateTree(arg1), arg4, *(arg2 + 0x1740), &var_380, arg8)

if (result.d s>= 1)
    uint64_t i_2 = zx.q(result.d)
    
    if (arg3 == 0)
        void var_378
        void* x8_11 = &var_378
        uint64_t i
        
        do
            int64_t x10_2 = *(x8_11 - 8)
            void* x9_4 = *x8_11
            int64_t x11_1 = sx.q(*arg5)
            x8_11 += 0x18
            float v2_1 = *(x9_4 + 0x20)
            *arg5 = x11_1.d + 1
            arg6[x11_1] = x10_2 + 0x18
            int64_t x9_6 = sx.q(*arg5)
            float temp0_2 = vmin_f32(v2_1, fconvert.s(1f))
            
            v2_1 = v2_1 < 0f ? 0f : temp0_2
            
            i = i_2
            i_2 -= 1
            arg7[x9_6 - 1] = v2_1
        while (i != 1)
    else
        int64_t x25_1 = 0
        v8.d = fconvert.s(1f)
        v9.d = 0f
        
        do
            int64_t* x8_8 = &var_380 + x25_1 * 0x18
            void* x28_1 = *x8_8
            float v0_1 = *(x8_8[1] + 0x20)
            char* x23_1 = *(x28_1 + 8)
            float temp0_1 = vmin_f32(v0_1, v8.d)
            
            if (v0_1 < 0f)
                v10.d = v9.d
            else
                v10.d = temp0_1
            
            if (x23_1 != 0 && zx.d(*x23_1) != 0)
                result = AttribMapGetDef(*gUI2AttribTable, arg3, *macro_ptr_UI2StateOverrides, 0x69)
                
                if (result != 0)
                    uint64_t i_3 = zx.q(result[1].d)
                    
                    if (i_3.d s>= 1)
                        void* x22_1 = *result + 0x18
                        uint64_t i_1
                        
                        do
                            result = strcmp(x23_1, *(x22_1 - 0x18))
                            
                            if (result.d == 0)
                                int64_t x8_2 = sx.q(*arg5)
                                *arg5 = x8_2.d + 1
                                arg6[x8_2] = x22_1
                                arg7[sx.q(*arg5) - 1] = v10.d
                                break
                            
                            i_1 = i_3
                            i_3 -= 1
                            x22_1 += 0x30
                        while (i_1 != 1)
            
            int64_t x8_5 = sx.q(*arg5)
            x25_1 += 1
            *arg5 = x8_5.d + 1
            arg6[x8_5] = x28_1 + 0x18
            arg7[sx.q(*arg5) - 1] = v10.d
        while (x25_1 != i_2)

return result
