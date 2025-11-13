// 函数: _ZN5Botan16MDx_HashFunction11write_countEPh
// 地址: 0xdace8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = zx.q(arg1[9])
int64_t result = (**arg1)()

if (result u< x21)
    Botan::assertion_failure("m_counter_size <= output_length()", &data_793a18, "write_count", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xc296)
else
    uint64_t x8_2 = zx.q(arg1[9])
    
    if (x8_2 u> 7)
        uint32_t x10 = zx.d(arg1[0xb])
        int64_t x9_1 = *(arg1 + 0x10) << 3
        uint64_t x11 = _byteswap(x9_1)
        int64_t x9_2
        
        x9_2 = x10 == 0 ? x9_1 : x11
        
        int64_t entry_x1
        *(entry_x1 + x8_2 - 8) = x9_2
        return result

std::__ndk1::vector<void*, std::__ndk1::allocator<void*> >* x0
uint64_t x1
x0, x1 = Botan::assertion_failure("m_counter_size >= 8", &data_793a18, "write_count", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xc297)
return Botan::Memory_Pool::Memory_Pool(x0, x1) __tailcall
