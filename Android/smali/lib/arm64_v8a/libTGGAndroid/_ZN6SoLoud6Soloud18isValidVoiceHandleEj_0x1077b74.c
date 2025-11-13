// 函数: _ZN6SoLoud6Soloud18isValidVoiceHandleEj
// 地址: 0x1077b74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 u> 0xffffefff)
    return 0

uint64_t x20 = zx.q(entry_x1)
int64_t x19 = arg1
SoLoud::Soloud::lockAudioMutex_internal()
int32_t* x0_2 = SoLoud::Soloud::voiceGroupHandleToArray_internal(x19.d)

if (x0_2 != 0)
    x20 = zx.q(*x0_2)

void* x8_2
int64_t x9_1

if (x20.d != 0)
    x9_1 = x20 & 0xfff
    x8_2 = *(x19 + (x9_1 << 3) + 0x90)

int32_t x20_1

if (x20.d == 0 || x8_2 == 0 || x9_1.d == 0 || (*(x8_2 + 8) & 0xfffff) != x20.d u>> 0xc)
    x20_1 = 0
else
    x20_1 = 1

SoLoud::Soloud::unlockAudioMutex_internal()
return zx.q(x20_1)
