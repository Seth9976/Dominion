// 函数: _ZN16TGGAudioInstance13AdvanceSourceEv
// 地址: 0x106d2c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if ((zx.d(*(entry_x0 + 0x12)) & 2) != 0)
    int32_t x0_1 = SoundOggReadFrameFloat(entry_x0 + sx.q(*(entry_x0 + 0x998)) * 0x3c8 + 0x200, 
        entry_x0 + 0x9a8)
    *(entry_x0 + 0x9a4) = x0_1
    *(entry_x0 + 0x9a0) = 0
    
    if (x0_1 s> 0)
        return 0

if (*(SoundGetDef(*(*(entry_x0 + 0x1f0) + 0x98)) + 0x18) != 1)
    int32_t x8_7 = *(entry_x0 + 0x10)
    
    if ((x8_7 & 1) == 0)
        return 1
    
    if ((x8_7 & 0x20000) != 0)
        SoundOggRawSeek(entry_x0 + sx.q(*(entry_x0 + 0x998)) * 0x3c8 + 0x200, 0)
        *(entry_x0 + 0x9a4) = 0
else
    int64_t x8_6 = sx.q(*(entry_x0 + 0x998))
    
    if (x8_6.d == 0)
        *(entry_x0 + 0x9a0) = 0
        *(entry_x0 + 0x998) = 1
        return 0
    
    if ((zx.d(*(entry_x0 + 0x12)) & 2) != 0)
        SoundOggRawSeek(entry_x0 + x8_6 * 0x3c8 + 0x200, 0)
        *(entry_x0 + 0x9a4) = 0

*(entry_x0 + 0x9a0) = 0
return 0
