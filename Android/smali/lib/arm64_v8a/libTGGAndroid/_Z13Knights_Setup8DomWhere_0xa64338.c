// 函数: _Z13Knights_Setup8DomWhere
// 地址: 0xa64338
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_40
__builtin_memcpy(&var_40, 
    "\x2f\x09\x00\x00\x30\x09\x00\x00\x31\x09\x00\x00\x32\x09\x00\x00\x33\x09\x00\x00\x34\x09\x00\x00\x"
"35\x09\x00\x00\x36\x09\x00\x00\x37\x09\x00\x00\x38\x09\x00\x00", 
    0x28)

if (*(*(DomGetContext() + 8) + 0xd48) != 0x73)
    ShuffleIntsN(GameRNG(), &var_40, 0xa, 0xa)

return AddPileCards(zx.q(arg1), &var_40, 0xa)
