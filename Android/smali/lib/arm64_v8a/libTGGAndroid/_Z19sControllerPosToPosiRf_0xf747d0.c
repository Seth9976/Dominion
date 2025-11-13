// 函数: _Z19sControllerPosToPosiRf
// 地址: 0xf747d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = float.s(arg1)

if ((arg1 & 0x80000000) != 0)
    *arg2 = v0 * float.s(0x38000000)
    return 

*arg2 = v0 / float.s(0x46fffe00)
