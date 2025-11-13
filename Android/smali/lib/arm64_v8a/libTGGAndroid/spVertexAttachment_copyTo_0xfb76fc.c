// 函数: spVertexAttachment_copyTo
// 地址: 0xfb76fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x28)

if (x8 == 0)
    int64_t x0_2 = *(arg2 + 0x30)
    *(arg2 + 0x28) = 0
    
    if (x0_2 != 0)
        _spFree(x0_2)
        *(arg2 + 0x30) = 0
else
    *(arg2 + 0x28) = x8
    int64_t x0_1 = _spMalloc(sx.q(*(arg1 + 0x28)) << 2, 
        "..\..\ExternalCode\spine-c\src\spine\VertexAttachment.c", 0x77)
    *(arg2 + 0x30) = x0_1
    memcpy(x0_1, *(arg1 + 0x30), sx.q(*(arg1 + 0x28)) << 2)

int32_t x8_3 = *(arg1 + 0x38)
int64_t result

if (x8_3 == 0)
    result = *(arg2 + 0x40)
    *(arg2 + 0x38) = 0
    
    if (result != 0)
        result = _spFree(result)
        *(arg2 + 0x40) = 0
else
    *(arg2 + 0x38) = x8_3
    int64_t x0_4 = _spMalloc(sx.q(*(arg1 + 0x38)) << 2, 
        "..\..\ExternalCode\spine-c\src\spine\VertexAttachment.c", 0x83)
    *(arg2 + 0x40) = x0_4
    result = memcpy(x0_4, *(arg1 + 0x40), sx.q(*(arg1 + 0x38)) << 2)

*(arg2 + 0x48) = *(arg1 + 0x48)
return result
