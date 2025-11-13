// 函数: _Z14UI2GetLowestElv
// 地址: 0x103b198
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_1 = zx.q(*(gUI2Editor + 0x704c))
int32_t x2

if (i_1.d s< 1)
    x2 = -1
else
    int64_t (* x11_1)() = gUI2Editor + 0x604c
    x2 = -1
    uint64_t i
    
    do
        int32_t x12_1 = *x11_1
        x11_1 += 4
        bool z_1
        
        if (x2 s>= x12_1)
            z_1 = x2 == 0xffffffff
        else
            z_1 = true
        
        if (z_1)
            x2 = x12_1
        
        i = i_1
        i_1 -= 1
    while (i != 1)

return UI2ElementByIndexRec(*gUI2 + zx.q(*(gUI2Editor + 0x6010)) * 0x19a8, *(gUI2Editor + 0x6008), 
    x2)
