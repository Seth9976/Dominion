// 函数: _spCalloc
// 地址: 0xfac9d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = data_2422580
size_t x19 = arg2 * arg1
int64_t result

if (x8 == 0)
    int64_t result_2 = data_11bbe10(x19)
    result = result_2
    
    if (result_2 != 0)
        memset(result, 0, x19)
else
    int64_t result_1 = x8(x19, arg3, zx.q(arg4))
    result = result_1
    
    if (result_1 != 0)
        memset(result, 0, x19)

return result
