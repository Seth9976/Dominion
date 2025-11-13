// 函数: _spAttachmentLoader_setError
// 地址: 0xfac858
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

_spFree(*arg1)
_spFree(arg1[1])
int64_t x0_5 =
    _spMalloc(strlen(arg2) + 1, "..\..\ExternalCode\spine-c\src\spine\AttachmentLoader.c", 0x58)
*arg1 = x0_5
strcpy(x0_5, arg2)
int64_t x0_9 =
    _spMalloc(strlen(arg3) + 1, "..\..\ExternalCode\spine-c\src\spine\AttachmentLoader.c", 0x59)
arg1[1] = x0_9
return strcpy(x0_9, arg3) __tailcall
