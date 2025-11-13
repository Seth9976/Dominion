// 函数: _ZTv0_n24_N5Botan13RSA_PublicKeyD1Ev
// 地址: 0xeece3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_2 = arg1 + *(*arg1 - 0x18)
int64_t* x19 = *(x8_2 + 0x10)
*x8_2 = _vtable_for_Botan::RSA_PublicKey + 0x88

if (x19 == 0)
    return 

int64_t x9_1
int32_t i

do
    x9_1 = __ldaxr(&x19[1])
    i = __stlxr(x9_1 - 1, &x19[1])
while (i != 0)

if (x9_1 == 0)
    (*(*x19 + 0x10))(x19)
    return std::__ndk1::__shared_weak_count::__release_weak() __tailcall
