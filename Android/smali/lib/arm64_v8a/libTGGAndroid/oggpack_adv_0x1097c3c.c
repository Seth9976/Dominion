// 函数: oggpack_adv
// 地址: 0x1097c3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = arg1[4]
int64_t x9 = *arg1
int32_t x8 = arg1[1].d + arg2

if (x9 s> x10 - sx.q((x8 + 7) s>> 3))
    arg1[3] = 0
    *arg1 = x10
    arg1[1].d = 1
    return 

uint64_t x11_1

if (x8 s< 0)
    x11_1 = zx.q(x8 + 7)
else
    x11_1 = zx.q(x8)

int64_t x11_2 = (x11_1 & 0xfffffff8) << 0x20 s>> 0x23
int64_t x10_2 = arg1[3] + x11_2
*arg1 = x9 + x11_2
arg1[3] = x10_2
arg1[1].d = x8 & 7
