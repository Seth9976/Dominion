// 函数: _ZN10XAllocator22IsPointerFromAllocatorEPv
// 地址: 0x1061218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i = *(arg1 + 8)

if (i != 0)
    int64_t x9_1 = sx.q(*(arg1 + 0x18))
    
    do
        int64_t* i_1 = i
        i = *i_1
        int64_t entry_x1
        
        if (&i_1[1] u<= entry_x1 && &i_1[1] + sx.q(*(arg1 + 0x10)) * x9_1 u> entry_x1
                && (entry_x1 - &i_1[1]) s% x9_1 == 0)
            return 1
    while (i != 0)

return 0
