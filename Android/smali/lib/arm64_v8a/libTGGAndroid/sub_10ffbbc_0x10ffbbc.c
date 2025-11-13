// 函数: sub_10ffbbc
// 地址: 0x10ffbbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) == *(*(arg2 + 0x10) + 8))
    int64_t x8_3 = *(arg2 + 0x20)
    
    if (x8_3 == 0)
        *(arg2 + 0x20) = arg3
        *(arg2 + 0x30) = arg4
        *(arg2 + 0x3c) = 1
    else if (x8_3 != arg3)
        int32_t x8_4 = *(arg2 + 0x3c)
        *(arg2 + 0x30) = 2
        *(arg2 + 0x3c) = x8_4 + 1
        *(arg2 + 0x4e) = 1
    else if (*(arg2 + 0x30) == 2)
        *(arg2 + 0x30) = arg4
    
    return 

uint64_t x24_1 = zx.q(*(arg1 + 0x14))
int64_t x8_2 = *(arg1 + 0x20)
int64_t x9_1

if (arg3 == 0)
    x9_1 = 0
else
    x9_1 = x8_2 s>> 8
    
    if ((x8_2.d & 1) != 0)
        x9_1 = *(*arg3 + x9_1)

int64_t* x0 = *(arg1 + 0x18)
uint64_t x3

if ((x8_2 & 2) == 0)
    x3 = 2
else
    x3 = zx.q(arg4)

(*(*x0 + 0x38))(x0, arg2, arg3 + x9_1, x3)

if (x24_1.d u< 2)
    return 

void* x22_2 = arg1 + 0x38

do
    int64_t x8_7 = *(x22_2 - 8)
    int64_t x9_3
    
    if (arg3 == 0)
        x9_3 = 0
    else
        x9_3 = x8_7 s>> 8
        
        if ((x8_7.d & 1) != 0)
            x9_3 = *(*arg3 + x9_3)
    
    int64_t* x0_1 = *(x22_2 - 0x10)
    uint64_t x3_1
    
    if ((x8_7 & 2) == 0)
        x3_1 = 2
    else
        x3_1 = zx.q(arg4)
    
    (*(*x0_1 + 0x38))(x0_1, arg2, arg3 + x9_3, x3_1)
    
    if (x22_2 u>= arg1 + (x24_1 << 4) + 0x18)
        break
    
    x22_2 += 0x10
while (zx.d(*(arg2 + 0x4e)) == 0)
