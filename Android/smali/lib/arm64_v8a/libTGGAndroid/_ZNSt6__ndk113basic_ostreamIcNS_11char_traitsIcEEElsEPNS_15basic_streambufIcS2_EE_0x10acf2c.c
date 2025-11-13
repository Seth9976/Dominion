// 函数: _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEPNS_15basic_streambufIcS2_EE
// 地址: 0x10acf2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
char var_58 = 0
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >* var_50 = arg1
void* x8_3 = arg1 + *(*arg1 - 0x18)

if (*(x8_3 + 0x20) == 0)
    if (*(x8_3 + 0x88) != 0)
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::flush()
    
    char var_58_1 = 1
    void* x8_6 = arg1 + *(*arg1 - 0x18)
    int64_t* entry_x1
    
    if (entry_x1 == 0)
        int32_t x9_7 = *(x8_6 + 0x20) | 1
        bool cond:0_1 = (*(x8_6 + 0x24) & x9_7) == 0
        *(x8_6 + 0x20) = x9_7
        
        if (not(cond:0_1))
            sub_10b053c()
            noreturn
    else
        int64_t* x21_1 = *(x8_6 + 0x28)
        int64_t x23_1 = 0
        
        while (true)
            int32_t x0_2
            
            if (entry_x1[3] == entry_x1[4])
                x0_2 = (*(*entry_x1 + 0x48))(entry_x1)
            
            if (entry_x1[3] == entry_x1[4] && x0_2 == 0xffffffff)
            label_10ad078:
                
                if (x23_1 != 0)
                    break
            else
                char* x8_11 = entry_x1[3]
                char x0_3
                
                if (x8_11 == entry_x1[4])
                    x0_3 = (*(*entry_x1 + 0x48))(entry_x1)
                else
                    x0_3 = *x8_11
                
                if (x21_1 != 0)
                    char* x8_14 = x21_1[6]
                    
                    if (x8_14 == x21_1[7])
                        if ((*(*x21_1 + 0x68))(x21_1, zx.q(x0_3)) != 0xffffffff)
                            goto label_10ad038
                    else
                        x21_1[6] = &x8_14[1]
                        *x8_14 = x0_3
                    label_10ad038:
                        int64_t x8_17 = entry_x1[3]
                        
                        if (x8_17 != entry_x1[4])
                            entry_x1[3] = x8_17 + 1
                        else
                            (*(*entry_x1 + 0x50))(entry_x1)
                        
                        x23_1 -= 1
                        continue
                    
                    goto label_10ad078
            
            void* x8_22 = arg1 + *(*arg1 - 0x18)
            int32_t x10_4 = *(x8_22 + 0x20) | (*(x8_22 + 0x28) == 0 ? 1 : 0) | 4
            bool cond:2_1 = (x10_4 & *(x8_22 + 0x24)) != 0
            *(x8_22 + 0x20) = x10_4
            
            if (not(cond:2_1))
                break
            
            sub_10b053c()
            noreturn

std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::sentry::~sentry()

if (*(x22 + 0x28) == x8)
    return arg1

__stack_chk_fail()
noreturn
