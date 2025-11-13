// 函数: _Z12Prizes_Setup8DomWhere
// 地址: 0xa5d6b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_30
__builtin_memcpy(&var_30, 
    "\x12\x07\x00\x00\x11\x07\x00\x00\x10\x07\x00\x00\x0f\x07\x00\x00\x0e\x07\x00\x00", 0x14)
ShuffleIntsN(GameRNG(), &var_30, 5, 5)
return AddPileCards(zx.q(arg1), &var_30, 5)
