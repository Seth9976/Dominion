// 函数: _ZN5Botan20XMSS_WOTS_PrivateKeyC1ENS_20XMSS_WOTS_Parameters15ots_algorithm_tERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xecccec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = arg1
*(arg1 + 0x20) = _vtable_for_Botan::Public_Key + 0x10
void* result_1
std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&result_1)
Botan::XMSS_WOTS_PublicKey::XMSS_WOTS_PublicKey(arg1 + 0x20, 
    _VTT_for_Botan::XMSS_WOTS_PrivateKey + 0x20)
void* result = result_1

if (result != 0)
    void* result_2 = result
    int64_t var_28
    result = Botan::deallocate_memory(result, var_28 - result, 1)

x19[2] = 0
x19[3] = 0
x19[4] = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0x208
*x19 = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0xd0
x19[1] = 0
return result
