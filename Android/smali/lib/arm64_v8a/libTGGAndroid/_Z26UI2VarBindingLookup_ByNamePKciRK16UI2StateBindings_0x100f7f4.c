// 函数: _Z26UI2VarBindingLookup_ByNamePKciRK16UI2StateBindings
// 地址: 0x100f7f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_1 = zx.q(*(arg3 + 8))

if (i_1.d s>= 1)
    void** result = *arg3
    uint64_t i
    
    do
        int32_t x8_2 = result[1].d
        
        if ((x8_2 == arg2 || x8_2 == 0xffffffff) && strcasecmp(*(*result + 0x10), arg1) == 0)
            return result
        
        i = i_1
        i_1 -= 1
        result = &result[6]
    while (i != 1)

return nullptr
