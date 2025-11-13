// 函数: _Z35PregameCountExistingPilesExpansions12DomExpansion
// 地址: 0xbf5f8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_1 = zx.q(*(gPregameContext + 4))
int32_t x20

if (i_1.d s< 1)
    x20 = 0
else
    int32_t* x22_1 = *(gPregameContext + 0x20)
    x20 = 0
    uint64_t i
    
    do
        uint64_t x0 = zx.q(*x22_1)
        x22_1 = &x22_1[1]
        int32_t var_24
        
        if (DomCardExp(x0, &var_24) == arg1)
            x20 += 1
        
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(x20)
