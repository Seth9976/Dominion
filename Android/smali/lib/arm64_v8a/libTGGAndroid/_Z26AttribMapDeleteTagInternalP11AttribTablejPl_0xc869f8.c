// 函数: _Z26AttribMapDeleteTagInternalP11AttribTablejPl
// 地址: 0xc869f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_1 = *(*(arg1 + 0x18) + (zx.q(arg2) << 3))
DefMap* x20 = *(x8_1 + 0x18)
int64_t result

if (*(x20 + 0x18) != 8)
    result = DefTypeIsBuiltIn(x20)
    
    if ((result.d & 1) == 0)
        result = *arg3
        
        if (result != *(*(*(arg1 + 0x18) + (zx.q(arg2) << 3)) + 0x48))
            result = DefinitionDeleteBlock(result, x20)
            *arg3 = 0
else
    result = *arg3
    
    if (result != *(x8_1 + 0x48))
        result = XFree(result)
        *arg3 = 0

return result
