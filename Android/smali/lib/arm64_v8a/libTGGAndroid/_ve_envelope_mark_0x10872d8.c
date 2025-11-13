// 函数: _ve_envelope_mark
// 地址: 0x10872d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x12 = *(arg1 + 0x40)
int64_t x10 = *(arg1 + 0x50)
int64_t* x11 = *(*(arg1 + 8) + 0x30)
int64_t x9 = x11[x12]
void* x8_1 = **(arg1 + 0x88)
int64_t x9_1

if (x9 s< 0)
    x9_1 = x9 + 3
else
    x9_1 = x9

int64_t x13_1 = x9_1 s>> 2
int64_t x11_3
int64_t x12_4

if (x12 == 0)
    int64_t x11_4 = *x11
    int64_t x11_5
    
    if (x11_4 s< 0)
        x11_5 = x11_4 + 3
    else
        x11_5 = x11_4
    
    x11_3 = x11_5 s>> 2
    x12_4 = x11_3
else
    int64_t x12_2 = x11[*(arg1 + 0x38)]
    int64_t x11_1 = x11[*(arg1 + 0x48)]
    int64_t x12_3
    
    if (x12_2 s< 0)
        x12_3 = x12_2 + 3
    else
        x12_3 = x12_2
    
    int64_t x11_2
    
    if (x11_1 s< 0)
        x11_2 = x11_1 + 3
    else
        x11_2 = x11_1
    
    x12_4 = x12_3 s>> 2
    x11_3 = x11_2 s>> 2

int64_t x13_4 = *(x8_1 + 0x108)
int64_t x9_3 = x10 - x13_1 - x12_4
int64_t x10_2 = x13_1 + x10 + x11_3

if (x13_4 s< x9_3 || x13_4 s>= x10_2)
    int64_t x11_6 = sx.q(*(x8_1 + 8))
    int64_t x9_4 = x9_3 s/ x11_6
    int64_t x10_3 = x10_2 s/ x11_6
    
    if (x9_4 s>= x10_3)
        return 0
    
    while (*(*(x8_1 + 0xf0) + (x9_4 << 2)) == 0)
        x9_4 += 1
        
        if (x9_4 s>= x10_3)
            return 0

return 1
