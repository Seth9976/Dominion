// 函数: _Z27SelectionMeetsQuestCriteria15DomChoiceUITypei
// 地址: 0xb22ca0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = 1
int32_t x8 = *(gDomClient + 0x2056c)

if (x8 != 6 && x8 != arg2)
    if (x8 s> 2)
        x0 = 0
    else if (x8 s< 1)
    label_b22d2c:
        x0 = 1
    else
        int64_t x21_1 = 0
        int64_t x8_2
        
        while (true)
            int32_t x0_2 =
                CardIs(gDomClient + 0x20728, zx.q(*(gDomClient + (x21_1 << 2) + 0x1f8ec)), 0x100)
            x8_2 = sx.q(*(gDomClient + 0x2056c))
            
            if ((x0_2 & 1) == 0)
                break
            
            x21_1 += 1
            
            if (x21_1 s>= x8_2)
                goto label_b22d2c_1
        
        if (x8_2.d s> 1)
            x0 = 0
        else if (x8_2.d != 1)
        label_b22d2c_1:
            x0 = 1
        else
            int64_t i = 0
            
            do
                x0 = CardIs(gDomClient + 0x20728, zx.q(*(gDomClient + (i << 2) + 0x1f8ec)), 0x20)
                
                if ((x0 & 1) == 0)
                    break
                
                i += 1
            while (i s< sx.q(*(gDomClient + 0x2056c)))

return zx.q(x0) & 1
