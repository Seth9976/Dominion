// 函数: _ZNK5Botan14XMSS_PublicKey14raw_public_keyEv
// 地址: 0xed10e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int32_t* result = operator new(4)
char* x8 = &result[1]
void* entry_x0
int32_t temp0 = _byteswap(*(entry_x0 + 0x20))
entry_x8[1] = x8
entry_x8[2] = x8
*result = temp0
*entry_x8 = result
char* x25 = *(entry_x0 + 0xf0)
int64_t x9_1 = *(entry_x0 + 0xf8)
int32_t* x20_1

if (x25 == x9_1)
label_ed11f8:
    char* x24_1 = *(entry_x0 + 0x108)
    int64_t x25_1 = *(entry_x0 + 0x110)
    
    if (x24_1 == x25_1)
        return result
    
    while (true)
        char* x8_7 = entry_x8[1]
        
        if (x8_7 != entry_x8[2])
            *x8_7 = *x24_1
            entry_x8[1] = &x8_7[1]
        else
            x20_1 = *entry_x8
            size_t x21_1 = x8_7 - x20_1
            
            if (x21_1 + 1 s< 0)
                break
            
            int64_t x9_7 = x21_1 << 1
            int64_t x8_9
            
            if (x9_7 u< x21_1 + 1)
                x8_9 = x21_1 + 1
            else
                x8_9 = x9_7
            
            int64_t x22_2
            
            x22_2 = x21_1 u< 0x3fffffffffffffff ? x8_9 : 0x7fffffffffffffff
            
            int32_t* result_1
            
            if (x22_2 == 0)
                result_1 = nullptr
            else
                result = operator new(x22_2)
                result_1 = result
            
            void* x28_1 = result_1 + x21_1
            *x28_1 = *x24_1
            
            if (x21_1 s>= 1)
                result = memcpy(result_1, x20_1, x21_1)
            
            *entry_x8 = result_1
            entry_x8[1] = x28_1 + 1
            entry_x8[2] = result_1 + x22_2
            
            if (x20_1 != 0)
                result = operator delete(x20_1)
        
        x24_1 = &x24_1[1]
        
        if (x25_1 == x24_1)
            return result
else
    char* x9_2 = x8
    
    while (x9_2 != x8)
        *x9_2 = *x25
        entry_x8[1] = &x9_2[1]
    label_ed11dc:
        
        if (x9_1 - 1 == x25)
            goto label_ed11f8
        
        x9_2 = entry_x8[1]
        x8 = entry_x8[2]
        x25 = &x25[1]
    
    x20_1 = *entry_x8
    void* x22_1 = x8 - x20_1
    
    if (x22_1 + 1 s>= 0)
        int64_t x9_4 = x22_1 << 1
        int64_t x8_3
        
        if (x9_4 u< x22_1 + 1)
            x8_3 = x22_1 + 1
        else
            x8_3 = x9_4
        
        int64_t x23_1
        
        x23_1 = x22_1 u< 0x3fffffffffffffff ? x8_3 : 0x7fffffffffffffff
        
        int32_t* result_2
        
        if (x23_1 == 0)
            result_2 = nullptr
        else
            result = operator new(x23_1)
            result_2 = result
        
        void* fp_1 = result_2 + x22_1
        *fp_1 = *x25
        
        if (x22_1 s>= 1)
            result = memcpy(result_2, x20_1, x22_1)
        
        *entry_x8 = result_2
        entry_x8[1] = fp_1 + 1
        entry_x8[2] = result_2 + x23_1
        
        if (x20_1 == 0)
            goto label_ed11dc
        
        result = operator delete(x20_1)
        goto label_ed11dc
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

int64_t* x0_8 = std::__ndk1::__vector_base_common<true>::__throw_length_error()

if (x20_1 != 0)
    entry_x8[1] = x20_1
    operator delete(x20_1)

sub_1101e04(x0_8)
noreturn
