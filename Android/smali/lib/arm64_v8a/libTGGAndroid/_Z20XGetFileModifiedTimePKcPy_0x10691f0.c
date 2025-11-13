// 函数: _Z20XGetFileModifiedTimePKcPy
// 地址: 0x10691f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_90
int32_t x0 = stat(arg1, &var_90)
uint64_t var_38

if (x0 != 0xffffffff)
    *arg2 = var_38
return zx.q(x0 != 0xffffffff ? 1 : 0)
