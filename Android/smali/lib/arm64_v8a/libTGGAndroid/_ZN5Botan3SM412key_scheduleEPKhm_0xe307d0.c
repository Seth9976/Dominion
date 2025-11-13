// 函数: _ZN5Botan3SM412key_scheduleEPKhm
// 地址: 0xe307d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = Botan::allocate_memory(4, 4)
int32_t temp0 = _byteswap(*arg2 ^ 0xc6bab1a3)
int32_t temp0_1 = _byteswap(*(arg2 + 4) ^ 0x5033aa56)
*x0 = temp0
x0[1] = temp0_1
int32_t temp0_2 = _byteswap(*(arg2 + 8) ^ 0x97917d67)
int32_t temp0_3 = _byteswap(*(arg2 + 0xc) ^ 0xdc2270b2)
x0[2] = temp0_2
x0[3] = temp0_3
int64_t x8_10 = *(arg1 + 8)
int64_t x10_2 = *(arg1 + 0x10) - x8_10

if (x10_2 s>> 2 u<= 0x1f)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&arg1[8])
else if (x10_2 != 0x80)
    *(arg1 + 0x10) = x8_10 + 0x80

int64_t x10_3 = 0
bool cond:0_1

do
    uint64_t x11_6 = zx.q(x0[zx.q(x10_3.d + 2) & 3]) ^ zx.q(x0[(x10_3 + 1) & 3])
        ^ zx.q(x0[zx.q(x10_3.d - 1) & 3]) ^ zx.q(*(&data_83af18 + (x10_3 << 2)))
    int32_t x12_7 = (0xff00ffff & zx.d(*(&data_854440 + (x11_6 u>> 0x18))) << 0x18)
        | zx.d(*(&data_854440 + (x11_6 u>> 0x10 & 0xff))) << 0x10
    int32_t x16_5 = (0xffff00ff & x12_7) | zx.d(*(&data_854440 + (x11_6 u>> 8 & 0xff))) << 8
    int32_t x15_5 = x16_5 | zx.d(*(&data_854440 + (x11_6 & 0xff)))
    int32_t x11_12 = x15_5 ^ x0[x10_3 & 3] ^ ((x15_5 << 0x20 | x12_7) u>> 0x13).d
        ^ ((x15_5 << 0x20 | x16_5) u>> 9).d
    x0[x10_3 & 3] = x11_12
    cond:0_1 = x10_3 != 0x1f
    (*(arg1 + 8))[x10_3] = x11_12
    x10_3 += 1
while (cond:0_1)
return Botan::deallocate_memory(x0, 4, 4)
