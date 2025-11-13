// 函数: _ZN6SoLoud6Soloud8getPauseEj
// 地址: 0x1078204
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1
uint64_t x20 = zx.q(entry_x1)
int64_t x19 = arg1
SoLoud::Soloud::lockAudioMutex_internal()
int32_t* x0_1 = SoLoud::Soloud::voiceGroupHandleToArray_internal(x19.d)

if (x0_1 != 0)
    x20 = zx.q(*x0_1)

void* x9_2
int64_t x10_1

if (x20.d != 0)
    x10_1 = x20 & 0xfff
    x9_2 = *(x19 + ((x10_1 - 1) << 3) + 0x98)

int32_t x21

if (x20.d == 0 || x9_2 == 0)
    x21 = 0
else
    x21 = 0
    
    if (x10_1.d != 0 && (*(x9_2 + 8) & 0xfffff) == x20.d u>> 0xc)
        x21 = zx.d(*(*(x19 + (zx.q((x10_1 - 1).d) << 3) + 0x98) + 0x10)) u>> 2 & 1

SoLoud::Soloud::unlockAudioMutex_internal()
return zx.q(x21)
