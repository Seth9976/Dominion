// 函数: _Z23ServerPageRangeContains10ServerPageS_i
// 地址: 0x9be794
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 == 0xffffffff)
    return 1

return zx.q(arg1 << 7 s<= arg3 ? 1 : 0) & zx.q((0x7f | (0x1ffffff & arg1) << 7) s>= arg3 ? 1 : 0)
