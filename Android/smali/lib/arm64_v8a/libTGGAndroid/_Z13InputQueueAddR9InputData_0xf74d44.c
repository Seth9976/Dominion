// 函数: _Z13InputQueueAddR9InputData
// 地址: 0xf74d44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1

if (x8 - 0xd u<= 0xb && (0xaa3 u>> (x8 - 0xd) & 1) != 0)
    *(*gInputGameGlobals + 0x44) = *(&data_8658c4 + (sx.q(x8 - 0xd) << 2))
    x8 = *arg1

if (zx.d(*(*gpGameData + 0x3e)) != 0 && x8 == 1)
    int32_t x8_3 = *(arg1 + 4) - 0xf708
    
    if (x8_3 u<= 6 && (1 << x8_3 & 0x61) != 0)
        return InputHandle(arg1) __tailcall

uint64_t x21 = *gInputGameGlobals
int128_t* x0_2
int128_t v0_1
x0_2, v0_1 = XPooledCalloc(0x38)
int64_t x8_6 = *(arg1 + 0x10)
*x0_2 = *arg1
x0_2[1].q = x8_6
int64_t result = XString::XString(x0_2 + 0x18)
char x8_7 = *(arg1 + 0x20)
*(x0_2 + 0x28) = 0
x0_2[2].b = x8_7
x0_2[3].q = *(x21 + 0x28)
void* x8_9 = *(x21 + 0x28)
int128_t** x8_10

if (x8_9 == 0)
    x8_10 = x21 + 0x20
else
    x8_10 = x8_9 + 0x28

*x8_10 = x0_2
int32_t x8_11 = *(x21 + 0x30)
*(x21 + 0x28) = x0_2
*(x21 + 0x30) = x8_11 + 1
return result
