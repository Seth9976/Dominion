// 函数: _Z19GetSmartplaySetting9SmartPlay14SmartplayStylePb
// 地址: 0xb02848
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
void* x0_1 = GetSmartplays(zx.q(arg2))
int64_t result = GetSmartplayDefault(zx.q(x20))
uint64_t i_1 = zx.q(*(x0_1 + 0x200))

if (i_1.d s>= 1)
    void* x8_1 = x0_1 + 4
    uint64_t i
    
    do
        if (*(x8_1 - 4) == x20)
            if (arg3 != 0)
                *arg3 = (result.d == *x8_1 ? 1 : 0).b
            
            return zx.q(*x8_1)
        
        i = i_1
        i_1 -= 1
        x8_1 += 8
    while (i != 1)

if (arg3 != 0)
    *arg3 = true

return result
