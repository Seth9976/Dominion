// 函数: _ZN16TGGAudioInstanceD0Ev
// 地址: 0x106ce58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
bool cond:0 = entry_x0[0x132].d s< 1
*entry_x0 = _vtable_for_TGGAudioInstance + 0x10

if (not(cond:0))
    int64_t i = 0
    void* x20_1 = &entry_x0[0x40]
    
    do
        SoundOggReaderClose(x20_1)
        i += 1
        x20_1 += 0x3c8
    while (i s< sx.q(entry_x0[0x132].d))

SoLoud::AudioSourceInstance::~AudioSourceInstance()
return operator delete(entry_x0) __tailcall
