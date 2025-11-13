// 函数: _ZN5Botan5CPUID10initializeEv
// 地址: 0xd06914
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = getauxval(0x13)
uint64_t x19 = x0

if (x0 != 0x20 && x19 != 0x80 && x19 != 0x40)
    x19 = 0

uint64_t x0_1 = getauxval(0x10)
uint64_t x0_2 = getauxval(0x1a)
int64_t x11_3 = (-0x40001 & ((-0x20001
    & (((x0_2 & 1) << 0x10 & 0xfffffffffffffffe) | (x0_1 & 0x1000) u>> 0xc))
    | (1 & x0_2 u>> 1) << 0x11)) | (1 & x0_2 u>> 2) << 0x12
uint64_t x19_1

x19_1 = x19 == 0 ? 0x20 : x19

int64_t* result = Botan::CPUID::state()
*result = (-0x80001 & x11_3) | (1 & x0_2 u>> 3) << 0x13 | 0x8000000000000000
result[1] = x19_1
result[2].d = 0x67452301
return result
