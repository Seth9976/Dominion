// 函数: _ZN6SoLoud6Soloud7getWaveEv
// 地址: 0x106f8dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x0 = *(entry_x0 + 8)

if (x0 != 0)
    SoLoud::Thread::lockMutex(x0)

if (zx.d(*(entry_x0 + 0x10)) != 0)
    return SoLoud::Soloud::getApproximateVolume(__assert2(
        "..\..\ExternalCode\soloud\src\core\soloud.cpp", 0x902, 
        "void SoLoud::Soloud::lockAudioMutex_internal()", "!mInsideAudioThreadMutex")) __tailcall

void* x8_1 = entry_x0 + 0x21a8
int64_t i_1 = 0x100
int64_t i

do
    i = i_1
    i_1 -= 4
    *(x8_1 + 0x800) = *x8_1
    x8_1 += 0x10
while (i != 4)
void* x0_1 = *(entry_x0 + 8)
*(entry_x0 + 0x10) = 0

if (x0_1 != 0)
    SoLoud::Thread::unlockMutex(x0_1)

return entry_x0 + 0x29a8
