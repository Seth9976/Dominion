// 函数: _ZN16TGGAudioInstance6rewindEv
// 地址: 0x106d25c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (*(entry_x0 + 0x990) s>= 1)
    int64_t i = 0
    void* x20_1 = entry_x0 + 0x200
    
    do
        SoundOggRawSeek(x20_1, 0)
        i += 1
        x20_1 += 0x3c8
    while (i s< sx.q(*(entry_x0 + 0x990)))

int32_t x8_2 = *(entry_x0 + 0x10)
*(entry_x0 + 0x998) = 0
*(entry_x0 + 0x9a0) = 0
*(entry_x0 + 0x9b0) = 0
*(entry_x0 + 0x60) = 0
*(entry_x0 + 0x10) = x8_2 & 0xfffeffff
return 0
