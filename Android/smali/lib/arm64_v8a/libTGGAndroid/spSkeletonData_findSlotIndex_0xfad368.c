// 函数: spSkeletonData_findSlotIndex
// 地址: 0xfad368
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = sx.q(*(arg1 + 0x40))

if (x21.d s>= 1)
    int64_t x22_1 = *(arg1 + 0x48)
    int64_t x19_1 = 0
    
    do
        if (strcmp(*(*(x22_1 + (x19_1 << 3)) + 8), arg2) == 0)
            return zx.q(x19_1.d)
        
        x19_1 += 1
    while (x19_1 s< x21)

return zx.q(0xffffffff.d)
