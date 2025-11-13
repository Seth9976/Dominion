// 函数: _ZN5Botan5ChainC1EPPNS_6FilterEm
// 地址: 0xd77dec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Filter + 0x10
*(arg1 + 8) = zx.o(0)
__builtin_memset(&arg1[3], 0, 0x20)
int64_t result =
    std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::__append(&arg1[4])
__builtin_memset(&arg1[7], 0, 0x11)
*arg1 = _vtable_for_Botan::Chain + 0x10
int64_t entry_x2

if (entry_x2 != 0)
    int64_t x8_2 = 0
    
    do
        int64_t x9_3 = *(arg2 + (x8_2 << 3))
        
        if (x9_3 != 0)
            int64_t x10_1 = arg1[4]
            int64_t i = arg1[7]
            
            if (i u< (arg1[5] - x10_1) s>> 3)
                void* x12_3
                
                do
                    x12_3 = *(x10_1 + (i << 3))
                    
                    if (x12_3 == 0)
                        break
                    
                    x10_1 = *(x12_3 + 0x20)
                    i = *(x12_3 + 0x38)
                while (i u< (*(x12_3 + 0x28) - x10_1) s>> 3)
            
            *(x10_1 + (i << 3)) = x9_3
            arg1[8] += 1
        
        x8_2 += 1
    while (x8_2 != entry_x2)

return result
