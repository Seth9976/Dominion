// 函数: _Z13DeclareWinnerR7DomGamePb
// 地址: 0xbf0b1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_38[0x6]
PlayerScores(arg1, &var_38)

if (*(arg1 + 0xd40) s>= 1)
    int64_t x9_1 = 0
    int32_t x8_1 = -0x270f
    int64_t x10_1
    
    do
        arg2[x9_1] = 0
        int32_t x11_1 = var_38[x9_1]
        x10_1 = sx.q(*(arg1 + 0xd40))
        x9_1 += 1
        
        if (x11_1 s> x8_1)
            x8_1 = x11_1
    while (x9_1 s< x10_1)
    
    int64_t x10_2 = x10_1 & 0xffffffff
    
    if (x10_2.d s>= 1)
        int32_t x9_2 = 0
        int64_t i = x10_2 - 1
        
        while ((x9_2 & 1) == 0 || i != zx.q(*(arg1 + 0x19d4)))
            if (var_38[i] == x8_1)
                x9_2 = 1
                arg2[i] = 1
            
            int64_t x12_1 = i + 1
            i -= 1
            
            if (x12_1 s<= 1)
                break

return CalcScores(arg1) __tailcall
