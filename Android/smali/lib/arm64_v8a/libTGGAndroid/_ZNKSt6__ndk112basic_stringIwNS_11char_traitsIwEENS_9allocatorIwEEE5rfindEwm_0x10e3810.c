// 函数: _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE5rfindEwm
// 地址: 0x10e3810
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
uint64_t x9 = zx.q(*arg1)
int64_t x8
uint64_t x9_1

if ((x9.d & 1) != 0)
    x9_1 = *(arg1 + 8)
    x8 = *(arg1 + 0x10)
    
    if (x9_1 != 0)
    label_10e3838:
        int64_t entry_x2
        uint64_t x9_2
        
        if (x9_1 u<= entry_x2)
            x9_2 = x9_1
        else
            x9_2 = entry_x2 + 1
        
        uint64_t i = x9_2 << 2
        
        while (i != 0)
            int32_t x10_1 = *(x8 - 4 + i)
            i -= 4
            
            if (x10_1 == arg2.d)
                return i s>> 2
else
    x8 = arg1 + 4
    x9_1 = x9 u>> 1
    
    if (x9_1 != 0)
        goto label_10e3838
return -1
