// 函数: _Z7PileAdd10HandlePile10HandleItem7PileLocb
// 地址: 0xc53e00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg3
int32_t x20 = arg2
int32_t* x0 = (*(gPile + 8))()
int32_t* x0_2 = (*(gPile + 0x10))(zx.q(x20))
*x0_2 = arg1
int32_t x8_2 = x0[1]
x0[2] = 0
int32_t x21_1

x21_1 = x21 == 0xffffffff ? x8_2 : x21

if ((x8_2 & 0x80000000) == 0)
    int32_t x23_1 = 0
    int32_t* x9_1 = x0
    bool cond:1_1
    
    do
        int32_t x0_3 = *x9_1
        
        if (x21_1 == x23_1)
            x0_2[1] = x0_3
            *x9_1 = x20
            x8_2 = x0[1]
            break
        
        void* x0_4 = (*(gPile + 0x10))(x0_3)
        x8_2 = x0[1]
        x9_1 = x0_4 + 4
        cond:1_1 = x23_1 s< x8_2
        x23_1 += 1
    while (cond:1_1)

x0[1] = x8_2 + 1
return zx.q(x21_1)
