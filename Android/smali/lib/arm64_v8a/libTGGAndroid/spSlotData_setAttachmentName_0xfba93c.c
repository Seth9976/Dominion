// 函数: spSlotData_setAttachmentName
// 地址: 0xfba93c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = _spFree(*(arg1 + 0x18))

if (arg2 == 0)
    *(arg1 + 0x18) = 0
    return result

int64_t x0_4 = _spMalloc(strlen(arg2) + 1, "..\..\ExternalCode\spine-c\src\spine\SlotData.c", 0x34)
*(arg1 + 0x18) = x0_4
return strcpy(x0_4, arg2) __tailcall
