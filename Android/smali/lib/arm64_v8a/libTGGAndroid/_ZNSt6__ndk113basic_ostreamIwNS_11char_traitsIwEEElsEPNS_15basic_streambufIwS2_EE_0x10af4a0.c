// 函数: _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEPNS_15basic_streambufIwS2_EE
// 地址: 0x10af4a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
char var_58 = 0
std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >* var_50 = arg1
void* x8_3 = arg1 + *(*arg1 - 0x18)

if (*(x8_3 + 0x20) == 0)
    if (*(x8_3 + 0x88) != 0)
        std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush()
    
    char var_58_1 = 1
    void* x8_7 = arg1 + *(*arg1 - 0x18)
    int64_t* entry_x1
    
    if (entry_x1 == 0)
        int32_t x9_10 = *(x8_7 + 0x20) | 1
        bool cond:0_1 = (*(x8_7 + 0x24) & x9_10) == 0
        *(x8_7 + 0x20) = x9_10
        
        if (not(cond:0_1))
            sub_10b053c()
            noreturn
    else
        int64_t* x21_1 = *(x8_7 + 0x28)
        int64_t x24_1 = 0
        
        while (true)
            int32_t* x8_9 = entry_x1[3]
            int32_t x0_2
            
            if (x8_9 == entry_x1[4])
                x0_2 = (*(*entry_x1 + 0x48))(entry_x1)
            else
                x0_2 = *x8_9
            
            int64_t* x22_1
            
            x22_1 = x0_2 == 0xffffffff ? nullptr : entry_x1
            
            if (x0_2 == 0xffffffff)
            label_10af614:
                
                if (x24_1 != 0)
                    break
            else
                int32_t* x8_12 = x22_1[3]
                int32_t x1
                
                if (x8_12 == x22_1[4])
                    x1 = (*(*x22_1 + 0x48))(x22_1)
                else
                    x1 = *x8_12
                
                if (x21_1 != 0)
                    int32_t* x8_15 = x21_1[6]
                    
                    if (x8_15 == x21_1[7])
                        x1 = (*(*x21_1 + 0x68))(x21_1)
                    else
                        x21_1[6] = &x8_15[1]
                        *x8_15 = x1
                    
                    if (x1 == 0xffffffff)
                        goto label_10af614
                    
                    int64_t x8_18 = x22_1[3]
                    
                    if (x8_18 != x22_1[4])
                        x22_1[3] = x8_18 + 4
                    else
                        (*(*x22_1 + 0x50))(x22_1, x1)
                    
                    x24_1 -= 1
                    continue
            
            void* x8_23 = arg1 + *(*arg1 - 0x18)
            int32_t x10_3 = *(x8_23 + 0x20) | (*(x8_23 + 0x28) == 0 ? 1 : 0) | 4
            bool cond:3_1 = (x10_3 & *(x8_23 + 0x24)) == 0
            *(x8_23 + 0x20) = x10_3
            
            if (cond:3_1)
                break
            
            sub_10b053c()
            noreturn

std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sentry::~sentry()

if (*(x23 + 0x28) == x8)
    return arg1

__stack_chk_fail()
noreturn
