// 函数: _Z7IsRiverRK7MapDatai
// 地址: 0xc16a50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x215fd4))

if (x8.d s>= 1)
    void* __offset(MapData, 0x195ff0) x9_1 = arg1 + 0x195ff0
    
    while (true)
        if (*(x9_1 - 0x10) == arg2 || *x9_1 == arg2)
            return 1
        
        uint64_t temp0_1 = x8
        x8 -= 1
        x9_1 += 0x20
        
        if (temp0_1 == 1)
            break
        
        continue

return 0
