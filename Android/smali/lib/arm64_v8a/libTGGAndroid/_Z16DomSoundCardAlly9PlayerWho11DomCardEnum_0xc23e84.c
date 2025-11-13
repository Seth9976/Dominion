// 函数: _Z16DomSoundCardAlly9PlayerWho11DomCardEnum
// 地址: 0xc23e84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = DomDefGet(zx.q(arg2), zx.q(DomCurrentGameVersion()))
int64_t* x8 = *(result + 0x70)

if (x8 == 0)
    return result

return SoundPlay(*x8) __tailcall
