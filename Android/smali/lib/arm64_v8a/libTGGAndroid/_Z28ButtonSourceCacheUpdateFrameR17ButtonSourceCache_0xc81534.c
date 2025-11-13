// 函数: _Z28ButtonSourceCacheUpdateFrameR17ButtonSourceCache
// 地址: 0xc81534
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = MainWindowHasFocus()

if ((x0.d & 1) == 0)
    *arg1 = 0
    *(arg1 + 0xe) = 0
    *(arg1 + 0x2b) = 0
    *(arg1 + 4) = 0
    return x0

if ((AnyTouchDown() & 1) == 0 && (InputIsButtonDown(0) & 1) == 0)
    *arg1 = 0

int64_t x0_3 = InputIsButtonDown(1)

if ((x0_3.d & 1) == 0)
    *(arg1 + 1) = 0

return x0_3
