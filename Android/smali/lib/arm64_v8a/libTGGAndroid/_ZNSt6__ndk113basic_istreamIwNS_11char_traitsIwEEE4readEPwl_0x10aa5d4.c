// 函数: _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE4readEPwl
// 地址: 0x10aa5d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg1
*(arg1 + 8) = 0
int64_t x8_1 = *(x8 - 0x18)
void* x9 = arg1 + x8_1
int32_t x10 = *(x9 + 0x20)
int32_t x8_8

if (x10 == 0)
    if (*(x9 + 0x88) != 0)
        std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush()
        x8_1 = *(*arg1 - 0x18)
    
    if (*(x9 + 0x88) != 0 && *(arg1 + x8_1 + 0x20) != 0)
        goto label_10aa628
    
    int64_t* x0_1 = *(arg1 + x8_1 + 0x28)
    int64_t entry_x2
    int64_t x0_2 = (*(*x0_1 + 0x40))(x0_1, arg2, entry_x2)
    *(arg1 + 8) = x0_2
    
    x8_8 = x0_2 == entry_x2 ? 0 : 6
    
    goto label_10aa68c

int32_t x10_2 = x10 | (*(x9 + 0x28) == 0 ? 1 : 0) | 4
bool cond:1_1 = (x10_2 & *(x9 + 0x24)) != 0
*(x9 + 0x20) = x10_2

if (not(cond:1_1))
label_10aa628:
    x8_8 = 4
label_10aa68c:
    void* x9_5 = arg1 + *(*arg1 - 0x18)
    int32_t x8_10 = *(x9_5 + 0x20) | x8_8 | (*(x9_5 + 0x28) == 0 ? 1 : 0)
    bool cond:4_1 = (x8_10 & *(x9_5 + 0x24)) != 0
    *(x9_5 + 0x20) = x8_10
    
    if (not(cond:4_1))
        return arg1

sub_10b053c()
noreturn
