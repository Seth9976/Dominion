// 函数: sub_f400a0
// 地址: 0xf400a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t* x21 = *(arg1 + 8)
int128_t* x0
int128_t v0
int128_t v1
x0, v0, v1 = operator new(0x20)
v1 = x21[1]
*x0 = *x21
x0[1] = v1
int64_t* x0_1 = operator new(0x18)
int64_t* x0_2 = operator new(0x20)
x0_2[2] = 0
x0_2[3] = 0
*x0_2 = _vtable_for_Botan::Ed25519_PublicKey + 0x88
x0_2[1] = 0
int128_t* x0_3
int128_t v0_1
int128_t v1_1
x0_3, v0_1, v1_1 = operator new(0x20)
x0_2[2] = &x0_3[2]
x0_2[3] = &x0_3[2]
x0_2[1] = x0_3
x0_1[2] = x0_2
v1_1 = x0[1]
x0_1[1].d = 0x2c286519
*x0_3 = *x0
x0_3[1] = v1_1
*x0_1 = _vtable_for_botan_pubkey_struct + 0x10
**(arg1 + 0x10) = x0_1
operator delete(x0)
return 0
