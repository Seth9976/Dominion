// 函数: _ZN5Botan27XMSS_Verification_Operation18is_valid_signatureEPKhm
// 地址: 0xed4274
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *(*(arg1 + 8) + 0x20)
void* var_98_1
__builtin_memset(&var_98_1, 0, 0x18)
void* var_88_1
uint64_t entry_x2

if (entry_x2 != 0)
    if ((entry_x2 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    void* x0_1 = Botan::allocate_memory(entry_x2, 1)
    void* x23_1 = x0_1 + entry_x2
    var_98_1 = x0_1
    var_88_1 = x23_1
    memcpy(x0_1, arg2, entry_x2)
    void* var_90_1 = x23_1

std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> > var_80
Botan::XMSS_Signature::XMSS_Signature(&var_80, zx.q(x20))
void* x0_3 = var_98_1

if (x0_3 != 0)
    void* var_90_2 = x0_3
    Botan::deallocate_memory(x0_3, var_88_1 - x0_3, 1)

*(arg1 + 8)
int32_t x0_5 = Botan::XMSS_Verification_Operation::verify(arg1, &var_80, &arg1[0x58])
*(arg1 + 0x60) = *(arg1 + 0x58)
Botan::XMSS_WOTS_PublicKey::TreeSignature::~TreeSignature()
void* var_78

if (var_78 != 0)
    void* var_70_1 = var_78
    int64_t var_68
    Botan::deallocate_memory(var_78, var_68 - var_78, 1)

return zx.q(x0_5) & 1
