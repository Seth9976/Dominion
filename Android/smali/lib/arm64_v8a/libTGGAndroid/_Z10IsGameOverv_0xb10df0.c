// 函数: _Z10IsGameOverv
// 地址: 0xb10df0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(gDomClient + 0x22134)) != 0)
    return 1

void* x0_1 = ActiveGame()
uint64_t i_1 = zx.q(*(x0_1 + 0x11b4))

if (i_1.d s>= 1)
    void* x9_1 = x0_1 + 0x74
    uint64_t i
    
    do
        int32_t x12_2 = *x9_1 - 0x3e9
        
        if (x12_2 u<= 4 && (1 << x12_2 & 0x19) != 0)
            return 1
        
        i = i_1
        i_1 -= 1
        x9_1 += 0x22c
    while (i != 1)

return 0
