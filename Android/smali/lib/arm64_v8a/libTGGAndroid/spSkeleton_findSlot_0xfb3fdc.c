// 函数: spSkeleton_findSlot
// 地址: 0xfb3fdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = sx.q(arg1[4].d)

if (x21.d s>= 1)
    int64_t x23_1 = 0
    int64_t x22_1 = *(*arg1 + 0x48)
    
    do
        if (strcmp(*(*(x22_1 + (x23_1 << 3)) + 8), arg2) == 0)
            return *(arg1[5] + (x23_1 << 3))
        
        x23_1 += 1
    while (x23_1 s< x21)

return 0
