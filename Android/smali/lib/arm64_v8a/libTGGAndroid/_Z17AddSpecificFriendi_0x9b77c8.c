// 函数: _Z17AddSpecificFriendi
// 地址: 0x9b77c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20_1 = GetClient() + (sx.q(arg1) << 5)
void* x21 = GetActiveGameSetup() + sx.q(*(gCreateDlg + 0x18)) * 0x22c
*(x21 + 0x5c) = *(x20_1 + 0x38)
AssignName(x21 + 0x4c, XString::operator char const*())
*(x21 + 0x60) = 1
*(x21 + 0x64) = *(x20_1 + 0x2c)
int64_t x8_3 = *(MostRecentFriend() + 0x18)
uint64_t x0_6 = zx.q(*(x20_1 + 0x2c))
*(x20_1 + 0x40) = x8_3 + 1
return GameClientFriendOp(x0_6, 6) __tailcall
