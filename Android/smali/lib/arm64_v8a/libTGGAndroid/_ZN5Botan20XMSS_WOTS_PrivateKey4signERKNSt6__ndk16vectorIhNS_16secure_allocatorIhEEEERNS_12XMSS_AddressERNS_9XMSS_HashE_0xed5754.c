// 函数: _ZN5Botan20XMSS_WOTS_PrivateKey4signERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEERNS_12XMSS_AddressERNS_9XMSS_HashE
// 地址: 0xed5754
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x70)
Botan::XMSS_WOTS_Parameters::base_w(arg1 + 0x28, arg2)
Botan::XMSS_WOTS_Parameters::append_checksum(arg1 + 0x28)
Botan::XMSS_WOTS_PrivateKey::at(arg1, arg3)
void* result

if (*(arg1 + 0x80) != 0)
    int64_t x25_1 = 0
    int64_t i = 0
    
    do
        void* x8_2 = *arg3
        
        if (zx.d(*(x8_2 + 0xf)) != 0)
            sub_c776cc(Botan::assertion_failure("get_type() == Type::OTS_Hash_Address", 
                "set_chain_address() requires XMSS_Address::Type::OTS_Hash_Address.", 
                "set_chain_address", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                0x1bcc))
            noreturn
        
        *(x8_2 + 0x14) = (i u>> 0x18).b
        *(*arg3 + 0x15) = (i u>> 0x10).b
        *(*arg3 + 0x16) = (i u>> 8).b
        *(*arg3 + 0x17) = (i.d).b
        int64_t* entry_x8
        Botan::XMSS_WOTS_PublicKey::chain(arg1 + 0x20, *entry_x8 + x25_1, 0, zx.q(*(result + i)), 
            arg3, arg1 + 0xf8)
        i += 1
        x25_1 += 0x18
    while (i u< *(arg1 + 0x80))

if (result == 0)
    return result

void* result_1 = result
int64_t var_58
return Botan::deallocate_memory(result, var_58 - result, 1)
