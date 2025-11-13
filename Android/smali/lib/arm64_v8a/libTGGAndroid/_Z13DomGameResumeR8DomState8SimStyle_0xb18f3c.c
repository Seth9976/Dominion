// 函数: _Z13DomGameResumeR8DomState8SimStyle
// 地址: 0xb18f3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x150c) = arg2
co_resume(arg1 + 0x60d20)

if (*(arg1 + 0x1a28) == 0)
    return zx.q((zx.d(*(arg1 + 0x1a0c)) != 0 ? 1 : 0) << 1)

return 1
