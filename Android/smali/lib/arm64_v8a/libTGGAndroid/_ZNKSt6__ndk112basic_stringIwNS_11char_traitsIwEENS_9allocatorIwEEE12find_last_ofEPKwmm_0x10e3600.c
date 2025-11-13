// 函数: _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE12find_last_ofEPKwmm
// 地址: 0x10e3600
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg1)
size_t entry_n
void* x8
uint64_t x9_1

if ((x9.d & 1) != 0)
    x9_1 = *(arg1 + 8)
    x8 = *(arg1 + 0x10)
    
    if (entry_n != 0)
    label_10e3640:
        uint64_t x9_2
        
        if (x9_1 u<= arg3)
            x9_2 = x9_1
        else
            x9_2 = arg3 + 1
        
        uint64_t i = x9_2 << 2
        
        while (i != 0)
            wchar_t* x0_1 = wmemchr(arg2, *(x8 - 4 + i), entry_n)
            i -= 4
            
            if (x0_1 != 0)
                return i s>> 2
else
    x8 = &arg1[1]
    x9_1 = x9 u>> 1
    
    if (entry_n != 0)
        goto label_10e3640
return -1
