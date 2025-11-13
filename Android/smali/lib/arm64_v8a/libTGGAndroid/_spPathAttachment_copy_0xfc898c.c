// 函数: _spPathAttachment_copy
// 地址: 0xfc898c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *arg1
void* result = _spCalloc(1, 0x78, "..\..\ExternalCode\spine-c\src\spine\PathAttachment.c", 0x37)
_spVertexAttachment_init()
_spAttachment_init(result, x20, 4, _spPathAttachment_dispose, _spPathAttachment_copy)
spVertexAttachment_copyTo(arg1, result)
*(result + 0x60) = arg1[0xc].d
int64_t x0_3 =
    _spMalloc(sx.q(arg1[0xc].d) << 2, "..\..\ExternalCode\spine-c\src\spine\PathAttachment.c", 0x2f)
*(result + 0x68) = x0_3
memcpy(x0_3, arg1[0xd], sx.q(arg1[0xc].d) << 2)
*(result + 0x70) = arg1[0xe].d
*(result + 0x74) = *(arg1 + 0x74)
return result
