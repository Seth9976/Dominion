// 函数: _ZN5Botan17X509_Cert_Options17add_ex_constraintERKNS_3OIDE
// 地址: 0xebedf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x24 = *(arg1 + 0x1f0)
Botan::OID const& x19 = arg1

if (x24 == *(arg1 + 0x1f8))
    return std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> >::__push_back_slow_path<Botan::OID const&>(
        x19 + 0x1e8) __tailcall

x24[2] = 0
x24[3] = 0
*x24 = _vtable_for_Botan::OID + 0x10
x24[1] = 0
void* entry_x1
int64_t x9 = *(entry_x1 + 8)
int64_t x8_2 = *(entry_x1 + 0x10)
uint64_t x23 = x8_2 - x9

if (x8_2 != x9)
    if ((x23 & 0xffffffff80000000) != 0)
        int64_t* x0_5 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        void* x8_8 = x24[1]
        
        if (x8_8 != 0)
            x24[2] = x8_8
            operator delete(x8_8)
        
        *(x19 + 0x1f0) = x24
        sub_1101e04(x0_5)
        noreturn
    
    arg1 = operator new(x23)
    x24[1] = arg1
    x24[2] = arg1
    x24[3] = arg1 + (x23 s>> 2 << 2)
    int64_t x1 = *(entry_x1 + 8)
    Botan::OID const& x22_1 = arg1
    size_t x20_1 = *(entry_x1 + 0x10) - x1
    
    if (x20_1 s>= 1)
        memcpy(x22_1, x1, x20_1)
        x22_1 += x20_1
    
    x24[2] = x22_1

*(x19 + 0x1f0) = &x24[4]
