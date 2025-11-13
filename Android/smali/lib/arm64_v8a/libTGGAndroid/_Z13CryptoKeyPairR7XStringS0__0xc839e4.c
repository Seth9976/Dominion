// 函数: _Z13CryptoKeyPairR7XStringS0_
// 地址: 0xc839e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int64_t var_2040
botan_rng_init(&var_2040, "user")
int64_t var_2048
botan_privkey_create_ecdsa(&var_2048, var_2040, 0)
int64_t var_2050
botan_privkey_export_pubkey(&var_2050, var_2048)
int64_t x0_3 = var_2048
int64_t var_2058 = 0x1000
void var_1038
botan_privkey_export(x0_3, &var_1038, &var_2058, 0)
int64_t x1_3 = var_2058
int64_t var_2060 = 0x1000
void var_2038
botan_base64_encode(&var_1038, x1_3, &var_2038, &var_2060)
XString::operator=(arg1)
int64_t x0_6 = var_2050
var_2058 = 0x1000
botan_pubkey_export(x0_6, &var_1038, &var_2058, 0)
int64_t x1_5 = var_2058
var_2060 = 0x1000
botan_base64_encode(&var_1038, x1_5, &var_2038, &var_2060)
XString::operator=(arg2)
botan_privkey_destroy(var_2048)
botan_pubkey_destroy(var_2050)
int64_t result = botan_rng_destroy(var_2040)

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
