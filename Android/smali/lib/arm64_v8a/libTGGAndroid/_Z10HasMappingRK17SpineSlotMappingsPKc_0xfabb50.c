// 函数: _Z10HasMappingRK17SpineSlotMappingsPKc
// 地址: 0xfabb50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = zx.q(*(arg1 + 8))

if (x20.d s< 1)
    return 0

int64_t* x21 = *arg1

if (strcmp(*x21) == 0)
    return 1

void* x21_1 = &x21[2]
int64_t x8 = 1
int64_t x22_1
int32_t i

do
    x22_1 = x8
    
    if (x20 == x8)
        break
    
    int64_t x0_2 = *x21_1
    x21_1 += 0x10
    i = strcmp(x0_2, arg2)
    x8 = x22_1 + 1
while (i != 0)
return zx.q(x22_1 u< x20 ? 1 : 0)
