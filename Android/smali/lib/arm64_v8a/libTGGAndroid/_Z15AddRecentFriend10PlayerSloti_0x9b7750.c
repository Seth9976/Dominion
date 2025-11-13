// 函数: _Z15AddRecentFriend10PlayerSloti
// 地址: 0x9b7750
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = GetActiveGameSetup()
void* x0_2 = LookupFriend(zx.q(*(gCreateDlg + (sx.q(arg2) << 2) + 0x1c)))
void* x20_1 = x0 + mulu.dp.d(arg1, 0x22c)
*(x20_1 + 0x5c) = *(x0_2 + 0x10)
int64_t result = AssignName(x20_1 + 0x4c, XString::operator char const*())
*(x20_1 + 0x60) = 1
*(x20_1 + 0x64) = *(x0_2 + 4)
return result
