// 函数: _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE6xsgetnEPwl
// 地址: 0x10a444c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (entry_x2 s< 1)
    return 0

int64_t s1 = arg2
int64_t result = 0

do
    wchar_t* s2 = *(arg1 + 0x18)
    int64_t x8_3 = *(arg1 + 0x20)
    size_t n
    
    if (s2 u>= x8_3)
        int32_t x0_2 = (*(*arg1 + 0x50))(arg1, s2)
        
        if (x0_2 == 0xffffffff)
            break
        
        *s1 = x0_2
        s1 += 4
        n = 1
    else
        size_t n_2 = (x8_3 - s2) s>> 2
        size_t n_3 = entry_x2 - result
        size_t n_1
        
        n_1 = n_3 s< n_2 ? n_3 : n_2
        
        n = n_1 s< 0x7fffffff ? n_1 : 0x7fffffff
        
        if (n != 0)
            wmemcpy(s1, s2, n)
            s2 = *(arg1 + 0x18)
        
        s1 += n << 2
        *(arg1 + 0x18) = s2 + (n << 0x20 s>> 0x1e)
    
    result += n
while (result s< entry_x2)

return result
