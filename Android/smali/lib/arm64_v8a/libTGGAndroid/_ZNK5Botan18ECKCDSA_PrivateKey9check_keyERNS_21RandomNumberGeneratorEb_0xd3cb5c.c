// 函数: _ZNK5Botan18ECKCDSA_PrivateKey9check_keyERNS_21RandomNumberGeneratorEb
// 地址: 0xd3cb5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = Botan::PointGFp::on_the_curve()
int32_t x21 = x0_1
int32_t entry_x2

if ((x0_1 & 1) != 0 && (entry_x2 & 1) != 0)
    char var_48 = 0x1c
    int64_t var_47
    __builtin_strncpy(&var_47, "EMSA1(SHA-256)", 0xf)
    x21 = Botan::KeyPair::signature_consistency_check(arg2, arg1 + 8, 
        arg1 + 8 + *(*(arg1 + 8) - 0x88), &var_48)
    void* var_38
    
    if ((zx.d(var_48) & 1) != 0)
        operator delete(var_38)

return zx.q(x21) & 1
