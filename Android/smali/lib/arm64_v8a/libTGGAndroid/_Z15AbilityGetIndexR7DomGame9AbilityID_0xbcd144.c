// 函数: _Z15AbilityGetIndexR7DomGame9AbilityID
// 地址: 0xbcd144
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x1 = arg2 & 0xffffffff

if ((arg2 & 0x30) == 0)
    return zx.q(*(AbilityGetRegistered(arg1, x1) + 0x94))

return zx.q(*(AbilityGetStatic(arg1, x1) + 0xb8))
