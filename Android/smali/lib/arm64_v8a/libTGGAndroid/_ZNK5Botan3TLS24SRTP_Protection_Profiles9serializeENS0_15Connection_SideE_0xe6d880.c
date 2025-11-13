// 函数: _ZNK5Botan3TLS24SRTP_Protection_Profiles9serializeENS0_15Connection_SideE
// 地址: 0xe6d880
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t x23 = *(arg1 + 8)
int64_t x22 = *(arg1 + 0x10)
void* x20 = arg1
uint8_t* x0 = operator new(1)
int64_t x22_1 = x22 - x23
char* x21 = x0
*entry_x8 = x0
entry_x8[1] = &x0[1]
*x0 = (x22_1 u>> 8).b
entry_x8[2] = &x0[1]
uint8_t* x0_1
int128_t v0
int128_t v1
x0_1, v0, v1 = operator new(2)
uint8_t x10 = *x21
v0.q = x0_1
v0:8.q = x0_1
v1.q = 2
v1:8.q = 2
*entry_x8 = x0_1
x0_1[1] = x22_1.b & 0xfe
*x0_1 = x10
*(entry_x8 + 8) = v0 + v1
uint8_t* result = operator delete(x21)
int16_t* x24 = *(x20 + 8)
int64_t x25 = *(x20 + 0x10)

if (x24 == x25)
label_e6da6c:
    char* x8_10 = entry_x8[1]
    int64_t x9_5 = entry_x8[2]
    
    if (x8_10 u< x9_5)
        *x8_10 = 0
        entry_x8[1] = &x8_10[1]
        return result
    
    uint8_t* x20_3 = *entry_x8
    size_t x21_3 = x8_10 - x20_3
    
    if (x21_3 + 1 s>= 0)
        void* x9_6 = x9_5 - x20_3
        uint64_t x11_1 = x9_6 << 1
        uint64_t x8_13
        
        if (x11_1 u< x21_3 + 1)
            x8_13 = x21_3 + 1
        else
            x8_13 = x11_1
        
        uint64_t x23_1
        
        x23_1 = x9_6 u< 0x3fffffffffffffff ? x8_13 : 0x7fffffffffffffff
        
        uint8_t* result_1
        
        if (x23_1 == 0)
            result_1 = nullptr
        else
            result = operator new(x23_1)
            result_1 = result
        
        void* x24_1 = &result_1[x21_3]
        *x24_1 = 0
        
        if (x21_3 s>= 1)
            result = memcpy(result_1, x20_3, x21_3)
        
        *entry_x8 = result_1
        entry_x8[1] = x24_1 + 1
        entry_x8[2] = &result_1[x23_1]
        
        if (x20_3 != 0)
            return operator delete(x20_3) __tailcall
        
        return result
else
    while (true)
        uint8_t* fp_2 = entry_x8[1]
        int64_t x8_2 = entry_x8[2]
        uint32_t x28_1 = zx.d(*x24)
        void* fp_3
        
        if (fp_2 u>= x8_2)
            void* x20_1 = *entry_x8
            size_t x21_1 = fp_2 - x20_1
            
            if (x21_1 + 1 s>= 0)
                void* x8_4 = x8_2 - x20_1
                int64_t x10_1 = x8_4 << 1
                int64_t x9_2
                
                if (x10_1 u< x21_1 + 1)
                    x9_2 = x21_1 + 1
                else
                    x9_2 = x10_1
                
                int64_t x22_2
                
                x22_2 = x8_4 u< 0x3fffffffffffffff ? x9_2 : 0x7fffffffffffffff
                
                uint8_t* result_2
                
                if (x22_2 == 0)
                    result_2 = nullptr
                else
                    result = operator new(x22_2)
                    result_2 = result
                
                char* fp_4 = &result_2[x21_1]
                *fp_4 = (x28_1 u>> 8).b
                fp_3 = &fp_4[1]
                
                if (x21_1 s>= 1)
                    result = memcpy(result_2, x20_1, x21_1)
                
                *entry_x8 = result_2
                entry_x8[1] = fp_3
                entry_x8[2] = &result_2[x22_2]
                
                if (x20_1 != 0)
                    result = operator delete(x20_1)
                    fp_3 = entry_x8[1]
                
                goto label_e6d9d4
        else
            *fp_2 = (x28_1 u>> 8).b
            fp_3 = &fp_2[1]
            entry_x8[1] = fp_3
        label_e6d9d4:
            int64_t x8_7 = entry_x8[2]
            
            if (fp_3 u< x8_7)
                *fp_3 = x28_1.b
                entry_x8[1] = fp_3 + 1
            label_e6d928:
                x24 = &x24[1]
                
                if (x25 == x24)
                    goto label_e6da6c
                
                continue
            else
                uint8_t* x20_2 = *entry_x8
                size_t x21_2 = fp_3 - x20_2
                
                if (x21_2 + 1 s>= 0)
                    void* x8_8 = x8_7 - x20_2
                    int64_t x10_2 = x8_8 << 1
                    int64_t x9_4
                    
                    if (x10_2 u< x21_2 + 1)
                        x9_4 = x21_2 + 1
                    else
                        x9_4 = x10_2
                    
                    int64_t x22_3
                    
                    x22_3 = x8_8 u< 0x3fffffffffffffff ? x9_4 : 0x7fffffffffffffff
                    
                    uint8_t* result_3
                    void* fp_6
                    
                    if (x22_3 == 0)
                        result_3 = nullptr
                        *x21_2 = x28_1.b
                        fp_6 = x21_2 + 1
                        
                        if (x21_2 s>= 1)
                            result = memcpy(result_3, x20_2, x21_2)
                    else
                        result = operator new(x22_3)
                        result_3 = result
                        void* fp_5 = &result_3[x21_2]
                        *fp_5 = x28_1.b
                        fp_6 = fp_5 + 1
                        
                        if (x21_2 s>= 1)
                            result = memcpy(result_3, x20_2, x21_2)
                    
                    *entry_x8 = result_3
                    entry_x8[1] = fp_6
                    entry_x8[2] = &result_3[x22_3]
                    
                    if (x20_2 != 0)
                        result = operator delete(x20_2)
                    
                    goto label_e6d928
                
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        break

int64_t* x0_16 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
uint8_t* x0_17 = *entry_x8

if (x0_17 != 0)
    entry_x8[1] = x0_17
    operator delete(x0_17)

sub_1101e04(x0_16)
noreturn
