// 函数: _Z5TrimLRK7XString
// 地址: 0x1065fd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg1
char* x10

x10 = x8 == 0 ? &data_793a18 : x8

char** entry_x8

if (x8 == 0)
    *entry_x8 = x8
    return 

uint32_t x12_1 = zx.d(*x8)
int64_t i = 0

if (x12_1 == 0)
label_1066020:
    
    if (i s< 0)
        goto label_1066028
else
    while (i s< sx.q(*(x8 - 8)))
    label_1066028:
        uint64_t x15_2 = zx.q(x10[i])
        
        if (x15_2 u> 0x3f)
            break
        
        if ((1 << x15_2 & 0x100002601) == 0)
            break
        
        i += 1
        
        if (x12_1 == 0)
            goto label_1066020

if (i.d != 0)
    char* x20 = &x10[i]
    
    if (zx.d(*x20) == 0)
        *entry_x8 = &data_793a18
        return 
    
    int32_t x0_1 = strlen(x20)
    int64_t* x0_3
    int128_t v0
    x0_3, v0 = XPooledMalloc(x0_1 + 0x11)
    v0.q = 0x1fafafafa
    x0_3[1].d = x0_1
    *(x0_3 + 0xc) = x0_1 + 1
    *x0_3 = 0x1fafafafa
    *entry_x8 = &x0_3[2]
    return strcpy(&x0_3[2], x20, v0) __tailcall

*entry_x8 = x8

if (x8 != 0 && zx.d(*x8) != 0)
    *(x8 - 0xc) += 1
