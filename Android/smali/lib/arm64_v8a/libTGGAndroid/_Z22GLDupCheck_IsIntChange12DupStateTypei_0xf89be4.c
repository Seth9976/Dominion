// 函数: _Z22GLDupCheck_IsIntChange12DupStateTypei
// 地址: 0xf89be4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x9 = *gOpenGLInterface + (zx.q(arg1) << 2) + 0x4020
int32_t x8_2 = *x9

if (x8_2 != arg2)
    *x9 = arg2

return zx.q(x8_2 != arg2 ? 1 : 0)
