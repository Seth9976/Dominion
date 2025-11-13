// 函数: spSkin_setAttachment
// 地址: 0xfb6104
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = zx.q(arg2 u% 0x64)
void** i = *(arg1 + 0x30 + (zx.q(x26.d) << 3))

if (i != 0)
    do
        int32_t* x8_2 = *i
        
        if (*x8_2 == arg2 && strcmp(*(x8_2 + 8), arg3) == 0)
            break
        
        i = i[1]
    while (i != 0)

if (arg4 != 0)
    *(arg4 + 0x18) += 1

void** result

if (i == 0)
    int32_t* x0_2 = _spCalloc(1, 0x20, "..\..\ExternalCode\spine-c\src\spine\Skin.c", 0x28)
    *x0_2 = arg2
    int64_t x0_6 = _spMalloc(strlen(arg3) + 1, "..\..\ExternalCode\spine-c\src\spine\Skin.c", 0x2a)
    *(x0_2 + 8) = x0_6
    strcpy(x0_6, arg3)
    *(x0_2 + 0x10) = arg4
    *(x0_2 + 0x18) = *(arg1 + 0x28)
    *(arg1 + 0x28) = x0_2
    result = _spCalloc(1, 0x10, "..\..\ExternalCode\spine-c\src\spine\Skin.c", 0x36)
    *result = x0_2
    uint64_t x8_7 = x26 << 3
    result[1] = *(arg1 + 0x30 + x8_7)
    *(arg1 + 0x30 + x8_7) = result
else
    void* x8_5 = *i
    result = *(x8_5 + 0x10)
    
    if (result != 0)
        result = spAttachment_dispose(result)
        x8_5 = *i
    
    *(x8_5 + 0x10) = arg4

return result
