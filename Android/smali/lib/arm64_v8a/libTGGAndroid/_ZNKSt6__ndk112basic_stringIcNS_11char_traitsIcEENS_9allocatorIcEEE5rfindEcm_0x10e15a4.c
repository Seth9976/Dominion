// 函数: _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5rfindEcm
// 地址: 0x10e15a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
uint64_t x9 = zx.q(*arg1)
int64_t x8
uint64_t i_1

if ((x9.d & 1) != 0)
    i_1 = *(arg1 + 8)
    x8 = *(arg1 + 0x10)
    
    if (i_1 != 0)
    label_10e15cc:
        uint64_t i
        int64_t entry_x2
        
        if (i_1 u<= entry_x2)
            i = i_1
        else
            i = entry_x2 + 1
        
        while (i != 0)
            uint32_t x9_1 = zx.d(*(x8 - 1 + i))
            i -= 1
            
            if (x9_1 == zx.d((arg2.d).b))
                return i
else
    x8 = arg1 + 1
    i_1 = x9 u>> 1
    
    if (i_1 != 0)
        goto label_10e15cc
return -1
