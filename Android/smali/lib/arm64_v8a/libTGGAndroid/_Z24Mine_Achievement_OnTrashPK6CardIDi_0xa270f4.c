// 函数: _Z24Mine_Achievement_OnTrashPK6CardIDi
// 地址: 0xa270f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = CardWhat(zx.q(*arg1))
void* x0_1 = DomAchievementDataGet()

if (i == 0x104)
label_a27168:
    
    if (*(x0_1 + 0x20) s<= 3)
        void* x8_3 = *(DomGetContext() + 0x10)
        int64_t x9_4 = sx.q(*(x0_1 + 0x20))
        int64_t x8_4 = *(x8_3 + 0x40)
        *(x0_1 + 0x20) = x9_4.d + 1
        *(x0_1 + (x9_4 << 3)) = x8_4
else
    uint64_t x8_1 = zx.q(*(x0_1 + 0x44))
    
    if (x8_1.d s>= 1)
        if (*(x0_1 + 0x24) == i)
            goto label_a27168
        
        int64_t x12_1 = 0
        int64_t x11_1
        
        do
            x11_1 = x12_1
            
            if (x8_1 - 1 == x12_1)
                break
            
            x12_1 = x11_1 + 1
        while (*(x0_1 + 0x28 + (x11_1 << 2)) != i)
        
        if (x11_1 + 1 u< x8_1)
            goto label_a27168

return 0
