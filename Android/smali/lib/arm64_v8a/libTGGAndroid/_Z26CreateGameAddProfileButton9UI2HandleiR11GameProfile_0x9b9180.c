// 函数: _Z26CreateGameAddProfileButton9UI2HandleiR11GameProfile
// 地址: 0x9b9180
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1.d
UI2SetState(arg1, &data_11ceb10, 0xffffffff, 0)
*(gCreateDlg + (sx.q(arg2) << 2) + 0x1c) = *(arg3 + 0x4320)
UI2SetText(zx.q(x20), &data_11ce888, arg3, arg2)
void* result = GetActiveGameSetup()
int32_t x8_1 = *(arg3 + 0x4320)

if ((*(result + 0x60) != 0x3e8 || *(result + 0x64) != x8_1)
        && (*(result + 0x28c) != 0x3e8 || *(result + 0x290) != x8_1)
        && (*(result + 0x4b8) != 0x3e8 || *(result + 0x4bc) != x8_1)
        && (*(result + 0x6e4) != 0x3e8 || *(result + 0x6e8) != x8_1)
        && (*(result + 0x910) != 0x3e8 || *(result + 0x914) != x8_1)
        && (*(result + 0xb3c) != 0x3e8 || *(result + 0xb40) != x8_1)
        && (*(result + 0xd68) != 0x3e8 || *(result + 0xd6c) != x8_1)
        && (*(result + 0xf94) != 0x3e8 || *(result + 0xf98) != x8_1))
    return result

return UI2SetState(zx.q(x20), &data_11ceac8, arg2, 0) __tailcall
