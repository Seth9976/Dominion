// 函数: _Z16MessageBoxUpdate9UI2Handle
// 地址: 0x9c0844
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, MessageBoxClick)
UI2SetText(zx.q(x19), &data_11cf3e0, gGameDlgManager + 0x1b8, 0xffffffff)
UI2SetText(zx.q(x19), &data_11cf3f8, gGameDlgManager + 0x1c0, 0xffffffff)

if ((operator!=(gGameDlgManager + 0x1c8, &data_793a18) & 1) != 0)
    UI2SetText(zx.q(x19), &data_11cf410, gGameDlgManager + 0x1c8, 0xffffffff)

int64_t result = operator!=(gGameDlgManager + 0x1d0, &data_793a18)

if ((result.d & 1) == 0)
    return result

return UI2SetText(zx.q(x19), &data_11cf428, gGameDlgManager + 0x1d0, 0xffffffff) __tailcall
