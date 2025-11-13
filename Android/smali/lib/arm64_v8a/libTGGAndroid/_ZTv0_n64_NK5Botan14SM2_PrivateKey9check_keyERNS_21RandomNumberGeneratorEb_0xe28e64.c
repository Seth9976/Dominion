// 函数: _ZTv0_n64_NK5Botan14SM2_PrivateKey9check_keyERNS_21RandomNumberGeneratorEb
// 地址: 0xe28e64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg1 + *(*arg1 - 0x40)
int32_t x0_1 = Botan::PointGFp::on_the_curve()
int32_t x21 = x0_1

if ((x0_1 & 1) != 0 && (arg3 & 1) != 0)
    char var_48
    __builtin_strncpy(&var_48, "(user@example.com,SM3", 0x16)
    x21 = Botan::KeyPair::signature_consistency_check(arg2, x20 + 8, 
        x20 + 8 + *(*(x20 + 8) - 0x88), &var_48)
    int128_t var_47
    
    if ((zx.d(var_48) & 1) != 0)
        operator delete(var_47:0xf.q)

return zx.q(x21) & 1
