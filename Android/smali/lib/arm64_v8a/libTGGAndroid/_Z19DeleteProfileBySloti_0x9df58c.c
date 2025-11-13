// 函数: _Z19DeleteProfileBySloti
// 地址: 0x9df58c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(*(gGameSettings + 0x10) + 0x1f2e0)
int64_t result = GameProfile::~GameProfile()
void* x8_2 = *(gGameSettings + 0x10)
int32_t* x9_2 = x8_2 + 0x1f2e0
uint64_t x10_1 = zx.q(*x9_2 - 1)

if (x10_1.d s> arg1)
    int64_t x21_1 = sx.q(arg1)
    int64_t x19_1 = muls.dp.d(arg1, 0x7cb8)
    
    do
        x21_1 += 1
        result = GameProfile::operator=(x8_2 + x19_1)
        x8_2 = *(gGameSettings + 0x10)
        x19_1 += 0x7cb8
        x9_2 = x8_2 + 0x1f2e0
        x10_1 = sx.q(*x9_2) - 1
    while (x21_1 s< x10_1)

*x9_2 = x10_1.d
return result
