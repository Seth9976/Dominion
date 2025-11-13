// 函数: _Z11Hexes_Setup8DomWhere
// 地址: 0xa97e50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_40
__builtin_memcpy(&var_40, 
    "\x3e\x0d\x00\x00\x3f\x0d\x00\x00\x40\x0d\x00\x00\x41\x0d\x00\x00\x42\x0d\x00\x00\x43\x0d\x00\x00\x"
"44\x0d\x00\x00\x45\x0d\x00\x00\x46\x0d\x00\x00\x47\x0d\x00\x00\x48\x0d\x00\x00\x49\x0d\x00\x
        00", 
    0x30)
ShuffleIntsN(GameRNG(), &var_40, 0xc, 0xc)
return AddPileCards(zx.q(arg1), &var_40, 0xc)
