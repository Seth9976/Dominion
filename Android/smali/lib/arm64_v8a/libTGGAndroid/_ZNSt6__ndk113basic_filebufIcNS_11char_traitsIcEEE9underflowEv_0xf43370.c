// 函数: _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE9underflowEv
// 地址: 0xf43370
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0

if (entry_x0[0xf] == 0)
    return 0xffffffff

int32_t x8_1 = *(entry_x0 + 0x9c)
char* x9_4

if ((x8_1 & 8) == 0)
    uint32_t x9_1 = zx.d(*(entry_x0 + 0xa2))
    __builtin_memset(&entry_x0[5], 0, 0x18)
    int64_t x10_1
    
    x10_1 = x9_1 == 0 ? 0x70 : 0x60
    
    int64_t x9_2
    
    x9_2 = x9_1 == 0 ? 0x68 : 0x40
    
    void* x11_1 = *(entry_x0 + x9_2)
    int64_t x9_3 = *(entry_x0 + x10_1)
    *(entry_x0 + 0x9c) = 8
    x9_4 = x11_1 + x9_3
    entry_x0[2] = x11_1
    entry_x0[3] = x9_4
    entry_x0[4] = x9_4
    
    if (x9_4 == 0)
        goto label_f4341c
    
    goto label_f433dc

x9_4 = entry_x0[3]
void var_24
char* x10_2

if (x9_4 == 0)
label_f4341c:
    x9_4 = &var_24 | 1
    entry_x0[2] = &var_24
    entry_x0[3] = x9_4
    entry_x0[4] = x9_4
    x10_2 = x9_4
    
    if ((x8_1 & 8) == 0)
        goto label_f433e4
    
    goto label_f43438

label_f433dc:
x10_2 = entry_x0[4]
size_t x20_1

if ((x8_1 & 8) != 0)
label_f43438:
    void* x8_4 = x10_2 - entry_x0[2]
    void* x8_5
    
    if (x8_4 s< 0)
        x8_5 = x8_4 + 1
    else
        x8_5 = x8_4
    
    size_t x8_6 = x8_5 s>> 1
    
    x20_1 = x8_6 u< 4 ? x8_6 : 4
    
    if (x9_4 != x10_2)
        goto label_f433f0
    
    goto label_f43464

label_f433e4:
x20_1 = 0
uint64_t result
void* x19_2

if (x9_4 == x10_2)
label_f43464:
    memmove(entry_x0[2], x9_4 - x20_1, x20_1)
    char* x8_11
    void* x9_6
    
    if (zx.d(*(entry_x0 + 0xa2)) == 0)
        int64_t x1_2 = entry_x0[9]
        int64_t x9_7 = entry_x0[0xa]
        int64_t x10_3
        
        if (x9_7 == x1_2)
            x10_3 = x9_7
        else
            memmove(entry_x0[8], x1_2, x9_7 - x1_2)
            x9_7 = entry_x0[9]
            x10_3 = entry_x0[0xa]
        
        int64_t x8_12 = entry_x0[8]
        int64_t buf = x8_12 + x10_3 - x9_7
        entry_x0[9] = buf
        int64_t x9_9
        
        if (x8_12 == &entry_x0[0xb])
            x9_9 = 8
        else
            x9_9 = entry_x0[0xc]
        
        int64_t x10_5 = entry_x0[0x11]
        int64_t x8_13 = x8_12 + x9_9
        size_t count_2 = x8_13 - buf
        int64_t x9_10 = entry_x0[0xe]
        FILE* fp = entry_x0[0xf]
        entry_x0[0xa] = x8_13
        entry_x0[0x12] = x10_5
        size_t count_1 = x9_10 - x20_1
        size_t count
        
        count = count_2 u< count_1 ? count_2 : count_1
        
        size_t x0_4 = fread(buf, 1, count, fp)
        
        if (x0_4 == 0)
            goto label_f435c8
        
        int64_t* x0_5 = entry_x0[0x10]
        
        if (x0_5 == 0)
            sub_f43870()
            noreturn
        
        int64_t x2_4 = entry_x0[8]
        int64_t x10_6 = entry_x0[0xe]
        int64_t x3_2 = entry_x0[9] + x0_4
        entry_x0[0xa] = x3_2
        int64_t x9_12 = entry_x0[2]
        void* var_38
        
        if ((*(*x0_5 + 0x20))(x0_5, &entry_x0[0x11], x2_4, x3_2, &entry_x0[9], x9_12 + x20_1, 
                x9_12 + x10_6, &var_38) == 3)
            x8_11 = entry_x0[8]
            x9_6 = entry_x0[0xa]
            entry_x0[2] = x8_11
            goto label_f43594
        
        x9_6 = var_38
        x8_11 = entry_x0[2] + x20_1
        
        if (x9_6 == x8_11)
            goto label_f435c8
        
        goto label_f43594
    
    int64_t x9_5 = entry_x0[2]
    size_t x0_2 = fread(x9_5 + x20_1, 1, entry_x0[4] - x20_1 - x9_5, entry_x0[0xf])
    
    if (x0_2 == 0)
    label_f435c8:
        result = 0xffffffff
        x19_2 = &entry_x0[2]
        
        if (*x19_2 == &var_24)
            __builtin_memset(x19_2, 0, 0x18)
    else
        x8_11 = entry_x0[2] + x20_1
        x9_6 = &x8_11[x0_2]
    label_f43594:
        entry_x0[3] = x8_11
        entry_x0[4] = x9_6
        result = zx.q(*x8_11)
        x19_2 = &entry_x0[2]
        
        if (*x19_2 == &var_24)
            __builtin_memset(x19_2, 0, 0x18)
else
label_f433f0:
    result = zx.q(*x9_4)
    x19_2 = &entry_x0[2]
    
    if (*x19_2 == &var_24)
        __builtin_memset(x19_2, 0, 0x18)
return result
