// 函数: _Z28RollKingdom_AddRequiredCardsRK14DomSetupConfig
// 地址: 0xbf9f44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

for (int64_t i = 0; i != 0x200; i += 0x10)
    void* x8_1 = arg1 + i
    uint64_t x0 = zx.q(*(x8_1 + 0x9c8))
    
    if (x0.d == 0)
        break
    
    if (*(x8_1 + 0x9d0) != 0)
        RollKingdom_AddForcedPiles(x0, x8_1 + 0x9d0)

int32_t x10_1 = *(arg1 + 0xbcc)
int32_t x8_6 =
    *(arg1 + 0xbd8) + *(arg1 + 0xbd0) + *(arg1 + 0xbe0) + *(arg1 + 0xbe8) + *(arg1 + 0xbf0)
int32_t x8_7

x8_7 = x10_1 s> x8_6 ? x10_1 : x8_6

int32_t x20

x20 = x8_7 s< 4 ? x8_7 : 4

RollKingdom_AddForcedLandscapes(0x400, arg1 + 0xbd0, x20)
RollKingdom_AddForcedLandscapes(0x20000000, arg1 + 0xbd8, x20)
RollKingdom_AddForcedLandscapes(0x8000000, arg1 + 0xbe0, x20)
RollKingdom_AddForcedLandscapes(0x10000000, arg1 + 0xbe8, x20)
RollKingdom_AddForcedLandscapes(0x10000000000, arg1 + 0xbf0, x20)

if (zx.d(*(arg1 + 0xbf8)) != 0)
    RollKingdom_AddForcedLandscapes(0x4000000000, V2I1, 4)

if (zx.d(*(arg1 + 0xbf9)) != 0)
    RollKingdom_AddForcedLandscapes(0x80000000000, V2I1, 4)

RollKingdom_AddForcedLandscapes(0, arg1 + 0xbc8, x20)
int128_t var_60
__builtin_memcpy(&var_60, 
    "\x01\x00\x00\x00\x08\x00\x00\x00\x10\x00\x00\x00\x20\x00\x00\x00\x40\x00\x00\x00", 0x14)
return RollKingdom_AddRequiredModiferCards(arg1, &var_60, 5)
