// 函数: sub_b04ddc
// 地址: 0xb04ddc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2SetState(zx.q(arg1), &data_182dc60, 0xffffffff, 0)

if (*(ActiveGame() + 0x11b4) s>= 5)
    UI2SetState(zx.q(arg1), &data_182dc78, 0xffffffff, 0)

int64_t result
int64_t x2
int64_t x3
int64_t x4
result, x2, x3, x4 = ActiveGameHasColonies()

if ((result.d & 1) == 0)
    return result

return sub_b04ef0(arg1, result, &data_182dc90, x2, x3, x4) __tailcall
