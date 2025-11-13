// 函数: _Z8Delusionv
// 地址: 0xa97878
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = HasState(0xd4b)

if ((result.d & 1) == 0)
    result = HasState(0xd4c)
    
    if ((result.d & 1) == 0)
        return TakeState(0xd4b) __tailcall

return result
