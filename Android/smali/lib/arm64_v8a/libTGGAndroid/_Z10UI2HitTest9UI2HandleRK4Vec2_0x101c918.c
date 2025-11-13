// 函数: _Z10UI2HitTest9UI2HandleRK4Vec2
// 地址: 0x101c918
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
int128_t v0

if (arg1.d == 0)
    v0 = data_24b4c40
    entry_x8[3].d = data_24b4c50
else
    arg1, v0 = UI2HitTest(*gUI2 + mulu.dp.d(arg1.d & 0xffff, 0x19a8), 0xff, arg2, false)
    int128_t var_28
    v0 = var_28
    int32_t var_18
    entry_x8[3].d = var_18

*(entry_x8 + 8) = v0
*entry_x8 = _vtable_for_UI2HitResult + 0x10
