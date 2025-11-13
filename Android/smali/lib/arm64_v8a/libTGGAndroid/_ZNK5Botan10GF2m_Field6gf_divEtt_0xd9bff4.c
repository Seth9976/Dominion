// 函数: _ZNK5Botan10GF2m_Field6gf_divEtt
// 地址: 0xd9bff4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *(arg1 + 0x10)
uint64_t x10 = zx.q(arg2)
int64_t x9 = *x8
int64_t x12 = (x8[1] - x9) s>> 1

if (x12 u> x10)
    int16_t entry_x2
    uint64_t x11_2 = zx.q(entry_x2)
    
    if (x12 u> x11_2)
        if (zx.d(arg2) == 0)
            return 0
        
        x8 = *(arg1 + 0x18)
        uint32_t x10_2 = zx.d(*(x9 + (x10 << 1))) - zx.d(*(x9 + (x11_2 << 1)))
        int64_t x9_2 = *x8
        uint64_t x10_5 = zx.q((x10_2.w & *(arg1 + 8)) + (x10_2 s>> *arg1).w)
        
        if (x10_5 u< (x8[1] - x9_2) s>> 1)
            return zx.q(*(x9_2 + (x10_5 << 1)))

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x0_3
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x1
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >* x2
Botan::McEliece_PrivateKey* x3
x0_3, x1, x2, x3 = std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
return Botan::mceliece_decrypt(x0_3, x1, x2, x3) __tailcall
