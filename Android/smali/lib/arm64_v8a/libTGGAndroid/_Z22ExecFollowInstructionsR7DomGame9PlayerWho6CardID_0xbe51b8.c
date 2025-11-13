// 函数: _Z22ExecFollowInstructionsR7DomGame9PlayerWho6CardID
// 地址: 0xbe51b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int32_t x21 = arg3
int32_t var_24 = arg3
int32_t x22 = 0x121d

if ((GetReplacementTestFn(arg1, 0x121d)(zx.q(x21)) & 1) == 0)
    x22 = 0xc0e
    
    if ((GetReplacementTestFn(arg1, 0xc0e)(zx.q(x21)) & 1) == 0)
        x22 = 0x1012
        
        if ((GetReplacementTestFn(arg1, 0x1012)(zx.q(x21)) & 1) == 0)
            ExecuteCardText(arg1, zx.q(x20), zx.q(x21))
            int64_t result = CardHasTrait(arg1, zx.q(x21), 0x1152)
            
            if ((result.d & 1) == 0)
                return result
            
            if (*(arg1 + 0x150c) - 3 u>= 4)
                if (zx.d(*(arg1 + 0x1508)) == 0)
                    uint64_t x2_3
                    
                    if (*(arg1 + 0x19d4) == x20)
                        x2_3 = zx.q(*(arg1 + 0x19d8))
                    else
                        x2_3 = zx.q(x20)
                    
                    int32_t var_40_2 = 0
                    int32_t var_48_2 = 0
                    int32_t var_50_2 = 0
                    DomAddLogEvent(arg1, zx.q(x20), x2_3, 0x20, 0, nullptr, 0, 0)
                
                if (zx.d(*(arg1 + 0x1508)) != 0 || *(arg1 + 0x150c) - 3 u>= 4)
                    if (zx.d(*(arg1 + 0x1508)) == 0)
                        uint64_t x2_4
                        
                        if (*(arg1 + 0x19d4) == x20)
                            x2_4 = zx.q(*(arg1 + 0x19d8))
                        else
                            x2_4 = zx.q(x20)
                        
                        int32_t var_40_3 = 0
                        int32_t var_48_3 = 0
                        int32_t var_50_3 = 0
                        DomAddLogEvent(arg1, zx.q(x20), x2_4, 0x16, 0, &var_24, 1, 0x1152)
                    
                    if ((zx.d(*(arg1 + 0x1508)) != 0 || *(arg1 + 0x150c) - 3 u>= 4)
                            && zx.d(*(arg1 + 0x1508)) == 0)
                        uint64_t x2_5
                        
                        if (*(arg1 + 0x19d4) == x20)
                            x2_5 = zx.q(*(arg1 + 0x19d8))
                        else
                            x2_5 = zx.q(x20)
                        
                        int32_t var_40_4 = 0
                        int32_t var_48_4 = 0
                        int32_t var_50_4 = 0
                        DomAddLogEvent(arg1, zx.q(x20), x2_5, 0x1f, 0, nullptr, 0, 0)
            
            return ExecuteCardText(arg1, zx.q(x20), zx.q(var_24))

void* x0_12 = __emutls_get_address(__emutls_v.gContextStack_tl)
*(x0_12 + sx.q(*(x0_12 + 0x13000)) * 0x98 - 0x60) = x22
int32_t x8_6 = *(arg1 + 0x150c)

if (x8_6 - 3 u>= 4)
    int64_t var_38_1 = 0
    int32_t var_40_1 = 0
    int32_t var_48_1 = 0
    int32_t var_50_1 = 0
    DomNotifyEffect(zx.q(x8_6 == 2 ? 1 : 0), 0x16, zx.q(x20), zx.q(x21), 3, zx.q(x22), 0, 0)

GetReplacementFn(arg1, zx.q(x22))()
return DeferReducePlayCount(arg1, zx.q(x21)) __tailcall
