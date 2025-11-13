// 函数: _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE8readsomeEPwl
// 地址: 0x10aa728
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 8) = 0
int64_t x8_1 = *(*arg1 - 0x18)
void* x9 = arg1 + x8_1
int32_t x10 = *(x9 + 0x20)
int32_t x8_4

if (x10 != 0)
    int32_t x10_2 = x10 | (*(x9 + 0x28) == 0 ? 1 : 0) | 4
    bool cond:1_1 = (x10_2 & *(x9 + 0x24)) != 0
    *(x9 + 0x20) = x10_2
    
    if (not(cond:1_1))
    label_10aa77c:
        x8_4 = 4
    label_10aa788:
        void* x9_3 = arg1 + *(*arg1 - 0x18)
        int32_t x8_6 = *(x9_3 + 0x20) | x8_4 | (*(x9_3 + 0x28) == 0 ? 1 : 0)
        bool cond:3_1 = (x8_6 & *(x9_3 + 0x24)) != 0
        *(x9_3 + 0x20) = x8_6
        
        if (not(cond:3_1))
            return *(arg1 + 8)
    
    sub_10b053c()
    noreturn

if (*(x9 + 0x88) != 0)
    std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush()
    x8_1 = *(*arg1 - 0x18)

if (*(x9 + 0x88) != 0 && *(arg1 + x8_1 + 0x20) != 0)
    goto label_10aa77c

int64_t* x0_2 = *(arg1 + x8_1 + 0x28)
int64_t x8_9 = x0_2[3]
int64_t x9_6 = x0_2[4]
int64_t x0_3

if (x8_9 u>= x9_6)
    x0_3 = (*(*x0_2 + 0x38))()
else
    x0_3 = (x9_6 - x8_9) s>> 2

if (x0_3 == -1)
    x8_4 = 2
else if (x0_3 != 0)
    int64_t entry_x2
    int64_t x20_2
    
    x20_2 = x0_3 s> entry_x2 ? entry_x2 : x0_3
    
    int64_t* x8_16 = *(arg1 + *(*arg1 - 0x18) + 0x28)
    int64_t x0_5 = (*(*x8_16 + 0x40))(x8_16, arg2, x20_2)
    *(arg1 + 8) = x0_5
    
    x8_4 = x0_5 == x20_2 ? 0 : 6
else
    x8_4 = 0

goto label_10aa788
