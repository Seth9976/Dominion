// 函数: _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE12find_last_ofEPKcmm
// 地址: 0x10e1398
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg1)
size_t entry_x3
void* x8
uint64_t i_1

if ((x9.d & 1) != 0)
    i_1 = *(arg1 + 8)
    x8 = *(arg1 + 0x10)
    
    if (entry_x3 != 0)
    label_10e13d8:
        uint64_t i
        
        if (i_1 u<= arg3)
            i = i_1
        else
            i = arg3 + 1
        
        while (i != 0)
            int64_t x0_1 = memchr(arg2, zx.d(*(x8 - 1 + i)), entry_x3)
            i -= 1
            
            if (x0_1 != 0)
                return i
else
    x8 = &arg1[1]
    i_1 = x9 u>> 1
    
    if (entry_x3 != 0)
        goto label_10e13d8
return -1
