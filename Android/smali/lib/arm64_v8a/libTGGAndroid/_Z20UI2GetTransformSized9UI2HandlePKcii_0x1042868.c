// 函数: _Z20UI2GetTransformSized9UI2HandlePKcii
// 地址: 0x1042868
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int128_t v0
int128_t v1
result, v0, v1 = UI2SelectByName(arg1, arg2, 0xffffffff)

if (result.d == 0)
    v1 = *TI
    v0 = *(TI + 0x10)
else
    RectF var_40
    RectF var_30
    result, v0, v1 = UI2TableTransform(*gUI2 + mulu.dp.d(result.d & 0xffff, 0x19a8), arg3, &var_30, 
        &var_40, false)
    int128_t var_60
    v1 = var_60
    int128_t var_50
    v0 = var_50

int128_t* entry_x8
*entry_x8 = v1
entry_x8[1] = v0
return result
