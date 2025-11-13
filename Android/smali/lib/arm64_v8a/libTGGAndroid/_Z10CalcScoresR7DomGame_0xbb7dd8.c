// 函数: _Z10CalcScoresR7DomGame
// 地址: 0xbb7dd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x150c)

if (x8 u<= 6 && (1 << x8 & 0x68) != 0)
    return 

int32_t var_a0
PlayerScores(arg1, &var_a0)
uint64_t x8_2 = zx.q(*(arg1 + 0xd40))
int64_t x9_1 = sx.q(x8_2.d)
PlayerRank var_88

if (x8_2.d s>= 1)
    int32_t x12_1 = *(arg1 + 0x19e8) - 1
    int32_t x10_2 = x12_1 s/ x9_1.d
    int64_t x11_3 = sx.q(x12_1 s% x9_1.d)
    int64_t x12_2
    
    if (x9_1.d != 1)
        int64_t x13_1 = 0
        x12_2 = x8_2 & 0xfffffffe
        void var_9c
        void* x14_1 = &var_9c
        void var_78
        void* x15_1 = &var_78
        
        do
            int32_t x0_1
            
            if (x13_1 s<= x11_3)
                x0_1 = x10_2 + 1
            else
                x0_1 = x10_2
            
            *(x15_1 - 0xc) = x13_1.d
            *(x15_1 - 8) = x0_1
            int32_t x0_2
            
            if ((x13_1 | 1) s<= x11_3)
                x0_2 = x10_2 + 1
            else
                x0_2 = x10_2
            
            *(x15_1 + 4) = x13_1.d + 1
            *(x15_1 + 8) = x0_2
            int32_t x16_2 = *(x14_1 - 4)
            int32_t x0_3 = *x14_1
            x13_1 += 2
            x14_1 += 8
            *(x15_1 - 0x10) = x16_2
            *x15_1 = x0_3
            x15_1 += 0x20
        while (x13_1 != x12_2)
        
        if (x12_2 != x8_2)
            goto label_bb7ec0
    else
        x12_2 = 0
    label_bb7ec0:
        void* x13_3 = (&var_88 + (x12_2 << 4)) | 4
        
        do
            int32_t x15_2 = (&var_a0)[x12_2]
            int32_t x16_3
            
            if (x12_2 s<= x11_3)
                x16_3 = x10_2 + 1
            else
                x16_3 = x10_2
            
            *x13_3 = x12_2.d
            *(x13_3 + 4) = x16_3
            x12_2 += 1
            *(x13_3 - 4) = x15_2
            x13_3 += 0x10
        while (x8_2 != x12_2)

bool (* var_28)(PlayerRank&, PlayerRank&) = SortRanks
std::__ndk1::__sort<bool (*&)(PlayerRank&, PlayerRank&), PlayerRank*>(&var_88, 
    &var_88 + (x9_1 << 4), &var_28)
int32_t x8_3 = *(arg1 + 0xd40)

if (x8_3 s< 1)
    return 

int32_t var_7c_1 = 0

if (x8_3 s> 1)
    int64_t i = 1
    void var_6c
    void* x11_4 = &var_6c
    int32_t x12_4 = (*(arg1 + 0x19e8) - 1) s% x8_3
    
    do
        if (*(x11_4 - 0xc) != *(x11_4 - 0x1c)
                || (x12_4 s< *(x11_4 - 8) ? 1 : 0) == (x12_4 s>= *(x11_4 - 0x18) ? 1 : 0))
            *x11_4 = i.d
        else
            *x11_4 = *(x11_4 - 0x10)
        
        i += 1
        x11_4 += 0x10
    while (i s< sx.q(x8_3))

if (x8_3 s< 1)
    return 

int64_t i_1 = 0
void var_80
void* x21_1 = &var_80

do
    int32_t x9_3 = *(arg1 + 0x150c)
    
    if (x9_3 - 3 u>= 4)
        int64_t var_a8_1 = 0
        int32_t var_b0_1 = 0
        int32_t var_b8_1 = 0
        int32_t var_c0_1 = 0
        DomNotifyEffect(zx.q(x9_3 == 2 ? 1 : 0), 0x20, zx.q(*(x21_1 - 4)), 0, zx.q(*(x21_1 - 8)), 
            zx.q(*(x21_1 + 4)), zx.q(*x21_1), 0)
        x8_3 = *(arg1 + 0xd40)
    
    i_1 += 1
    x21_1 += 0x10
while (i_1 s< sx.q(x8_3))
