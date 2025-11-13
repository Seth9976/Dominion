// 函数: _ZN5Botan5CPUID10CPUID_Data19detect_cpu_featuresEPm
// 地址: 0xd06b2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = getauxval(0x13)

if (x0 == 0x20 || x0 == 0x80 || x0 == 0x40)
    *arg1 = x0

uint64_t x19_1 = getauxval(0x10) u>> 0xc & 1
uint64_t x0_2 = getauxval(0x1a)
int64_t result = (-0x80001 & ((-0x40001
    & ((-0x20001 & ((-0x10001 & x19_1) | (1 & x0_2) << 0x10)) | (1 & x0_2 u>> 1) << 0x11))
    | (1 & x0_2 u>> 2) << 0x12)) | (1 & x0_2 u>> 3) << 0x13
return result
