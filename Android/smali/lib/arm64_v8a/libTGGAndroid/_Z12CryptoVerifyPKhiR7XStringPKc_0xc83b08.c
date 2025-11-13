// 函数: _Z12CryptoVerifyPKhiR7XStringPKc
// 地址: 0xc83b08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int64_t var_1050 = 0x1000
void var_1048
botan_base64_decode(arg4, strlen(arg4), &var_1048, &var_1050)
int64_t var_1058
botan_pubkey_load(&var_1058, &var_1048, var_1050)
var_1050 = 0x1000
botan_base64_decode(XString::operator char const*(), sx.q(XString::Length()), &var_1048, &var_1050)
int64_t var_1060
botan_pk_op_verify_create(&var_1060, var_1058, *SIGNATURE_SCHEME, 0)
botan_pk_op_verify_update(var_1060, arg1, sx.q(arg2))
int32_t x0_12 = botan_pk_op_verify_finish(var_1060, &var_1048, var_1050)
botan_pubkey_destroy(var_1058)
botan_pk_op_verify_destroy(var_1060)

if (*(x23 + 0x28) == x8)
    return zx.q(x0_12 == 0 ? 1 : 0)

__stack_chk_fail()
noreturn
