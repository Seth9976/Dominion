// 函数: _ZN5BotanplERKNS_3OIDEj
// 地址: 0xcb116c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_68_1
__builtin_memset(&var_68_1, 0, 0x18)
int64_t x23 = *(arg1 + 8)
int64_t x9 = *(arg1 + 0x10)
uint64_t x20 = zx.q(arg2)
size_t x22 = x9 - x23
void* x21_1
void* x22_1
void* x24_2
void* x25_1

if (x9 == x23)
    x25_1 = nullptr
    x21_1 = nullptr
label_cb11f0:
    size_t x23_1 = x25_1 - x21_1
    int64_t x24_3 = x23_1 s>> 2
    
    if ((x24_3 + 1) u>> 0x3e != 0)
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        int64_t x9_2 = x23_1 s>> 1
        int64_t x8_1
        
        if (x9_2 u< x24_3 + 1)
            x8_1 = x24_3 + 1
        else
            x8_1 = x9_2
        
        int64_t x25_2
        
        x25_2 = x24_3 u< 0x1fffffffffffffff ? x8_1 : 0x3fffffffffffffff
        
        if (x25_2 == 0)
            x22_1 = nullptr
        label_cb1240:
            int32_t* x24_4 = x22_1 + (x24_3 << 2)
            *x24_4 = x20.d
            x24_2 = &x24_4[1]
            
            if (x23_1 s>= 1)
                memcpy(x22_1, x21_1, x23_1)
            
            void* var_68_3 = x22_1
            void* var_60_3 = x24_2
            void* var_58_2 = x22_1 + (x25_2 << 2)
            
            if (x21_1 != 0)
                operator delete(x21_1)
            
            goto label_cb1284
        
        if (x25_2 u>> 0x3e == 0)
            x22_1 = operator new(x25_2 << 2)
            goto label_cb1240
else if ((x22 & 0xffffffff80000000) != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    void* x0_1 = operator new(x22)
    int64_t x26_1 = x22 s>> 2
    x25_1 = x0_1 + (x26_1 << 2)
    x21_1 = x0_1
    void* var_68_2 = x0_1
    void* var_58_1 = x25_1
    memcpy(x0_1, x23, x22)
    int32_t* x24_1 = x21_1 + x22
    int32_t* var_60_1 = x24_1
    
    if (x26_1 == x22 u>> 2)
        goto label_cb11f0
    
    *x24_1 = x20.d
    x24_2 = &x24_1[1]
    void* var_60_2 = x24_2
    x22_1 = x21_1
label_cb1284:
    void* x21_2 = x24_2 - x22_1
    int64_t* entry_x8
    entry_x8[2] = 0
    entry_x8[3] = 0
    *entry_x8 = _vtable_for_Botan::OID + 0x10
    entry_x8[1] = 0
    void* var_60_4
    
    if (x24_2 == x22_1)
        var_60_4 = x22_1
        return operator delete(x22_1) __tailcall
    
    if ((x21_2 & 0xffffffff80000000) == 0)
        void* x0_7 = operator new(x21_2)
        entry_x8[1] = x0_7
        entry_x8[2] = x0_7
        entry_x8[3] = x0_7 + (x21_2 s>> 2 << 2)
        memcpy(x0_7, x22_1, x21_2)
        entry_x8[2] = x0_7 + x21_2
        var_60_4 = x22_1
        return operator delete(x22_1) __tailcall
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
sub_ef2a0c()
noreturn
