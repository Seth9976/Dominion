// 函数: _ZN7XStringD1Ev
// 地址: 0x106458c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gAllocatorArray == 0)
    return 

int64_t* entry_x0
char* x8_1 = *entry_x0

if (x8_1 == 0 || zx.d(*x8_1) == 0)
    return 

int32_t x9_2 = *(x8_1 - 0xc)
*(x8_1 - 0xc) = x9_2 - 1

if (x9_2 == 1)
    XPooledFree(x8_1 - 0x10, *(x8_1 - 4) + 0x10)
    *entry_x0 = &data_793a18
