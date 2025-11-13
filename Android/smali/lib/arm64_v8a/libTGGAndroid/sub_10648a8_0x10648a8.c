// 函数: sub_10648a8
// 地址: 0x10648a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x19 = *arg1
int64_t* x21 = arg1

if (x19 == 0 || zx.d(*x19) == 0)
    arg1 = XPooledMalloc(arg2 + 0x11)
    arg1[1].d = arg2
    *(arg1 + 0xc) = arg2 + 1
    *arg1 = 0x1fafafafa
    *x21 = &arg1[2]
    return 

int64_t x24_2 = sx.q(*(x19 - 8))

if (*(x19 - 4) s> arg2 && *(x19 - 0xc) s< 2)
    *(x19 - 8) = arg2
    return 

*(x19 - 0xc) += 1

if (*gAllocatorArray != 0)
    char* x8_7 = *x21
    
    if (x8_7 != 0 && zx.d(*x8_7) != 0)
        int32_t x9_2 = *(x8_7 - 0xc)
        *(x8_7 - 0xc) = x9_2 - 1
        
        if (x9_2 == 1)
            XPooledFree(x8_7 - 0x10, *(x8_7 - 4) + 0x10)
            *x21 = &data_793a18

arg1 = XPooledMalloc(arg2 + 0x11)
arg1[1].d = arg2
*(arg1 + 0xc) = arg2 + 1
*arg1 = 0x1fafafafa
*x21 = &arg1[2]

if ((arg3 & 1) != 0)
    memcpy(&arg1[2], x19, x24_2)

if (*gAllocatorArray == 0 || zx.d(*x19) == 0)
    return 

int32_t x8_11 = *(x19 - 0xc)
*(x19 - 0xc) = x8_11 - 1

if (x8_11 == 1)
    XPooledFree(x19 - 0x10, *(x19 - 4) + 0x10)
