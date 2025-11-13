// 函数: _Z15IsAlreadyInGamei
// 地址: 0x9b789c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = GetClient()
void* x0_1 = GetActiveGameSetup()

if ((*(x0_1 + 0x60) != 1 || *(x0_1 + 0x64) != *(x0 + (sx.q(arg1) << 5) + 0x2c))
        && (*(x0_1 + 0x28c) != 1 || *(x0_1 + 0x290) != *(x0 + (sx.q(arg1) << 5) + 0x2c))
        && (*(x0_1 + 0x4b8) != 1 || *(x0_1 + 0x4bc) != *(x0 + (sx.q(arg1) << 5) + 0x2c))
        && (*(x0_1 + 0x6e4) != 1 || *(x0_1 + 0x6e8) != *(x0 + (sx.q(arg1) << 5) + 0x2c))
        && (*(x0_1 + 0x910) != 1 || *(x0_1 + 0x914) != *(x0 + (sx.q(arg1) << 5) + 0x2c))
        && (*(x0_1 + 0xb3c) != 1 || *(x0_1 + 0xb40) != *(x0 + (sx.q(arg1) << 5) + 0x2c))
        && (*(x0_1 + 0xd68) != 1 || *(x0_1 + 0xd6c) != *(x0 + (sx.q(arg1) << 5) + 0x2c))
        && (*(x0_1 + 0xf94) != 1 || *(x0_1 + 0xf98) != *(x0 + (sx.q(arg1) << 5) + 0x2c)))
    return 0

return 1
