// 函数: _ZThn8_N5Botan7SipHash12key_scheduleEPKhm
// 地址: 0xe2510c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19_1 = arg1 + 0x18
int64_t* x8 = *x19_1
int64_t x21 = *arg2
int64_t x20 = arg2[1]
void* x9_1 = x19_1[1] - x8

if (x9_1 s>> 3 u<= 3)
    std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::__append(x19_1)
    x8 = *x19_1
else if (x9_1 != 0x20)
    x19_1[1] = &x8[4]

*x8 = x21 ^ 0x736f6d6570736575
*(*x19_1 + 8) = x20 ^ 0x646f72616e646f6d
*(*x19_1 + 0x10) = x21 ^ 0x6c7967656e657261
*(*x19_1 + 0x18) = x20 ^ 0x7465646279746573
