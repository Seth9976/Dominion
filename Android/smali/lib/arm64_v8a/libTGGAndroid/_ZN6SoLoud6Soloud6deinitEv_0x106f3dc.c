// 函数: _ZN6SoLoud6Soloud6deinitEv
// 地址: 0x106f3dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x0 = *(entry_x0 + 8)

if (x0 != 0)
    SoLoud::Thread::lockMutex(x0)

if (zx.d(*(entry_x0 + 0x10)) != 0)
    __assert2("..\..\ExternalCode\soloud\src\core\soloud.cpp", 0x902, 
        "void SoLoud::Soloud::lockAudioMutex_internal()", "!mInsideAudioThreadMutex")
else
    void* x0_1 = *(entry_x0 + 8)
    *(entry_x0 + 0x10) = 0
    
    if (x0_1 != 0)
        SoLoud::Thread::unlockMutex(x0_1)
    
    if (x0_1 == 0 || zx.d(*(entry_x0 + 0x10)) == 0)
        SoLoud::Soloud::stopAll()
        int64_t x8_2 = *(entry_x0 + 0x18)
        
        if (x8_2 != 0)
            x8_2(entry_x0)
        
        void* result = *(entry_x0 + 8)
        *(entry_x0 + 0x18) = 0
        
        if (result != 0)
            result = SoLoud::Thread::destroyMutex(result)
        
        *(entry_x0 + 8) = 0
        return result

__assert2("..\..\ExternalCode\soloud\src\core\soloud.cpp", 0xc5, "void SoLoud::Soloud::deinit()", 
    "!mInsideAudioThreadMutex")
return SoLoud::Soloud::lockAudioMutex_internal() __tailcall
