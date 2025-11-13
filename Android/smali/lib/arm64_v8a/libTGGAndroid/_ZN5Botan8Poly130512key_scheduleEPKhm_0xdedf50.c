// 函数: _ZN5Botan8Poly130512key_scheduleEPKhm
// 地址: 0xdedf50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = &arg1[0x28]
int64_t x8 = *result
int64_t x9 = *(result + 8)
*(result + 0x18) = 0
int64_t x9_1 = x9 - x8

if (x9_1 u<= 0xf)
    result = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(result)
else if (x9_1 != 0x10)
    *(arg1 + 0x30) = x8 + 0x10

int64_t* x8_2 = *(arg1 + 0x10)
void* x9_3 = *(arg1 + 0x18) - x8_2

if (x9_3 s>> 3 u<= 7)
    result =
        std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::__append(&arg1[0x10])
    x8_2 = *(arg1 + 0x10)
else if (x9_3 != 0x40)
    *(arg1 + 0x18) = &x8_2[8]

int64_t x9_5 = *arg2
int64_t x10_1 = *(arg2 + 8)
*x8_2 = x9_5 & 0xffc0fffffff
*(*(arg1 + 0x10) + 8) = (x10_1 << 0x40 | x9_5) u>> 0x2c & 0xfffffc0ffff
*(*(arg1 + 0x10) + 0x10) = x10_1 u>> 0x18 & 0xfffffc0ffffffc0f
*(*(arg1 + 0x10) + 0x18) = 0
*(*(arg1 + 0x10) + 0x20) = 0
*(*(arg1 + 0x10) + 0x28) = 0
*(*(arg1 + 0x10) + 0x30) = *(arg2 + 0x10)
*(*(arg1 + 0x10) + 0x38) = *(arg2 + 0x18)
return result
