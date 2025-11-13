// 函数: _Z18UI2CommitAnimationRK3UI2R9AttribMap9UI2AttribiPKc
// 地址: 0x10342c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_1040
int32_t var_34
GetPropDefs(arg1, &var_1040, &var_34)
int32_t x23 = var_34
int32_t* result = AttribMapGetDef(*gUI2AttribTable, arg2, *macro_ptr_UI2Transition, 0x71)

if (result != 0)
    uint64_t x8_1 = zx.q(arg3 - 0x72)
    
    if (x8_1.d u<= 3)
        int32_t* x21_1 = *(result + 8)
        int32_t* result_1 = result
        int64_t x22_1 = sx.q((arg4 - x23) s/ 5)
        float var_38
        
        switch (x8_1)
            case 0
                result = SymbolMapLookupValue(&data_11805c8, arg5)
                
                if (result != 0)
                    int64_t x9_5 = sx.q(result_1[4])
                    int32_t x8_2 = *result
                    
                    if (x9_5.d s>= 1)
                        int32_t* x10_3 = *(result_1 + 8)
                        int64_t x11_1 = 0
                        
                        do
                            if (*x10_3 == x8_2)
                                return result
                            
                            x11_1 += 1
                            x10_3 = &x10_3[4]
                        while (x11_1 s< x9_5)
                    
                    x21_1[x22_1 * 4] = x8_2
                    return UI2CreateUndoCheckpoint(1.b)
            case 1
                result = sscanf(arg5, " %f", &var_38)
                
                if (result.d == 1)
                    x21_1[x22_1 * 4 + 1] = vmaxnm_f32(var_38, 0f)
                    return UI2CreateUndoCheckpoint(result.b)
            case 2
                result = sscanf(arg5, " %f", &var_38)
                
                if (result.d == 1)
                    x21_1[x22_1 * 4 + 2] = vmaxnm_f32(var_38, 0f)
                    return UI2CreateUndoCheckpoint(result.b)
            case 3
                result = SymbolMapLookupValue(gAnimCurve, arg5)
                
                if (result != 0)
                    x21_1[x22_1 * 4 + 3] = *result
                    return UI2CreateUndoCheckpoint(1.b)

return result
