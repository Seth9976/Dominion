// 函数: _ZN5Botan5CPUID10CPUID_DataC1Ev
// 地址: 0xd06a94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
*entry_x0 = 0
entry_x0[1] = 0
uint64_t x0 = getauxval(0x13)

if (x0 == 0x20 || x0 == 0x80 || x0 == 0x40)
    entry_x0[1] = x0

uint64_t x0_1 = getauxval(0x10)
uint64_t result = getauxval(0x1a)
int64_t x10_1 = entry_x0[1]
int64_t x11_3 = (-0x40001 & ((-0x20001
    & (((result & 1) << 0x10 & 0xfffffffffffffffe) | (x0_1 & 0x1000) u>> 0xc))
    | (1 & result u>> 1) << 0x11)) | (1 & result u>> 2) << 0x12
*entry_x0 = (-0x80001 & x11_3) | (1 & result u>> 3) << 0x13 | 0x8000000000000000

if (x10_1 == 0)
    entry_x0[1] = 0x20

entry_x0[2].d = 0x67452301
return result
