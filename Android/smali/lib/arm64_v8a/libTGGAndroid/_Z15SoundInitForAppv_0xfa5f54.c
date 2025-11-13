// 函数: _Z15SoundInitForAppv
// 地址: 0xfa5f54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gSoundInterface == 0)
    return 

int64_t* x0 = XPooledCalloc(0x38)
__builtin_memset(x0, 0, 0x18)
x0[4] = 0
x0[3].d = 1
*gpSoundGlobals = x0
int64_t x0_1 = XMalloc(0x8000)
*(x0 + 0xc) = 0x100
*x0 = x0_1
x0[4] = "SoundInstances"
x0[3].d = 0xd8ca
uint64_t x8_1 = *gpSoundGlobals
*(x8_1 + 0x28) = 0x3f59999a3f59999a
*(x8_1 + 0x30) = 0x3f800000
jump(*(**gSoundInterface + 0x10))
