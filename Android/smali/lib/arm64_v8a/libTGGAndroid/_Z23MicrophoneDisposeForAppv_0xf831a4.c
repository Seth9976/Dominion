// 函数: _Z23MicrophoneDisposeForAppv
// 地址: 0xf831a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = *gMicrophoneData

if (result != 0)
    (*(*result + 0x20))()
    result = *gMicrophoneData
    
    if (result != 0)
        result = (*(*result + 8))()
    
    *gMicrophoneData = 0

return result
