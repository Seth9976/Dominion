// 函数: sub_1065298
// 地址: 0x1065298
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gAllocatorArray != 0)
    char* x8_1 = *arg2
    
    if (x8_1 != 0 && zx.d(*x8_1) != 0)
        int32_t x9_2 = *(x8_1 - 0xc)
        *(x8_1 - 0xc) = x9_2 - 1
        
        if (x9_2 == 1)
            XPooledFree(x8_1 - 0x10, *(x8_1 - 4) + 0x10)
            *arg2 = arg3

sub_1101e04(arg1)
noreturn
