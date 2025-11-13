// 函数: _Z16GameCenterHasDLCRK3DLC
// 地址: 0xf705d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20

if (*gGameCenter != 4)
    x20 = 0
else
    if (*(gGameCenter + 0x38) s>= 1)
        XTrace("GameCenterQueryDLC")
        
        if (*gGameCenter == 4)
            char* var_440
            int32_t x0_1 = GamecenterGetSkus(&var_440)
            *(gGameCenter + 0x38) = 0xfffffffe
            *(gGameCenter + 0x38) = GoogleGamcenterQueryDLC_Java(&var_440, x0_1)
    
    x20 = *(arg1 + 0x18)
    
    if (x20 != 0)
        MutexLock(gGameCenter + 0x40)
        uint64_t x22_1 = zx.q(*(gGameCenter + 0x2a468))
        
        if (x22_1.d s< 1)
            x20 = 0
        else if (strcmp(gGameCenter + 0x6c, x20) == 0)
            x20 = 1
        else
            int64_t (* x21_1)() = gGameCenter + 0x5b4
            int64_t x8_3 = 1
            int64_t x23_1
            int32_t i
            
            do
                x23_1 = x8_3
                
                if (x22_1 == x8_3)
                    break
                
                i = strcmp(x21_1, x20)
                x8_3 = x23_1 + 1
                x21_1 += 0x548
            while (i != 0)
            x20 = zx.q(x23_1 u< x22_1 ? 1 : 0)
        
        MutexUnlock(gGameCenter + 0x40)

return zx.q(x20.d)
