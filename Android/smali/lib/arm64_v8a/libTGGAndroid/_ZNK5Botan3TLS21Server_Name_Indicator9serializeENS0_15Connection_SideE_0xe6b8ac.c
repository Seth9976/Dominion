// 函数: _ZNK5Botan3TLS21Server_Name_Indicator9serializeENS0_15Connection_SideE
// 地址: 0xe6b8ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
uint64_t x8 = zx.q(*(arg1 + 8))
void* x20 = arg1
uint64_t x26

if ((x8.d & 1) != 0)
    x26 = *(x20 + 0x10)
else
    x26 = x8 u>> 1

uint8_t* x0 = operator new(1)
char* x21 = x0
*entry_x8 = x0
entry_x8[1] = &x0[1]
*x0 = ((x26.d + 3) u>> 8).b
entry_x8[2] = &x0[1]
char* x0_1
int128_t v0
int128_t v1
x0_1, v0, v1 = operator new(2)
char x9_1 = *x21
v0.q = x0_1
v0:8.q = x0_1
v1.q = 2
v1:8.q = 2
x0_1[1] = (x26.d + 3).b
*entry_x8 = x0_1
*x0_1 = x9_1
*(entry_x8 + 8) = v0 + v1
operator delete(x21)
char* x27 = entry_x8[1]
int64_t x8_2 = entry_x8[2]
void* x27_1

if (x27 u>= x8_2)
    void* x21_1 = *entry_x8
    size_t x22_1 = x27 - x21_1
    
    if (x22_1 + 1 s>= 0)
        void* x8_3 = x8_2 - x21_1
        uint64_t x11_1 = x8_3 << 1
        uint64_t x9_3
        
        if (x11_1 u< x22_1 + 1)
            x9_3 = x22_1 + 1
        else
            x9_3 = x11_1
        
        uint64_t x24_1
        
        x24_1 = x8_3 u< 0x3fffffffffffffff ? x9_3 : 0x7fffffffffffffff
        
        void* const x23_1
        
        if (x24_1 == 0)
            x23_1 = nullptr
        else
            x23_1 = operator new(x24_1)
        
        char* x27_2 = x23_1 + x22_1
        *x27_2 = 0
        x27_1 = &x27_2[1]
        
        if (x22_1 s>= 1)
            memcpy(x23_1, x21_1, x22_1)
        
        *entry_x8 = x23_1
        entry_x8[1] = x27_1
        entry_x8[2] = x23_1 + x24_1
        
        if (x21_1 != 0)
            operator delete(x21_1)
            x27_1 = entry_x8[1]
        
        goto label_e6b9dc
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    *x27 = 0
    x27_1 = &x27[1]
    entry_x8[1] = x27_1
label_e6b9dc:
    int64_t x8_4 = entry_x8[2]
    void* x27_3
    
    if (x27_1 u>= x8_4)
        void* x21_2 = *entry_x8
        size_t x22_2 = x27_1 - x21_2
        
        if (x22_2 + 1 s>= 0)
            void* x8_6 = x8_4 - x21_2
            uint64_t x11_2 = x8_6 << 1
            uint64_t x9_5
            
            if (x11_2 u< x22_2 + 1)
                x9_5 = x22_2 + 1
            else
                x9_5 = x11_2
            
            uint64_t x24_3
            
            x24_3 = x8_6 u< 0x3fffffffffffffff ? x9_5 : 0x7fffffffffffffff
            
            void* const x23_2
            
            if (x24_3 == 0)
                x23_2 = nullptr
            else
                x23_2 = operator new(x24_3)
            
            char* x27_4 = x23_2 + x22_2
            *x27_4 = (x26 u>> 8).b
            x27_3 = &x27_4[1]
            
            if (x22_2 s>= 1)
                memcpy(x23_2, x21_2, x22_2)
            
            *entry_x8 = x23_2
            entry_x8[1] = x27_3
            entry_x8[2] = x23_2 + x24_3
            
            if (x21_2 != 0)
                operator delete(x21_2)
                x27_3 = entry_x8[1]
            
            goto label_e6ba80
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        *x27_1 = (x26 u>> 8).b
        x27_3 = x27_1 + 1
        entry_x8[1] = x27_3
    label_e6ba80:
        int64_t x8_8 = entry_x8[2]
        
        if (x27_3 u< x8_8)
            *x27_3 = (x26.d).b
            entry_x8[1] = x27_3 + 1
        label_e6bb18:
            uint64_t x8_10 = zx.q(*(arg1 + 8))
            void* x21_4
            uint64_t x26_1
            
            if ((x8_10.d & 1) != 0)
                x26_1 = *(x20 + 0x10)
                x21_4 = *(x20 + 0x18)
            else
                x21_4 = arg1 + 9
                x26_1 = x8_10 u>> 1
            
            void* x20_1 = *entry_x8
            uint8_t* x22_4 = entry_x8[1]
            size_t x23_4 = x22_4 - x20_1
            uint64_t x24_7 = x23_4 + x26_1
            
            if (entry_x8[2] - x20_1 u< x24_7)
                int64_t x0_16 = operator new(x24_7)
                x22_4 = x0_16 + x23_4
                
                if (x23_4 s>= 1)
                    memcpy(x0_16, x20_1, x23_4)
                
                *entry_x8 = x0_16
                entry_x8[1] = x22_4
                entry_x8[2] = x0_16 + x24_7
                
                if (x20_1 != 0)
                    operator delete(x20_1)
                    x22_4 = entry_x8[1]
            
            return std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<uint8_t const*>(
                entry_x8, x22_4, x21_4)
        
        void* x21_3 = *entry_x8
        void* x22_3 = x27_3 - x21_3
        
        if (x22_3 + 1 s>= 0)
            void* x8_9 = x8_8 - x21_3
            uint64_t x11_3 = x8_9 << 1
            uint64_t x9_7
            
            if (x11_3 u< x22_3 + 1)
                x9_7 = x22_3 + 1
            else
                x9_7 = x11_3
            
            uint64_t x24_5
            
            x24_5 = x8_9 u< 0x3fffffffffffffff ? x9_7 : 0x7fffffffffffffff
            
            void* const x23_3
            
            if (x24_5 == 0)
                x23_3 = nullptr
            else
                x23_3 = operator new(x24_5)
            
            char* x27_6 = x23_3 + x22_3
            *x27_6 = (x26.d).b
            
            if (x22_3 s>= 1)
                memcpy(x23_3, x21_3, x22_3)
            
            *entry_x8 = x23_3
            entry_x8[1] = &x27_6[1]
            entry_x8[2] = x23_3 + x24_5
            
            if (x21_3 != 0)
                operator delete(x21_3)
            
            goto label_e6bb18
int64_t* x0_24 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
void* x0_25 = *entry_x8

if (x0_25 != 0)
    entry_x8[1] = x0_25
    operator delete(x0_25)

sub_1101e04(x0_24)
noreturn
