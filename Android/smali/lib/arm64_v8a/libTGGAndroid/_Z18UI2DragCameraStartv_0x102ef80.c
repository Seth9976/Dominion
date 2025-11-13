// 函数: _Z18UI2DragCameraStartv
// 地址: 0x102ef80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(gUI2Editor + 0x88068) = 1
*(gUI2Editor + 0x8806c) = 1
int64_t var_18
int64_t result = GetCursorPosition(&var_18)
*(gUI2Editor + 0x88070) = var_18
*(gUI2Editor + 0x88080) = 0
*(gUI2Editor + 0x88078) = *(gUI2Editor + 0x88070)
return result
