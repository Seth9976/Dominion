// 函数: _Z15XGetMachineTimev
// 地址: 0x1069260
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct timespec tp
clock_gettime(1, &tp)
return tp.tv_sec * 0xf4240 + tp.tv_nsec u/ 0x3e8
