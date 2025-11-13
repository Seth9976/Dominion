// 函数: _ZN5Botan9TripleDES12key_scheduleEPKhm
// 地址: 0xd0e8f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *(arg1 + 8)
void* x9_1 = *(arg1 + 0x10) - x0
int128_t v0
int128_t v2
int128_t v3

if (x9_1 s>> 2 u<= 0x5f)
    int128_t v1
    v0, v1, v2, v3 =
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[8])
    x0 = *(arg1 + 8)
else if (x9_1 != 0x180)
    *(arg1 + 0x10) = x0 + 0x180

sub_d0d684(x0, arg2)
sub_d0d684(*(arg1 + 8) + 0x80, arg2 + 8)
int128_t* x8_2 = *(arg1 + 8)
int64_t entry_x2

if (entry_x2 == 0x18)
    return sub_d0d684(&x8_2[0x10], arg2 + 0x10) __tailcall

v0 = x8_2[3]
v3 = *x8_2
v2 = x8_2[1]
x8_2[0x12] = x8_2[2]
x8_2[0x13] = v0
x8_2[0x10] = v3
x8_2[0x11] = v2
v0 = x8_2[7]
v3 = x8_2[4]
v2 = x8_2[5]
x8_2[0x16] = x8_2[6]
x8_2[0x17] = v0
x8_2[0x14] = v3
x8_2[0x15] = v2
return &x8_2[0x10]
