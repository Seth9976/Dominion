// 函数: _Z11LocalPlayerRK9GameSetup
// 地址: 0x9b7ef8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveProfile()
uint64_t i_1 = zx.q(*(arg1 + 0x11ac))

if (i_1.d s>= 1)
    void* __offset(GameSetup, 0x4c) result = arg1 + 0x4c
    uint64_t i
    
    do
        if (*(result + 0x14) == 1 && *(result + 0x18) == *(x0 + 0x42ac))
            return result
        
        i = i_1
        i_1 -= 1
        result += 0x22c
    while (i != 1)

return 0
