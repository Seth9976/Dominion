// 函数: _ZNK5Botan3TLS19Server_Key_Exchange9serializeEv
// 地址: 0xe53104
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* entry_x0
int64_t x22 = *(entry_x0 + 0x20)
int64_t x8 = *(entry_x0 + 0x28)
uint64_t x23 = x8 - x22
void* x21_1
void* x24_1

if (x8 == x22)
    x21_1 = nullptr
    x24_1 = nullptr
    
    if (*(entry_x0 + 0x40) == *(entry_x0 + 0x38))
        return 
    
label_e53184:
    uint32_t x25_1 = zx.d(*(entry_x0 + 0x50))
    
    if (x25_1 == 0)
        goto label_e532a0
    
    size_t x22_1 = x24_1 - x21_1
    
    if (x22_1 + 1 s< 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        int64_t x9_3 = x22_1 << 1
        int64_t x8_4
        
        if (x9_3 u< x22_1 + 1)
            x8_4 = x22_1 + 1
        else
            x8_4 = x9_3
        
        int64_t x24_2
        
        x24_2 = x22_1 u< 0x3fffffffffffffff ? x8_4 : 0x7fffffffffffffff
        
        void* const x23_1
        
        if (x24_2 == 0)
            x23_1 = nullptr
        else
            x23_1 = operator new(x24_2)
        
        char* x26_1 = x23_1 + x22_1
        void* x24_3 = x23_1 + x24_2
        *x26_1 = (x25_1 u>> 8).b
        uint8_t* x26_2 = &x26_1[1]
        
        if (x22_1 s>= 1)
            memcpy(x23_1, x21_1, x22_1)
        
        *entry_x8 = x23_1
        entry_x8[1] = x26_2
        entry_x8[2] = x24_3
        
        if (x21_1 != 0)
            operator delete(x21_1)
            x26_2 = entry_x8[1]
            x24_3 = entry_x8[2]
        
        if (x26_2 u< x24_3)
            *x26_2 = x25_1.b
            entry_x8[1] = &x26_2[1]
        label_e532a0:
            uint8_t* x1_4 = *(entry_x0 + 0x38)
            Botan::TLS::append_tls_length_value<uint8_t, std::__ndk1::allocator<uint8_t> >(
                entry_x8, x1_4, *(entry_x0 + 0x40) - x1_4, 2)
            return 
        
        void* x21_2 = *entry_x8
        size_t x22_2 = x26_2 - x21_2
        
        if (x22_2 + 1 s>= 0)
            void* x9_4 = x24_3 - x21_2
            uint64_t x11_1 = x9_4 << 1
            uint64_t x8_7
            
            if (x11_1 u< x22_2 + 1)
                x8_7 = x22_2 + 1
            else
                x8_7 = x11_1
            
            uint64_t x24_4
            
            x24_4 = x9_4 u< 0x3fffffffffffffff ? x8_7 : 0x7fffffffffffffff
            
            void* const x23_2
            
            if (x24_4 == 0)
                x23_2 = nullptr
            else
                x23_2 = operator new(x24_4)
            
            uint8_t* x26_4 = x23_2 + x22_2
            *x26_4 = x25_1.b
            
            if (x22_2 s>= 1)
                memcpy(x23_2, x21_2, x22_2)
            
            *entry_x8 = x23_2
            entry_x8[1] = &x26_4[1]
            entry_x8[2] = x23_2 + x24_4
            
            if (x21_2 != 0)
                operator delete(x21_2)
            
            goto label_e532a0
else
    if ((x23 & 0xffffffff80000000) == 0)
        void* x0_1 = operator new(x23)
        x24_1 = x0_1 + x23
        x21_1 = x0_1
        *entry_x8 = x0_1
        entry_x8[1] = x0_1
        entry_x8[2] = x24_1
        memcpy(x0_1, x22, x23)
        entry_x8[1] = x24_1
        
        if (*(entry_x0 + 0x40) != *(entry_x0 + 0x38))
            goto label_e53184
        
        return 
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
int64_t* x0_14 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
void* x0_15 = *entry_x8

if (x0_15 != 0)
    entry_x8[1] = x0_15
    operator delete(x0_15)

sub_1101e04(x0_14)
noreturn
