// 函数: _Z13SetActiveTurn9PlayerWho
// 地址: 0x9ad168
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* result = GetClient()

if (*(result + 0x75b0) != x19)
    *(result + 0x75b0) = x19

if (*(result + 0x75b4) != x19)
    *(result + 0x75b4) = x19
    result = IsPassAndPlay()
    
    if ((result.d & 1) != 0)
        return NextTurnOverlayShow(GameSpecific_CalcNextTurnStyle()) __tailcall

return result
