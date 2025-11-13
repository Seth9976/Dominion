// 函数: _ZN5Botan5Tiger8copy_outEPh
// 地址: 0xe3fab0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i_1 = *(arg1 + 0x68)
int64_t* x10 = *(arg1 + 0x50)
int64_t* entry_x1
int64_t* x9_1

if (i_1 u< 8)
    x9_1 = x10
    
    if (i_1 != 0)
    label_e3fb14:
        int64_t x10_2 = 0
        int64_t i
        
        do
            int64_t x12_1 = x10_2 & 0x38
            i = i_1
            i_1 -= 1
            x10_2 += 8
            *entry_x1 = (*x9_1 u>> x12_1).b
            entry_x1 += 1
        while (i != 1)
    
    return 

if (i_1 - 8 u< 0x18 || (((i_1 - 8) & 0xfffffffffffffff8) + x10 + 8 u> entry_x1
        && entry_x1 + (i_1 & 0xfffffffffffffff8) u> x10))
    x9_1 = x10
label_e3fb00:
    
    do
        int64_t x10_1 = *x9_1
        x9_1 = &x9_1[1]
        i_1 -= 8
        *entry_x1 = x10_1
        entry_x1 = &entry_x1[1]
    while (i_1 u> 7)
else
    int64_t x11_8 = ((i_1 - 8) u>> 3) + 1
    int64_t i_4 = x11_8 & 0x3ffffffffffffffc
    void* x13_1 = &entry_x1[2]
    x9_1 = &x10[i_4]
    i_1 -= i_4 << 3
    entry_x1 = &entry_x1[i_4]
    void* x10_3 = &x10[2]
    int64_t i_3 = i_4
    int64_t i_2
    
    do
        int128_t v0 = *(x10_3 - 0x10)
        int128_t v1 = *x10_3
        i_2 = i_3
        i_3 -= 4
        x10_3 += 0x20
        *(x13_1 - 0x10) = v0
        *x13_1 = v1
        x13_1 += 0x20
    while (i_2 != 4)
    
    if (x11_8 != i_4)
        goto label_e3fb00

if (i_1 != 0)
    goto label_e3fb14
