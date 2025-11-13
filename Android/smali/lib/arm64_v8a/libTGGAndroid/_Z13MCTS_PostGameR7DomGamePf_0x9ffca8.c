// 函数: _Z13MCTS_PostGameR7DomGamePf
// 地址: 0x9ffca8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

bool var_18[0x8]
int64_t result = DeclareWinner(arg1, &var_18)
uint64_t x8 = zx.q(*(arg1 + 0xd40))

if (x8.d s>= 1)
    int32_t x10_1
    int64_t i_5
    
    if (x8.d != 1)
        i_5 = x8 & 0xfffffffe
        int32_t x10_2 = 0
        int32_t x11_1 = 0
        char* x12_1 = &var_18 | 1
        int64_t i_4 = i_5
        int64_t i
        
        do
            uint32_t x14_1 = zx.d(x12_1[-1])
            uint32_t x15_1 = zx.d(*x12_1)
            x12_1 = &x12_1[2]
            i = i_4
            i_4 -= 2
            x10_2 += x14_1
            x11_1 += x15_1
        while (i != 2)
        x10_1 = x11_1 + x10_2
        
        if (i_5 != x8)
            goto label_9ffd20
    else
        i_5 = 0
        x10_1 = 0
    label_9ffd20:
        int64_t i_3 = x8 - i_5
        void* x9_1 = &var_18[i_5]
        int64_t i_1
        
        do
            uint32_t x11_2 = zx.d(*x9_1)
            x9_1 += 1
            i_1 = i_3
            i_3 -= 1
            x10_1 += x11_2
        while (i_1 != 1)
    int64_t i_2 = 0
    
    do
        float v2_1
        
        if (zx.d(var_18[i_2]) == 0)
            v2_1 = 0f
        else
            v2_1 = fconvert.s(1f) / float.s(x10_1)
        
        arg2[i_2] = v2_1
        i_2 += 1
    while (i_2 s< sx.q(*(arg1 + 0xd40)))

return result
