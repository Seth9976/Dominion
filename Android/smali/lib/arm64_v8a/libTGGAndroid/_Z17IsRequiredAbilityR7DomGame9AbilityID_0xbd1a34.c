// 函数: _Z17IsRequiredAbilityR7DomGame9AbilityID
// 地址: 0xbd1a34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x1 = arg2 & 0xffffffff

if ((arg2 & 0x30) != 0)
    return zx.q((zx.d(*(AbilityGetStatic(arg1, x1) + 0xb4)) & 1) == 0 ? 1 : 0)

void* x0_2 = AbilityGetRegistered(arg1, x1)

if (*(x0_2 + 0x4c) == 2 && (zx.d(*(x0_2 + 0x70)) & 1) != 0)
    return 0

return 1
