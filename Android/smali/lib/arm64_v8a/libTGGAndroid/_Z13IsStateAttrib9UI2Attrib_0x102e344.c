// 函数: _Z13IsStateAttrib9UI2Attrib
// 地址: 0x102e344
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_1 = zx.q(arg1 - 0x64)

if (x8_1.d u> 0x27)
    return 1

return zx.q((0x1ffffffff2 u>> x8_1).d) & 1
