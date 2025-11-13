// 函数: _Z14ExtractHighestR7DomGameR8DomYieldP8MCTSNode
// 地址: 0x9f5560
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_4 = zx.q(*(arg3 + 0xd8))
uint64_t x22_1

if (i_4.d s< 1)
    x22_1 = 0xffffffff
else
    int32_t* x8_2 = *(arg3 + 0xd0) + 0x54
    float i_5 = float.s(0x4e6e6b28)
    float i_1 = float.s(0xce6e6b28)
    uint64_t i_2 = i_4
    uint64_t i
    
    do
        float i_3 = *x8_2
        x8_2 = &x8_2[0x1c]
        
        if (i_3 > i_1)
            i_1 = i_3
        
        if (i_3 < i_5)
            i_5 = i_3
        
        i = i_2
        i_2 -= 1
    while (i != 1)
    
    if (i_4.d s< 1)
    label_9f55f4:
        x22_1 = 0xffffffff
    else
        x22_1 = 0
        int32_t* x8_4 = *(arg3 + 0xd0) + 0x54
        
        while (not(*x8_4 == i_1))
            x22_1 += 1
            x8_4 = &x8_4[0x1c]
            
            if (i_4 == x22_1)
                goto label_9f55f4
    
    if (not(i_5 != i_1))
        x22_1 = zx.q(RandomInt(&data_14a71e8, i_4.d))

sub_9f5644(arg1, arg2, *(arg3 + 0xd0) + muls.dp.d(x22_1.d, 0x70))
return zx.q(x22_1.d)
