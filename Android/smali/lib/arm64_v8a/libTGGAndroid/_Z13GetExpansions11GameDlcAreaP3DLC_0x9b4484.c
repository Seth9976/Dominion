// 函数: _Z13GetExpansions11GameDlcAreaP3DLC
// 地址: 0x9b4484
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DLC* x19 = arg2
void* var_18
int64_t result
int128_t v0
int128_t v1
int128_t v2
result, v0, v1, v2 = GameSpecific_GetDlcs(arg1, &var_18)

if (result.d s>= 1)
    void* x8_1 = var_18
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        v2 = *(x8_1 + 0x10)
        v0 = *(x8_1 + 0x20)
        int64_t x10_1 = *(x8_1 + 0x30)
        v1 = *x8_1
        x8_1 += 0x80
        i = i_1
        i_1 -= 1
        *(x19 + 0x10) = v2
        *(x19 + 0x20) = v0
        *(x19 + 0x30) = x10_1
        *x19 = v1
        x19 += 0x38
    while (i != 1)

return result
