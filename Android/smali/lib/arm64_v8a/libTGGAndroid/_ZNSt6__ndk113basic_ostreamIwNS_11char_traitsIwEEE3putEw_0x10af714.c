// 函数: _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE3putEw
// 地址: 0x10af714
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
void** result = arg1
char var_48 = 0
int64_t var_40 = arg1
void* x8_1 = *arg1
void* x9_1 = arg1 + *(x8_1 - 0x18)

if (*(x9_1 + 0x20) == 0)
    if (*(x9_1 + 0x88) != 0)
        std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush()
        x8_1 = *result
    
    char var_48_1 = 1
    int64_t x8_2 = *(x8_1 - 0x18)
    int64_t* x0_1 = *(result + x8_2 + 0x28)
    
    if (x0_1 == 0)
        goto label_10af7cc
    
    int32_t* x8_3 = x0_1[6]
    int32_t entry_x1
    
    if (x8_3 == x0_1[7])
        if ((*(*x0_1 + 0x68))(x0_1, zx.q(entry_x1)) == 0xffffffff)
        label_10af7c8:
            x8_2 = *(*result - 0x18)
        label_10af7cc:
            void* x8_7 = result + x8_2
            int32_t x9_6 = *(x8_7 + 0x20) | 1
            bool cond:0_1 = (*(x8_7 + 0x24) & x9_6) != 0
            *(x8_7 + 0x20) = x9_6
            
            if (cond:0_1)
                sub_10b053c()
                noreturn
    else
        x0_1[6] = &x8_3[1]
        *x8_3 = entry_x1
        
        if (entry_x1 == 0xffffffff)
            goto label_10af7c8

std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sentry::~sentry()

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
