// 函数: _Z10CryptoSignPKhiPKcR7XString
// 地址: 0xc83c28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
uint32_t x8_1 = zx.d(data_1c3ef50)
int64_t var_2050 = 0x1000
void var_1048

if ((x8_1 & 1) == 0)
    botan_rng_init(&data_1c3ef58, "user")
    botan_base64_decode(arg3, strlen(arg3), &var_1048, &var_2050)
    botan_privkey_load(&data_1c3ef68, data_1c3ef58, &var_1048, var_2050, 0)
    botan_pk_op_sign_create(&data_1c3ef60, data_1c3ef68, *SIGNATURE_SCHEME, 0)
    data_1c3ef50 = 1

botan_pk_op_sign_update(data_1c3ef60, arg1, sx.q(arg2))
botan_pk_op_sign_finish(data_1c3ef60, data_1c3ef58, &var_1048, &var_2050)
int64_t x1_5 = var_2050
int64_t var_2058 = 0x1000
void var_2048
botan_base64_encode(&var_1048, x1_5, &var_2048, &var_2058)
int64_t result = XString::operator=(arg4)

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
