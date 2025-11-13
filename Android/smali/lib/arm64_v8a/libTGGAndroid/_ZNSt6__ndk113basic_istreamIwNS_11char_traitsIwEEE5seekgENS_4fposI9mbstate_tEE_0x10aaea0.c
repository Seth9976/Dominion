// 函数: _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE5seekgENS_4fposI9mbstate_tEE
// 地址: 0x10aaea0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_2 = arg1 + *(*arg1 - 0x18)
int32_t x22 = *(x8_2 + 0x20) & 0xfffffffd
int32_t x9_2 = x22 | (*(x8_2 + 0x28) == 0 ? 1 : 0)
bool cond:1 = (x9_2 & *(x8_2 + 0x24)) != 0
*(x8_2 + 0x20) = x9_2

if (not(cond:1))
    int64_t* result = arg1
    int64_t x8_4 = *(*arg1 - 0x18)
    void* x9_3 = arg1 + x8_4
    int32_t x10_1 = *(x9_3 + 0x20)
    
    if (x10_1 == 0)
        if (*(x9_3 + 0x88) != 0)
            std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush()
            x8_4 = *(*result - 0x18)
        
        if (*(x9_3 + 0x88) != 0 && *(result + x8_4 + 0x20) != 0)
            return result
        
        int64_t* x0_1 = *(result + x8_4 + 0x28)
        int64_t entry_x1
        int64_t entry_x2
        int32_t x20_2
        
        if ((*(*x0_1 + 0x28))(x0_1, entry_x1, entry_x2, 8) == -1)
            x20_2 = x22 | 4
        else
            x20_2 = x22
        
        void* x8_14 = result + *(*result - 0x18)
        int32_t x9_8 = *(x8_14 + 0x20) | x20_2 | (*(x8_14 + 0x28) == 0 ? 1 : 0)
        bool cond:5_1 = (x9_8 & *(x8_14 + 0x24)) != 0
        *(x8_14 + 0x20) = x9_8
        
        if (not(cond:5_1))
            return result
    else
        int32_t x10_3 = x10_1 | (*(x9_3 + 0x28) == 0 ? 1 : 0) | 4
        bool cond:3_1 = (x10_3 & *(x9_3 + 0x24)) == 0
        *(x9_3 + 0x20) = x10_3
        
        if (cond:3_1)
            return result

sub_10b053c()
noreturn
