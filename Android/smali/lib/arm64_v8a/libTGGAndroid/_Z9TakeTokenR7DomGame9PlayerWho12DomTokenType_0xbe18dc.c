// 函数: _Z9TakeTokenR7DomGame9PlayerWho12DomTokenType
// 地址: 0xbe18dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg2.d
int64_t result = FindOrCreateToken(arg1, arg2, arg3, 0x476, 0)
int64_t x20 = sx.q(result.d)
void* x23 = arg1 + (x20 << 5)

if (*(x23 + 0x15f7c) == 0)
    *(x23 + 0x15f7c) = 1
    int32_t x8_1 = *(arg1 + 0x150c)
    
    if (x8_1 - 3 u>= 4)
        int64_t var_48_1 = *(arg1 + (x20 << 5) + 0x15f80)
        int32_t var_50_1 = 0
        int32_t var_58_1 = 0
        int32_t var_60_1 = *(arg1 + (x20 << 5) + 0x15f74)
        result = DomNotifyEffect(zx.q(x8_1 == 2 ? 1 : 0), 0x14, 
            zx.q(*(arg1 + (x20 << 5) + 0x15f6c)), zx.q(x20.d), 1, 0, 
            zx.q(*(arg1 + (x20 << 5) + 0x15f68)), zx.q(*(arg1 + (x20 << 5) + 0x15f70)))
        
        if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
            uint64_t x2_1
            
            if (*(arg1 + 0x19d4) == x22)
                x2_1 = zx.q(*(arg1 + 0x19d8))
            else
                x2_1 = zx.q(x22)
            
            int32_t var_50_2 = 0
            int32_t var_58_2 = 0
            int32_t var_60_2 = *(x23 + 0x15f7c)
            result = DomAddLogEvent(arg1, zx.q(x22), x2_1, 0xb, 0, nullptr, 0, zx.q(arg3.d))

if (*(x23 + 0x15f70) != 0x3f1)
    return MoveToken(arg1, zx.q(x20.d), 0x3f1) __tailcall

return result
