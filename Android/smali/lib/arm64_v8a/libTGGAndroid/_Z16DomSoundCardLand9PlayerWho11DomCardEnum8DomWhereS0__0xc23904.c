// 函数: _Z16DomSoundCardLand9PlayerWho11DomCardEnum8DomWhereS0_
// 地址: 0xc23904
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 == 2)
    return SoundPlay(*SOUND_SOUND_LOAD_GAME_FX_TRASH) __tailcall

if (arg3 != 0x3e9)
    return 

int64_t* x8 = *(DomDefGet(zx.q(arg2), zx.q(DomCurrentGameVersion())) + 0x70)
int64_t* x8_1

x8_1 = x8 == 0 ? SOUND_SOUND_LOAD_GAME_FX_LAND_CARD : x8

return SoundPlay(*x8_1) __tailcall
