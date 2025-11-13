// 函数: _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE5ungetEv
// 地址: 0x10a74f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_result
void* x8 = *entry_result
int32_t x9_2 = *(entry_result + *(x8 - 0x18) + 0x20)
entry_result[1] = 0
int32_t x20 = x9_2 & 0xfffffffd
void* x8_2 = entry_result + *(x8 - 0x18)
int32_t x9_5 = x20 | (*(x8_2 + 0x28) == 0 ? 1 : 0)
bool cond:0 = (x9_5 & *(x8_2 + 0x24)) != 0
*(x8_2 + 0x20) = x9_5

if (not(cond:0))
    int64_t x8_4 = *(*entry_result - 0x18)
    void* x9_6 = entry_result + x8_4
    int32_t x10_1 = *(x9_6 + 0x20)
    
    if (x10_1 == 0)
        if (*(x9_6 + 0x88) != 0)
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::flush()
            x8_4 = *(*entry_result - 0x18)
        
        if (*(x9_6 + 0x88) != 0 && *(entry_result + x8_4 + 0x20) != 0)
            goto label_10a7584
        
        int64_t* x0_2 = *(entry_result + x8_4 + 0x28)
        
        if (x0_2 == 0)
            x20 |= 1
        else
            int64_t x8_12 = x0_2[3]
            
            if (x0_2[2] == x8_12)
                if ((*(*x0_2 + 0x58))(x0_2, 0xffffffff) == 0xffffffff)
                    x20 |= 1
            else
                x0_2[3] = x8_12 - 1
        
        goto label_10a7590
    
    int32_t x10_3 = x10_1 | (*(x9_6 + 0x28) == 0 ? 1 : 0) | 4
    bool cond:2_1 = (x10_3 & *(x9_6 + 0x24)) != 0
    *(x9_6 + 0x20) = x10_3
    
    if (not(cond:2_1))
    label_10a7584:
        x20 |= 4
    label_10a7590:
        void* x8_9 = entry_result + *(*entry_result - 0x18)
        int32_t x9_9 = *(x8_9 + 0x20) | x20 | (*(x8_9 + 0x28) == 0 ? 1 : 0)
        bool cond:4_1 = (x9_9 & *(x8_9 + 0x24)) != 0
        *(x8_9 + 0x20) = x9_9
        
        if (not(cond:4_1))
            return entry_result

sub_10b053c()
noreturn
