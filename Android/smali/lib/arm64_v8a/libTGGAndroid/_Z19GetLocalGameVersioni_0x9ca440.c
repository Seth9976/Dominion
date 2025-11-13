// 函数: _Z19GetLocalGameVersioni
// 地址: 0x9ca440
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()

if (*(x0 + 0x63d8) != 1 || *(x0 + 0x63dc) != arg1)
    *(x0 + 0x63d8) = 1
    *(x0 + 0x63dc) = arg1
    LocalGameLoadSetup(x0 + 0x63d8, x0 + 0x63e0)

return zx.q(*(x0 + 0x6408))
