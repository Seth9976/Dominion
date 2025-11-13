// 函数: _Z13Rewards_Setup8DomWhere
// 地址: 0xa5d630
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_30
__builtin_memcpy(&var_30, 
    "\x1e\x07\x00\x00\x1c\x07\x00\x00\x1b\x07\x00\x00\x1a\x07\x00\x00\x1d\x07\x00\x00\x19\x07\x00\x00", 
    0x18)
int128_t* x1
int32_t x2

if (*(*(DomGetContext() + 8) + 0xd40) s< 3)
    x1 = &var_30
    x2 = 6
else
    int128_t var_f0
    x1 = &var_f0
    x2 = 0xc
    __builtin_memcpy(&var_f0, 
        "\x1e\x07\x00\x00\x1e\x07\x00\x00\x1c\x07\x00\x00\x1c\x07\x00\x00\x1b\x07\x00\x00\x1b\x07\x00\x"
    "00\x1a\x07\x00\x00\x1a\x07\x00\x00\x1d\x07\x00\x00\x1d\x07\x00\x00\x19\x07\x00\x00\x19\x07\x00"
    "00", 
        0x30)

return AddPileCards(zx.q(arg1), x1, x2)
