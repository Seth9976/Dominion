// 函数: _ZN6SoLoud6Soloud7getInfoEjj
// 地址: 0x1077db0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = zx.q(arg2)
int64_t x19 = arg1
SoLoud::Soloud::lockAudioMutex_internal()
int32_t* x0_1 = SoLoud::Soloud::voiceGroupHandleToArray_internal(x19.d)

if (x0_1 != 0)
    x21 = zx.q(*x0_1)

int128_t v8
v8.d = 0f

if (x21.d != 0)
    int64_t x10_1 = x21 & 0xfff
    void* x9_2 = *(x19 + ((x10_1 - 1) << 3) + 0x98)
    
    if (x9_2 != 0 && x10_1.d != 0 && (*(x9_2 + 8) & 0xfffff) == x21.d u>> 0xc)
        int64_t* x0_2 = *(x19 + (zx.q((x10_1 - 1).d) << 3) + 0x98)
        int32_t entry_x2
        (*(*x0_2 + 0x30))(x0_2, zx.q(entry_x2))

return SoLoud::Soloud::unlockAudioMutex_internal()
