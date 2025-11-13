// 函数: _ZN7XStringaSERKS_
// 地址: 0x1064744
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *arg1
int64_t* entry_x1
void* x9 = *entry_x1
char* x10

x10 = x8 == 0 ? &data_793a18 : x8

void* const x9_1

x9_1 = x9 == 0 ? &data_793a18 : x9

if (x10 != x9_1)
    if (x8 != 0 && *gAllocatorArray != 0 && zx.d(*x8) != 0)
        int32_t x9_4 = *(x8 - 0xc)
        *(x8 - 0xc) = x9_4 - 1
        
        if (x9_4 == 1)
            XPooledFree(x8 - 0x10, *(x8 - 4) + 0x10)
            *arg1 = &data_793a18
    
    char* x8_1 = *entry_x1
    *arg1 = x8_1
    
    if (x8_1 != 0 && zx.d(*x8_1) != 0)
        *(x8_1 - 0xc) += 1

return arg1
