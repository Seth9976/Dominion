// 函数: _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEs
// 地址: 0x10adcc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
void** result = arg1
char var_70 = 0
int64_t var_68 = arg1
void* x8_1 = *arg1
void* x9_1 = arg1 + *(x8_1 - 0x18)

if (*(x9_1 + 0x20) == 0)
    if (*(x9_1 + 0x88) != 0)
        std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush()
        x8_1 = *result
    
    char var_70_1 = 1
    int32_t x26_1 = *(result + *(x8_1 - 0x18) + 8)
    void var_60
    std::__ndk1::locale::locale(&var_60)
    int64_t* x0_3 = std::__ndk1::locale::use_facet(&var_60)
    std::__ndk1::locale::~locale()
    void* x22_1 = result + *(*result - 0x18)
    int32_t x24_1 = *(x22_1 + 0x90)
    int64_t x23_1 = *(x22_1 + 0x28)
    
    if (x24_1 == 0xffffffff)
        std::__ndk1::locale::locale(&var_60)
        int64_t* x0_6 = std::__ndk1::locale::use_facet(&var_60)
        x24_1 = (*(*x0_6 + 0x58))(x0_6, 0x20)
        std::__ndk1::locale::~locale()
        *(x22_1 + 0x90) = x24_1
    
    int32_t x8_8 = x26_1 & 0x4a
    bool z_1
    
    if (x8_8 != 8)
        z_1 = x8_8 == 0x40
    else
        z_1 = true
    
    uint64_t x4_1
    int16_t entry_x1
    
    if (z_1)
        x4_1 = zx.q(entry_x1)
    else
        x4_1 = sx.q(entry_x1)
    
    if ((*(*x0_3 + 0x20))(x0_3, x23_1, x22_1, zx.q(x24_1), x4_1) == 0)
        void* x8_12 = result + *(*result - 0x18)
        int32_t x9_5 = *(x8_12 + 0x20) | 5
        bool cond:1_1 = (*(x8_12 + 0x24) & x9_5) != 0
        *(x8_12 + 0x20) = x9_5
        
        if (cond:1_1)
            sub_10b053c()
            noreturn

std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sentry::~sentry()

if (*(x25 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
