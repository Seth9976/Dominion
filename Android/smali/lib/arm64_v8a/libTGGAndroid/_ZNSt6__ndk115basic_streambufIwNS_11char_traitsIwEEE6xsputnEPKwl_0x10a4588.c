// 函数: _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE6xsputnEPKwl
// 地址: 0x10a4588
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (entry_x2 s< 1)
    return 0

int64_t s2 = arg2
int64_t result = 0

while (true)
    wchar_t* s1 = *(arg1 + 0x30)
    int64_t x8_2 = *(arg1 + 0x38)
    
    if (s1 u>= x8_2)
        if ((*(*arg1 + 0x68))(arg1, zx.q(*s2)) == 0xffffffff)
            break
        
        s2 += 4
        result += 1
        
        if (result s>= entry_x2)
            break
    else
        size_t n_1 = (x8_2 - s1) s>> 2
        size_t n_2 = entry_x2 - result
        size_t n
        
        n = n_2 s< n_1 ? n_2 : n_1
        
        if (n != 0)
            wmemcpy(s1, s2, n)
            s1 = *(arg1 + 0x30)
        
        s2 += n << 2
        result += n
        *(arg1 + 0x30) = &s1[n]
        
        if (result s>= entry_x2)
            break

return result
