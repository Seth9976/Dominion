// 函数: _ZNK5Botan20XMSS_WOTS_Parameters6base_wERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEEm
// 地址: 0xed4990
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t entry_i

if (entry_i == 0)
    return 

int64_t i_1 = entry_i
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > const& x22_1 = arg1
int64_t fp_1 = 0
uint64_t x28_1 = 0
int64_t var_68_1 = 0
int64_t i

do
    if (fp_1 == 0)
        fp_1 = 8
        x28_1 = zx.q(*(*arg2 + var_68_1))
        var_68_1 += 1
    
    char* x8_3 = entry_x8[1]
    int64_t x9_3 = entry_x8[2]
    fp_1 -= zx.q(*(x22_1 + 0x68))
    char x21_1 = (x28_1 u>> fp_1).b & ((*(x22_1 + 0x40)).b - 1)
    
    if (x8_3 u< x9_3)
        *x8_3 = x21_1
        entry_x8[1] = &x8_3[1]
    else
        void* x23_1 = *entry_x8
        size_t x26_1 = x8_3 - x23_1
        
        if (x26_1 + 1 s< 0)
            int64_t* x0_4 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            void* x0_5 = *entry_x8
            
            if (x0_5 != 0)
                int64_t x8_8 = entry_x8[2]
                entry_x8[1] = x0_5
                Botan::deallocate_memory(x0_5, x8_8 - x0_5, 1)
            
            sub_1101e04(x0_4)
            noreturn
        
        void* x9_4 = x9_3 - x23_1
        int64_t x10_3 = x9_4 << 1
        int64_t x8_5
        
        if (x10_3 u< x26_1 + 1)
            x8_5 = x26_1 + 1
        else
            x8_5 = x10_3
        
        int64_t x24_1
        
        x24_1 = x9_4 u< 0x3fffffffffffffff ? x8_5 : 0x7fffffffffffffff
        
        size_t x2
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > const& x25_1
        
        if (x24_1 == 0)
            x25_1 = nullptr
            x2 = x26_1
        else
            arg1 = Botan::allocate_memory(x24_1, 1)
            x23_1 = *entry_x8
            x25_1 = arg1
            x2 = entry_x8[1] - x23_1
        
        void* x27_1 = x25_1 + x26_1
        void* x26_2 = x27_1 - x2
        *x27_1 = x21_1
        
        if (x2 s>= 1)
            memcpy(x26_2, x23_1, x2)
        
        int64_t x8_7 = entry_x8[2]
        *entry_x8 = x26_2
        entry_x8[1] = x27_1 + 1
        entry_x8[2] = x25_1 + x24_1
        
        if (x23_1 != 0)
            Botan::deallocate_memory(x23_1, x8_7 - x23_1, 1)
    
    i = i_1
    i_1 -= 1
while (i != 1)
