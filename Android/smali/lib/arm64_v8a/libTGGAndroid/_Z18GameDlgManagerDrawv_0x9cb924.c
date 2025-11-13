// 函数: _Z18GameDlgManagerDrawv
// 地址: 0x9cb924
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gLoadingScreen + 0x1c) == 2)
    *(gLoadingScreen + 0x1c) = 1

uint64_t result

for (int64_t i = 0; i != 0x1b8; i += 0x28)
    void* x23_1 = gGameDlgManager + i
    uint64_t x0_1 = zx.q(*(x23_1 + 0x18))
    
    if (x0_1.d != 0)
        UI2Draw(x0_1)
        uint64_t x0_2 = zx.q(*(x23_1 + 0x14))
        uint64_t x8_1 = zx.q(x0_2.d - 1)
        int64_t x8_2
        
        if (x8_1.d u>= 0x26 || ((0x23bff5f9bf u>> x8_1).d & 1) == 0)
            x8_2 = *(GameSpecific_GetDlgDef(x0_2) + 0x20)
            
            if (x8_2 != 0)
                x8_2(zx.q(*(x23_1 + 0x18)))
        else
            x8_2 = *((&data_11231f8)[sx.q(x8_1.d)] + 0x20)
            
            if (x8_2 != 0)
                x8_2(zx.q(*(x23_1 + 0x18)))
    
    result = zx.q(*(x23_1 + 8))
    
    if (result.d != 0)
        UI2Draw(result)
        uint64_t x0_5 = zx.q(*(gGameDlgManager + i + 4))
        uint64_t x8_4 = zx.q(x0_5.d - 1)
        int64_t x8_5
        
        if (x8_4.d u>= 0x26 || ((0x23bff5f9bf u>> x8_4).d & 1) == 0)
            result = GameSpecific_GetDlgDef(x0_5)
            x8_5 = *(result + 0x20)
            
            if (x8_5 != 0)
                result = x8_5(zx.q(*(x23_1 + 8)))
        else
            result = (&data_11231f8)[sx.q(x8_4.d)]
            x8_5 = *(result + 0x20)
            
            if (x8_5 != 0)
                result = x8_5(zx.q(*(x23_1 + 8)))

return result
