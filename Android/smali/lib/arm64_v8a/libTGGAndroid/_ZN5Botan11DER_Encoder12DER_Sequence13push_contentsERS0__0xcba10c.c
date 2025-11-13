// 函数: _ZN5Botan11DER_Encoder12DER_Sequence13push_contentsERS0_
// 地址: 0xcba10c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1
int32_t x22 = *(arg1 + 4)

if (x8 == 0x11)
    void var_48
    std::__ndk1::__sort<std::__ndk1::__less<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > >&, std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >*>(
        *(arg1 + 0x20), *(arg1 + 0x28), &var_48)
    void* x8_1 = *(arg1 + 0x20)
    void* x23_1 = *(arg1 + 0x28)
    
    if (x23_1 != x8_1)
        int64_t x24_1 = 0
        int64_t i = 0
        x23_1 = x8_1
        int64_t* x8_2
        
        do
            Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, Botan::secure_allocator<uint8_t> >(
                arg1 + 8, x23_1 + x24_1)
            x23_1 = *(arg1 + 0x20)
            x8_2 = *(arg1 + 0x28)
            i += 1
            x24_1 += 0x18
        while (i != ((x8_2 - x23_1) s>> 3) * -0x5555555555555555)
        
        if (x8_2 != x23_1)
            int64_t* x21_2 = x8_2
            
            do
                x21_2 = &x21_2[-3]
                void* x0_2 = *x21_2
                
                if (x0_2 != 0)
                    int64_t x9_4 = x8_2[-1]
                    x8_2[-2] = x0_2
                    Botan::deallocate_memory(x0_2, x9_4 - x0_2, 1)
                
                x8_2 = x21_2
            while (x23_1 != x21_2)
    
    x8 = *arg1
    *(arg1 + 0x28) = x23_1

*(arg1 + 0x10)
int64_t entry_x1
int64_t result = Botan::DER_Encoder::add_object(entry_x1, zx.q(x8), zx.q(x22) | 0x20, *(arg1 + 8))
*(arg1 + 0x10) = *(arg1 + 8)
return result
