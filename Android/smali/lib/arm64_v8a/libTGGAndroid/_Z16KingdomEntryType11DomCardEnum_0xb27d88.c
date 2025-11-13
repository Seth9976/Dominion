// 函数: _Z16KingdomEntryType11DomCardEnum
// 地址: 0xb27d88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(DomDefGet(arg1, 0x18) + 0xc8)
int32_t x9

x9 = x8 != 0x4000000000000 ? 3 : 2

if ((x8 & 0x4000000000000) != 0)
    return zx.q(x9)

return 1
