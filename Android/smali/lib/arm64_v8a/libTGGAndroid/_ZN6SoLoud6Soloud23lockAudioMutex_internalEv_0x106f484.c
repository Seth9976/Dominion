// 函数: _ZN6SoLoud6Soloud23lockAudioMutex_internalEv
// 地址: 0x106f484
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* result = *(entry_x0 + 8)

if (result != 0)
    result = SoLoud::Thread::lockMutex(result)

if (zx.d(*(entry_x0 + 0x10)) != 0)
    __assert2("..\..\ExternalCode\soloud\src\core\soloud.cpp", 0x902, 
        "void SoLoud::Soloud::lockAudioMutex_internal()", "!mInsideAudioThreadMutex")
    return SoLoud::Soloud::unlockAudioMutex_internal() __tailcall

*(entry_x0 + 0x10) = 1
return result
