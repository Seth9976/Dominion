// 函数: _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEe
// 地址: 0x10acb44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int64_t* entry_result
void** result = entry_result
char var_60 = 0
int64_t* entry_result_1 = entry_result
void* x8_1 = *entry_result
void* x9_1 = entry_result + *(x8_1 - 0x18)

if (*(x9_1 + 0x20) == 0)
    if (*(x9_1 + 0x88) != 0)
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::flush()
        x8_1 = *result
    
    char var_60_1 = 1
    *(x8_1 - 0x18)
    void var_50
    std::__ndk1::locale::locale(&var_50)
    int64_t* x0_3 = std::__ndk1::locale::use_facet(&var_50)
    std::__ndk1::locale::~locale()
    void* x21_1 = result + *(*result - 0x18)
    uint32_t x3_1 = *(x21_1 + 0x90)
    int64_t x22_1 = *(x21_1 + 0x28)
    
    if (x3_1 == 0xffffffff)
        std::__ndk1::locale::locale(&var_50)
        int64_t* x0_6 = std::__ndk1::locale::use_facet(&var_50)
        char x0_7 = (*(*x0_6 + 0x38))(x0_6, 0x20)
        std::__ndk1::locale::~locale()
        x3_1 = zx.d(x0_7)
        *(x21_1 + 0x90) = x3_1
    
    if ((*(*x0_3 + 0x48))(x0_3, x22_1, x21_1, x3_1, arg1.o) == 0)
        void* x8_12 = result + *(*result - 0x18)
        int32_t x9_3 = *(x8_12 + 0x20) | 5
        bool cond:0_1 = (*(x8_12 + 0x24) & x9_3) != 0
        *(x8_12 + 0x20) = x9_3
        
        if (cond:0_1)
            sub_10b053c()
            noreturn

std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::sentry::~sentry()

if (*(x24 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
