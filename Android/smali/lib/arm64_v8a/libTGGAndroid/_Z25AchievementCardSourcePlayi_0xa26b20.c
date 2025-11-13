// 函数: _Z25AchievementCardSourcePlayi
// 地址: 0xa26b20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* x0 = DomGetContext()

if (x19 s>= 1)
    int32_t* x8_2 = *(*(x0 + 0x10) + 0x10)
    
    if (x8_2 != 0)
        while (*x8_2 == 2)
            int32_t temp0_1 = x19
            x19 -= 1
            
            if (temp0_1 == 1)
                return zx.q(x8_2[7])
            
            x8_2 = *(x8_2 + 0x10)
            
            if (x8_2 == 0)
                break

return 0
