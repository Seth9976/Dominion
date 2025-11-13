// 函数: _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpENS_4fposI9mbstate_tEE
// 地址: 0x10ad4dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
void** result = arg1
char var_48 = 0
int64_t var_40 = arg1
void* x9 = *arg1
int64_t x8_1 = *(x9 - 0x18)
void* x11 = arg1 + x8_1
int32_t x10 = *(x11 + 0x20)

if (x10 == 0)
    if (*(x11 + 0x88) != 0)
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::flush()
        x9 = *result
    
    char var_48_1 = 1
    x8_1 = *(x9 - 0x18)
    x10 = *(result + x8_1 + 0x20)

if ((x10 & 5) == 0)
    int64_t* x0_1 = *(result + x8_1 + 0x28)
    int64_t entry_x1
    int64_t entry_x2
    
    if ((*(*x0_1 + 0x28))(x0_1, entry_x1, entry_x2, 0x10) == -1)
        void* x8_7 = result + *(*result - 0x18)
        int32_t x10_3 = *(x8_7 + 0x20) | (*(x8_7 + 0x28) == 0 ? 1 : 0) | 4
        bool cond:1_1 = (x10_3 & *(x8_7 + 0x24)) != 0
        *(x8_7 + 0x20) = x10_3
        
        if (cond:1_1)
            sub_10b053c()
            noreturn

std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::sentry::~sentry()

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
