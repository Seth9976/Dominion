// 函数: _Z26Sentry_Achievement_OnTrashPK6CardIDi
// 地址: 0xa27634
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomAchievementDataGet()
int32_t i_2 = *(x0 + 0x28)
int32_t x11 = 0

if (i_2 != 0 && arg2 s>= 1)
    int64_t x9_1 = 0
    uint64_t x10_1 = zx.q(arg2)
    x11 = 1
    
    do
        if (i_2 s>= 1)
            uint64_t i_1 = zx.q(i_2)
            void* x12_1 = x0
            uint64_t i
            
            do
                if (*x12_1 == *(arg1 + (x9_1 << 2)))
                    *(x0 + 0x28) = i_2 - 1
                    *x12_1 = *(x0 + ((sx.q(i_2) - 1) << 2))
                    i_2 = *(x0 + 0x28)
                    break
                
                i = i_1
                i_1 -= 1
                x12_1 += 4
            while (i != 1)
            
            if (i_2 == 0)
                break
        
        x9_1 += 1
        x11 = x9_1 u< x10_1 ? 1 : 0
    while (x9_1 != x10_1)

return zx.q(x11) & 1
