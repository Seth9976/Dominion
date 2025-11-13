// 函数: _ZNK5Botan14DSA_PrivateKey9check_keyERNS_21RandomNumberGeneratorEb
// 地址: 0xd1f5f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = Botan::DL_Group::verify_group(arg1 + 0x48 + *(*(arg1 + 0x48) - 0xc8) + 0x30, arg2)
int32_t x0_3

if ((x0_1 & 1) != 0)
    void* x8_5 = arg1 + 0x48 + *(*(arg1 + 0x48) - 0xc8)
    x0_3 = Botan::DL_Group::verify_element_pair(x8_5 + 0x30, x8_5 + 8)

uint32_t x22_1

if ((x0_1 & 1) == 0 || (x0_3 & 1) == 0)
    x22_1 = 0
else
    int32_t x0_7 = Botan::BigInt::cmp(arg1 + 0x50, Botan::DL_Group::data() + 0x28)
    x22_1 = x0_7 u>> 0x1f
    int32_t entry_x2
    
    if ((x0_7 & 0x80000000) != 0 && (entry_x2 & 1) != 0)
        char var_48 = 0x1c
        int64_t var_47
        __builtin_strncpy(&var_47, "EMSA1(SHA-256)", 0xf)
        x22_1 = Botan::KeyPair::signature_consistency_check(arg2, arg1 + 0x48, 
            arg1 + 0x48 + *(*(arg1 + 0x48) - 0x88), &var_48)
        void* var_38
        
        if ((zx.d(var_48) & 1) != 0)
            operator delete(var_38)

return zx.q(x22_1) & 1
