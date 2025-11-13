// 函数: _Z9MusicPlayP6XAssetS0_
// 地址: 0x9b43c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (SoundGetAssetPtrHandle(data_11cd560) == arg1)
    if ((SoundIsPlaying(arg1) & 1) == 0)
        data_11cd560 = SoundPlayMusicFadeIn(arg1, float.s(0x3e4ccccd), 0f)
else
    SoundFadeOutHandle(data_11cd560, fconvert.s(2f))
    
    if (arg1 != 0)
        data_11cd560 = SoundPlayMusicFadeIn(arg1, fconvert.s(10f), 0f)

int64_t result = SoundGetAssetPtrHandle(data_11cd564)

if (result != arg2)
    result = SoundFadeOutHandle(data_11cd564, float.s(0x3e99999a))
    
    if (arg2 != 0)
        result = SoundPlayMusicFadeIn(arg2, float.s(0x3e4ccccd), 0f)
        data_11cd564 = result.d

return result
