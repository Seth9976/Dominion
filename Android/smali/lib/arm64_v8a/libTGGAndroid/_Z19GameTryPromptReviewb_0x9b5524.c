// 函数: _Z19GameTryPromptReviewb
// 地址: 0x9b5524
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg1.d & 1) == 0)
    return 

int64_t lr
int64_t var_20 = lr
GameProfile* x0 = GetActiveProfile()
int32_t x0_1 = CountTotalWins(x0)
int32_t x8 = *(x0 + 0x4328)
int32_t x8_1

if (x8 s< 0xfffffff6)
    x8_1 = 5
else
    x8_1 = x8 + 0xf

if (x0_1 s>= x8_1)
    GameCenterTryRequestReview()
    *(x0 + 0x4328) = x0_1

return SaveProfiles() __tailcall
