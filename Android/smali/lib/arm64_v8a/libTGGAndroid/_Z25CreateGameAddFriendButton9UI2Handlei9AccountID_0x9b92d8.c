// 函数: _Z25CreateGameAddFriendButton9UI2Handlei9AccountID
// 地址: 0x9b92d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg3
int32_t x20 = arg1.d
UI2SetState(arg1, &data_11ceb28, 0xffffffff, 0)
void* x0_1 = LookupFriend(zx.q(x21))
*(gCreateDlg + (sx.q(arg2) << 2) + 0x1c) = x21
UI2SetText(zx.q(x20), &data_11ce888, x0_1 + 8, arg2)
void* result = GetActiveGameSetup()
int32_t x8_1 = *(x0_1 + 4)

if ((*(result + 0x60) != 1 || *(result + 0x64) != x8_1)
        && (*(result + 0x28c) != 1 || *(result + 0x290) != x8_1)
        && (*(result + 0x4b8) != 1 || *(result + 0x4bc) != x8_1)
        && (*(result + 0x6e4) != 1 || *(result + 0x6e8) != x8_1)
        && (*(result + 0x910) != 1 || *(result + 0x914) != x8_1)
        && (*(result + 0xb3c) != 1 || *(result + 0xb40) != x8_1)
        && (*(result + 0xd68) != 1 || *(result + 0xd6c) != x8_1)
        && (*(result + 0xf94) != 1 || *(result + 0xf98) != x8_1))
    return result

return UI2SetState(zx.q(x20), &data_11ceac8, arg2, 0) __tailcall
