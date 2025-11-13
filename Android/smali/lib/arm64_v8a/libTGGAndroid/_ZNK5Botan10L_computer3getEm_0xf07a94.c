// 函数: _ZNK5Botan10L_computer3getEm
// 地址: 0xf07a94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 0x58)
int64_t entry_i

if (((*(arg1 + 0x60) - x9) s>> 3) * -0x5555555555555555 u<= entry_i)
    do
        Botan::L_computer::poly_double(arg1)
        int64_t* x8_1 = *(arg1 + 0x60)
        void* var_48
        void* var_40
        int64_t var_38
        
        if (x8_1 u< *(arg1 + 0x68))
            __builtin_memset(x8_1, 0, 0x18)
            *x8_1 = var_48
            x8_1[1] = var_40
            x8_1[2] = var_38
            *(arg1 + 0x60) = &x8_1[3]
        else
            std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::__push_back_slow_path<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >(
                arg1 + 0x58)
            
            if (var_48 != 0)
                var_40 = var_48
                Botan::deallocate_memory(var_48, var_38 - var_48, 1)
        x9 = *(arg1 + 0x58)
    while (((*(arg1 + 0x60) - x9) s>> 3) * -0x5555555555555555 u<= entry_i)

return x9 + entry_i * 0x18
