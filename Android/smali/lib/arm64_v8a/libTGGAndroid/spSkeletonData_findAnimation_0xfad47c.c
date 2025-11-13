// 函数: spSkeletonData_findAnimation
// 地址: 0xfad47c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = sx.q(*(arg1 + 0x78))

if (x21.d s>= 1)
    int64_t x22_1 = *(arg1 + 0x80)
    int64_t x23_1 = 0
    
    do
        int64_t* result = *(x22_1 + (x23_1 << 3))
        
        if (strcmp(*result, arg2) == 0)
            return result
        
        x23_1 += 1
    while (x23_1 s< x21)

return nullptr
