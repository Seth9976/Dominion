// 函数: _ZNK5Botan3TLS16Supported_Groups9ec_groupsEv
// 地址: 0xe47408
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* entry_x0
int16_t* x23 = *(entry_x0 + 8)
int64_t x24 = *(entry_x0 + 0x10)

if (x23 == x24)
    return 

do
    uint32_t x27_1 = zx.d(*x23)
    
    if ((x27_1 & 0xff00) != 0x100)
        uint16_t* x8_2 = entry_x8[1]
        
        if (x8_2 != entry_x8[2])
            *x8_2 = x27_1.w
            entry_x8[1] = &x8_2[1]
        else
            void* x20_1 = *entry_x8
            size_t x21_1 = x8_2 - x20_1
            
            if (x21_1 s<= -3)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                sub_ef2a0c()
                noreturn
            
            int64_t fp_1 = x21_1 s>> 1
            size_t x8_4
            
            if (x21_1 u< fp_1 + 1)
                x8_4 = fp_1 + 1
            else
                x8_4 = x21_1
            
            size_t x28_1
            
            x28_1 = fp_1 u< 0x3fffffffffffffff ? x8_4 : 0x7fffffffffffffff
            
            void* const x22_1
            void* fp_3
            
            if (x28_1 == 0)
                x22_1 = nullptr
                *(fp_1 << 1) = x27_1.w
                fp_3 = (fp_1 << 1) + 2
                
                if (x21_1 s>= 1)
                    memcpy(x22_1, x20_1, x21_1)
            else
                if ((x28_1 & 0xffffffff80000000) != 0)
                    sub_ef2a0c()
                    noreturn
                
                x22_1 = operator new(x28_1 << 1)
                void* fp_2 = x22_1 + (fp_1 << 1)
                *fp_2 = x27_1.w
                fp_3 = fp_2 + 2
                
                if (x21_1 s>= 1)
                    memcpy(x22_1, x20_1, x21_1)
            
            *entry_x8 = x22_1
            entry_x8[1] = fp_3
            entry_x8[2] = x22_1 + (x28_1 << 1)
            
            if (x20_1 != 0)
                operator delete(x20_1)
    
    x23 = &x23[1]
while (x24 != x23)
