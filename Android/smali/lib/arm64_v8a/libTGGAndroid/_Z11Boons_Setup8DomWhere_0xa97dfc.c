// 函数: _Z11Boons_Setup8DomWhere
// 地址: 0xa97dfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_40
__builtin_memcpy(&var_40, 
    "\x31\x0d\x00\x00\x32\x0d\x00\x00\x33\x0d\x00\x00\x34\x0d\x00\x00\x35\x0d\x00\x00\x36\x0d\x00\x00\x"
"37\x0d\x00\x00\x38\x0d\x00\x00\x39\x0d\x00\x00\x3a\x0d\x00\x00\x3b\x0d\x00\x00\x3c\x0d\x00\x
        00", 
    0x30)
ShuffleIntsN(GameRNG(), &var_40, 0xc, 0xc)
return AddPileCards(zx.q(arg1), &var_40, 0xc)
