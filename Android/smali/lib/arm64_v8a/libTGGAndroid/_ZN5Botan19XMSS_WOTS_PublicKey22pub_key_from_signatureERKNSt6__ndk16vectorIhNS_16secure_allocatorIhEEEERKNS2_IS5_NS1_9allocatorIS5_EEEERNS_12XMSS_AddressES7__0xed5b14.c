// 函数: _ZN5Botan19XMSS_WOTS_PublicKey22pub_key_from_signatureERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEERKNS2_IS5_NS1_9allocatorIS5_EEEERNS_12XMSS_AddressES7_
// 地址: 0xed5b14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x50)
Botan::XMSS_WOTS_Parameters::base_w(arg1 + 8, arg2)
Botan::XMSS_WOTS_Parameters::append_checksum(arg1 + 8)
std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >
    * entry_x8
std::__ndk1::vector<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > > >::vector(
    entry_x8)
void* result

if (*(arg1 + 0x60) != 0)
    int64_t x24_1 = 0
    int64_t i = 0
    
    do
        void* x8_1 = *arg4
        
        if (zx.d(*(x8_1 + 0xf)) != 0)
            sub_c776cc(Botan::assertion_failure("get_type() == Type::OTS_Hash_Address", 
                "set_chain_address() requires XMSS_Address::Type::OTS_Hash_Address.", 
                "set_chain_address", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                0x1bcc))
            noreturn
        
        *(x8_1 + 0x14) = (i u>> 0x18).b
        *(*arg4 + 0x15) = (i u>> 0x10).b
        *(*arg4 + 0x16) = (i u>> 8).b
        *(*arg4 + 0x17) = (i.d).b
        uint64_t x2_1 = zx.q(*(result + i))
        Botan::XMSS_Hash* entry_x4
        Botan::XMSS_WOTS_PublicKey::chain(arg1, *entry_x8 + x24_1, x2_1, 
            *(arg1 + 0x48) + not.q(x2_1), arg4, entry_x4)
        i += 1
        x24_1 += 0x18
    while (i u< *(arg1 + 0x60))

if (result == 0)
    return result

void* result_1 = result
int64_t var_48
return Botan::deallocate_memory(result, var_48 - result, 1)
