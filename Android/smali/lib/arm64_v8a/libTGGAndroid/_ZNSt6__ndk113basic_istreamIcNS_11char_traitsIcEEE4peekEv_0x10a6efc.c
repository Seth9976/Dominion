// 函数: _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE4peekEv
// 地址: 0x10a6efc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
void* x8 = *entry_x0
entry_x0[1] = 0
int64_t x8_1 = *(x8 - 0x18)
void* x9 = entry_x0 + x8_1
int32_t x10 = *(x9 + 0x20)

if (x10 == 0)
    if (*(x9 + 0x88) != 0)
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::flush()
        x8_1 = *(*entry_x0 - 0x18)
    
    if (*(x9 + 0x88) != 0 && *(entry_x0 + x8_1 + 0x20) != 0)
        return -1
    
    int64_t* x0_1 = *(entry_x0 + x8_1 + 0x28)
    char* x8_6 = x0_1[3]
    uint32_t x8_7
    
    if (x8_6 == x0_1[4])
        x8_7 = (*(*x0_1 + 0x48))()
    else
        x8_7 = zx.d(*x8_6)
    
    void* x10_5 = entry_x0 + *(*entry_x0 - 0x18)
    int32_t x9_7 =
        *(x10_5 + 0x20) | (x8_7 == 0xffffffff ? 1 : 0) << 1 | (*(x10_5 + 0x28) == 0 ? 1 : 0)
    bool cond:3_1 = (x9_7 & *(x10_5 + 0x24)) != 0
    *(x10_5 + 0x20) = x9_7
    
    if (not(cond:3_1))
        return zx.q(x8_7)
else
    int32_t x10_2 = x10 | (*(x9 + 0x28) == 0 ? 1 : 0) | 4
    bool cond:1_1 = (x10_2 & *(x9 + 0x24)) != 0
    *(x9 + 0x20) = x10_2
    
    if (not(cond:1_1))
        return -1

sub_10b053c()
noreturn
