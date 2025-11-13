// 函数: _Z25CalcGlobalPodIconPositioni
// 地址: 0xaf83a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int128_t v0
int128_t v1
result, v0, v1 = GameMainUI()

if (result.d == 0)
    v1 = *TI
    v0 = *(TI + 0x10)
else
    result, v0, v1 = UI2GetTableTransform(result, "tbl_global_pods", arg1, nullptr)
    int128_t var_40
    v1 = var_40
    int128_t var_30
    v0 = var_30

int128_t* entry_x8
*entry_x8 = v1
entry_x8[1] = v0
return result
