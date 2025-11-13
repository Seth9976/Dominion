// 函数: _Z14PlayerResignedR8GameSave9PlayerWho
// 地址: 0x9bef9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_1 = zx.q(*(arg1 + 0x11b4))

if (i_1.d s>= 1)
    void* __offset(GameSave, 0x74) x9_1 = arg1 + 0x74
    uint64_t i
    
    do
        if (*(x9_1 - 4) == arg2)
            int32_t x8_1 = *x9_1 - 0x3e9
            
            if (x8_1 u<= 4)
                return zx.q(0x19 u>> x8_1) & 1
            
            break
        
        i = i_1
        i_1 -= 1
        x9_1 += 0x22c
    while (i != 1)

return 0
