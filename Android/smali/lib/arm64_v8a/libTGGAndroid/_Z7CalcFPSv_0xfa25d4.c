// 函数: _Z7CalcFPSv
// 地址: 0xfa25d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = GetGameSystemTime()
int64_t x8 = sx.q(data_2421e58)
*((x8 << 2) + 0x2421e90) = result.d
int32_t x10_1 = data_2421e5c
int32_t x11_1 = x8.d - x10_1 + ((x8.d s< x10_1 ? 1 : 0) << 7)
int32_t x13

x13 = x11_1 s< 3 ? x11_1 : 3

while (*((sx.q(x10_1) << 2) + 0x2421e90) s< result.d - 0xc8)
    int32_t x10_2
    
    if (x10_1 + 1 s< 0)
        x10_2 = x10_1 + 0x80
    else
        x10_2 = x10_1 + 1
    
    bool cond:0_1 = x11_1 s> 3
    x10_1 = x10_1 + 1 - (x10_2 & 0xffffff80)
    x11_1 -= 1
    data_2421e5c = x10_1
    
    if (not(cond:0_1))
        x11_1 = x13 - 1
        break

float v0

if (x11_1 == 0)
    v0 = 0f
else
    v0 =
        float.s(x11_1) / float.s(result.d - *((sx.q(x10_1) << 2) + 0x2421e90)) * float.s(0x447a0000)

int32_t x8_1

if (x8.d + 1 s< 0)
    x8_1 = x8.d + 0x80
else
    x8_1 = x8.d + 1

*(*gpGameData + 0x4c) = v0
data_2421e58 = x8.d + 1 - (x8_1 & 0xffffff80)
return result
