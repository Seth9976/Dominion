// 函数: _Z16HasViewedProduct7DLCType
// 地址: 0x9ba938
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* x0 = GetActiveProfile()
int32_t* i = *(*(x0 + 0x7580) + ((zx.q(*(x0 + 0x7588)) & (zx.q(x19) | zx.q(x19 s>> 4))) << 3))

if (i == 0)
    return 0

int32_t x9_1

do
    x9_1 = *i
    
    if (x9_1 == x19)
        break
    
    i = *(i + 8)
while (i != 0)

return zx.q(x9_1 == x19 ? 1 : 0)
