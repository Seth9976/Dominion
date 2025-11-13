// 函数: _Z9Transmutev
// 地址: 0xa15c90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = TrashExactly(1)
int32_t var_38
int64_t x8 = sx.q(var_38)

if (x8.d != 0)
    void var_cb8
    void* x20_1 = &var_cb8
    int64_t i_1 = x8 << 2
    int64_t i
    
    do
        int32_t x19_1 = *x20_1
        
        if ((CardIs(zx.q(x19_1), 4) & 1) == 0)
            if ((CardIs(zx.q(x19_1), 2) & 1) != 0)
                goto label_a15d40
            
            goto label_a15cf8
        
        GainCard(0x102, 0x476, 0, 0, 4)
        
        if ((CardIs(zx.q(x19_1), 2) & 1) == 0)
        label_a15cf8:
            result = CardIs(zx.q(x19_1), 8)
            
            if ((result.d & 1) != 0)
                result = GainCard(0x106, 0x476, 0, 0, 4)
        else
        label_a15d40:
            GainCard(0x501, 0x476, 0, 0, 4)
            result = CardIs(zx.q(x19_1), 8)
            
            if ((result.d & 1) != 0)
                result = GainCard(0x106, 0x476, 0, 0, 4)
        
        i = i_1
        i_1 -= 4
        x20_1 += 4
    while (i != 4)

return result
