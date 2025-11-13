// 函数: _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE7putbackEw
// 地址: 0x10aa8d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg1
int32_t x9_2 = *(arg1 + *(x8 - 0x18) + 0x20)
*(arg1 + 8) = 0
int32_t x21 = x9_2 & 0xfffffffd
void* x8_2 = arg1 + *(x8 - 0x18)
int32_t x9_5 = x21 | (*(x8_2 + 0x28) == 0 ? 1 : 0)
bool cond:0 = (x9_5 & *(x8_2 + 0x24)) != 0
*(x8_2 + 0x20) = x9_5

if (not(cond:0))
    int64_t* result = arg1
    int64_t x8_4 = *(*arg1 - 0x18)
    void* x9_6 = arg1 + x8_4
    int32_t x10_1 = *(x9_6 + 0x20)
    
    if (x10_1 == 0)
        if (*(x9_6 + 0x88) != 0)
            std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush()
            x8_4 = *(*result - 0x18)
        
        if (*(x9_6 + 0x88) != 0 && *(result + x8_4 + 0x20) != 0)
            goto label_10aa968
        
        int64_t* x0_2 = *(result + x8_4 + 0x28)
        
        if (x0_2 == 0)
            x21 |= 1
        else
            void* x8_12 = x0_2[3]
            int32_t entry_x1
            
            if (x0_2[2] == x8_12 || *(x8_12 - 4) != entry_x1)
                if ((*(*x0_2 + 0x58))(x0_2, zx.q(entry_x1)) == 0xffffffff)
                    x21 |= 1
            else
                x0_2[3] = x8_12 - 4
                
                if (entry_x1 == 0xffffffff)
                    x21 |= 1
        
        goto label_10aa974
    
    int32_t x10_3 = x10_1 | (*(x9_6 + 0x28) == 0 ? 1 : 0) | 4
    bool cond:2_1 = (x10_3 & *(x9_6 + 0x24)) != 0
    *(x9_6 + 0x20) = x10_3
    
    if (not(cond:2_1))
    label_10aa968:
        x21 |= 4
    label_10aa974:
        void* x8_9 = result + *(*result - 0x18)
        int32_t x9_9 = *(x8_9 + 0x20) | x21 | (*(x8_9 + 0x28) == 0 ? 1 : 0)
        bool cond:4_1 = (x9_9 & *(x8_9 + 0x24)) != 0
        *(x8_9 + 0x20) = x9_9
        
        if (not(cond:4_1))
            return result

sub_10b053c()
noreturn
