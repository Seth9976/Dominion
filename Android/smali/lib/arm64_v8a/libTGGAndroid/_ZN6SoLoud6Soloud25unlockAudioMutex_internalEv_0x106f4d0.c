// 函数: _ZN6SoLoud6Soloud25unlockAudioMutex_internalEv
// 地址: 0x106f4d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (zx.d(*(entry_x0 + 0x10)) == 0)
    uint32_t x0_2
    uint32_t x1_1
    uint32_t x2_1
    uint32_t x3_1
    uint32_t x4_1
    x0_2, x1_1, x2_1, x3_1, x4_1 = __assert2("..\..\ExternalCode\soloud\src\core\soloud.cpp", 
        0x908, "void SoLoud::Soloud::unlockAudioMutex_internal()", "mInsideAudioThreadMutex")
    return SoLoud::Soloud::init(x0_2, x1_1, x2_1, x3_1, x4_1) __tailcall

void* x8_1 = *(entry_x0 + 8)
*(entry_x0 + 0x10) = 0

if (x8_1 == 0)
    return 

return SoLoud::Thread::unlockMutex(x8_1) __tailcall
