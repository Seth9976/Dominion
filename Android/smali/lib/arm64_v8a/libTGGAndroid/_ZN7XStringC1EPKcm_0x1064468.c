// 函数: _ZN7XStringC1EPKcm
// 地址: 0x1064468
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = &data_793a18
int32_t entry_x2

if (entry_x2 == 0 || zx.d(*arg2) == 0)
    return 

int64_t* x0_1 = XPooledMalloc(entry_x2 + 0x11)
x0_1[1].d = entry_x2
*(x0_1 + 0xc) = entry_x2 + 1
int64_t x21_1 = sx.q(entry_x2)
*x0_1 = 0x1fafafafa
*arg1 = &x0_1[2]
memcpy(&x0_1[2], arg2, x21_1)
*(*arg1 + x21_1) = 0
