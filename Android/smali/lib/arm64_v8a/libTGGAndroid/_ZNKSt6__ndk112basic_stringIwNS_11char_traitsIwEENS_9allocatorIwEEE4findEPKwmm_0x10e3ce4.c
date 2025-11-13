// 函数: _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE4findEPKwmm
// 地址: 0x10e3ce4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg1)
uint64_t x8_1
void* x23

if ((x8.d & 1) != 0)
    x8_1 = *(arg1 + 8)
    x23 = *(arg1 + 0x10)
    
    if (x8_1 u< arg3)
        return -1
else
    x23 = &arg1[1]
    x8_1 = x8 u>> 1
    
    if (x8_1 u< arg3)
        return -1

size_t entry_n

if (entry_n == 0)
    return arg3

void* s = x23 + (arg3 << 2)
void* s1_2 = x23 + (x8_1 << 2)
int64_t x8_3 = (s1_2 - s) s>> 2
void* s1_1

if (x8_3 s>= entry_n)
    wchar_t c = *arg2
    
    while (true)
        int64_t x8_6 = x8_3 - entry_n
        
        if (x8_6 u>= -1)
            goto label_10e3d38
        
        wchar_t* s1 = wmemchr(s, c, x8_6 + 1)
        
        if (s1 == 0)
            goto label_10e3d38
        
        s1_1 = s1
        
        if (wmemcmp(s1, arg2, entry_n) == 0)
            break
        
        s = s1_1 + 4
        x8_3 = (s1_2 - s) s>> 2
        
        if (x8_3 s< entry_n)
            goto label_10e3d38
else
label_10e3d38:
    s1_1 = s1_2

if (s1_1 != s1_2)
    return (s1_1 - x23) s>> 2

return -1
