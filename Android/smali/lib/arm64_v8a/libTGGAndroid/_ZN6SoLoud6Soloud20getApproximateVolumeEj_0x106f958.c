// 函数: _ZN6SoLoud6Soloud20getApproximateVolumeEj
// 地址: 0x106f958
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v8
v8.d = 0f
int32_t entry_x1

if (*(arg1 + 0x20a0) u< entry_x1)
    return 

void* x19_1 = arg1
void* x0 = *(arg1 + 8)

if (x0 != 0)
    SoLoud::Thread::lockMutex(x0)

if (zx.d(*(x19_1 + 0x10)) != 0)
    __assert2("..\..\ExternalCode\soloud\src\core\soloud.cpp", 0x902, 
        "void SoLoud::Soloud::lockAudioMutex_internal()", "!mInsideAudioThreadMutex")
    return SoLoud::Soloud::calcFFT() __tailcall

arg1 = (*(x19_1 + 8)).d
v8.d = *(x19_1 + (zx.q(entry_x1) << 2) + 0x2188)
*(x19_1 + 0x10) = 0

if (arg1 != 0)
    SoLoud::Thread::unlockMutex(arg1)
