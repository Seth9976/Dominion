// 函数: _Z25FilterMaxOnePerSourceOnlyR7DomGameR10AbilityIDs
// 地址: 0xbd8dc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x400) s< 1)
    return 

DomGame& x20_1 = arg1
uint64_t i_1 = 0
uint64_t x8_1
uint64_t i

do
    uint64_t x21_1 = zx.q(*(arg2 + (i_1 << 2)))
    
    if (AbilityCanTriggerMultipleTimes(x20_1, x21_1).d != 2)
        x8_1 = zx.q(*(arg2 + 0x400))
        i = i_1 + 1
    else
        x8_1 = sx.q(*(arg2 + 0x400))
        i = i_1 + 1
        
        if (i s< x8_1)
            int32_t i_2 = i.d
            
            while (true)
                if (AbilitySourceCardRef(x20_1, x21_1)
                        == AbilitySourceCardRef(x20_1, zx.q(*(arg2 + (sx.q(i_2) << 2)))).d)
                    int64_t x8_3 = sx.q(*(arg2 + 0x400)) - 1
                    *(arg2 + 0x400) = x8_3.d
                    *(arg2 + (sx.q(i_2) << 2)) = *(arg2 + (x8_3 << 2))
                    x8_1 = zx.q(*(arg2 + 0x400))
                    i_2 = i_1.d + 1
                    
                    if (i_2 s>= x8_1.d)
                        break
                else
                    i_1 = zx.q(i_2)
                    x8_1 = zx.q(*(arg2 + 0x400))
                    i_2 = i_1.d + 1
                    
                    if (i_2 s>= x8_1.d)
                        break
    
    i_1 = i
while (i s< sx.q(x8_1.d))
