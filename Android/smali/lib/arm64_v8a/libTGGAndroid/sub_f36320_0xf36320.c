// 函数: sub_f36320
// 地址: 0xf36320
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = **(arg1 + 0x10)
int64_t* x0_1 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(**(arg1 + 8))
int64_t x9_1 = *x19
*x19 = *x0_1
*x0_1 = x9_1
int64_t x9_2 = x19[1]
x19[1] = x0_1[1]
x0_1[1] = x9_2
int64_t x9_3 = x19[2]
x19[2] = x0_1[2]
x0_1[2] = x9_3
int64_t x9_4 = x19[3]
x19[3] = x0_1[3]
x0_1[3] = x9_4
x19[4].d = x0_1[4].d
x0_1[4].d = x19[4].d
return 0
