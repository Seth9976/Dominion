// 函数: _ZN5Botan13GOST_28147_8912key_scheduleEPKhm
// 地址: 0xd841f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19_1 = &arg1[0x20]
int32_t* x8 = *x19_1
void* x9_1 = *(x19_1 + 8) - x8

if (x9_1 s>> 2 u<= 7)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(x19_1)
    x8 = *x19_1
else if (x9_1 != 0x20)
    *(arg1 + 0x28) = &x8[8]

*x8 = *arg2
*(*x19_1 + 4) = *(arg2 + 4)
*(*x19_1 + 8) = *(arg2 + 8)
*(*x19_1 + 0xc) = *(arg2 + 0xc)
*(*x19_1 + 0x10) = *(arg2 + 0x10)
*(*x19_1 + 0x14) = *(arg2 + 0x14)
*(*x19_1 + 0x18) = *(arg2 + 0x18)
*(*x19_1 + 0x1c) = *(arg2 + 0x1c)
