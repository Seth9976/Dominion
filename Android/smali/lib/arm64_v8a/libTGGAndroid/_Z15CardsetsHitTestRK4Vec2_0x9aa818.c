// 函数: _Z15CardsetsHitTestRK4Vec2
// 地址: 0x9aa818
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gCardset + 8))
int64_t result

if (x9.d == 0)
    result = 0
else
    Cardset* i = *gCardset
    int64_t x9_1 = i + x9 * 0x1570
    
    while (true)
        if (zx.d(*(i + 0x156a)) == 0)
            i += 0x1570
            
            if (i u< x9_1)
                continue
        else if (i != 0xffffffff)
            break
        
        return 0
    
    result = 0
    int64_t x19 = 0xffffffff
    
    do
        if (zx.d(*(i + 0x1560)) != 0)
            int64_t result_1
            int64_t x1_2
            result_1, x1_2 = CardsetHitTest(i, arg1)
            
            if (x1_2.d != 0xffffffff
                    && (x19.d == 0xffffffff || (x1_2 u>> 0x20).d u> (x19 u>> 0x20).d))
                x19 = x1_2
                result = result_1
        
        Cardset* i_1 = *gCardset
        
        if (i == 0)
            i = i_1
        else
            i += 0x1570
        
        int64_t x8_3 = i_1 + zx.q(*(gCardset + 8)) * 0x1570
        
        if (i u>= x8_3)
            break
        
        while (zx.d(*(i + 0x156a)) == 0)
            i += 0x1570
            
            if (i u>= x8_3)
                return result
    while (i != 0xffffffff)

return result
