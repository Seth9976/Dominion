// 函数: _Z22ReplaceAddStartingCardR7DomGame9PlayerWho11DomCardEnumS2_
// 地址: 0xa36b18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg4
void var_cc0
int64_t result = CardsWhere(arg1, arg2, 0x3eb, &var_cc0)

if (result.d s>= 1)
    uint64_t i_1 = zx.q(result.d)
    void* x24_1 = &var_cc0
    uint64_t i
    
    do
        result = CardIs(arg1, zx.q(*x24_1), zx.q(arg3))
        
        if ((result.d & 1) != 0)
            int32_t x22_1 = *x24_1
            
            if (x22_1 == 0)
                break
            
            int64_t* x0_2 = CardGet(arg1, zx.q(x22_1))
            x0_2[1].d = x19
            *x0_2 = DomDefGet(zx.q(x19), zx.q(*(arg1 + 0xd50)))
            int64_t var_cc8_1 = 0
            int32_t var_cd0_1 = 0
            int32_t var_cd8_1 = 0
            int32_t var_ce0_1 = 0
            return NotifyEffect(arg1, 0x2d, zx.q(arg2.d), zx.q(x22_1), zx.q(x19), 0, 0, 0)
        
        i = i_1
        i_1 -= 1
        x24_1 += 4
    while (i != 1)

return result
