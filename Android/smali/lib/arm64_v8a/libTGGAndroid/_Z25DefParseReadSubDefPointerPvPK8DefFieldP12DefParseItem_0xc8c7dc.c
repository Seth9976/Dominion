// 函数: _Z25DefParseReadSubDefPointerPvPK8DefFieldP12DefParseItem
// 地址: 0xc8c7dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = DefinitionGetFieldData(arg1, arg2)

if (*(arg3 + 0x18) == 0)
    *result = 0
    return result

void* x0_2 = XMalloc(DefinitionGetSize(*(arg2 + 0x30)))
*result = x0_2
return DefParseReadBlock(x0_2, *(arg2 + 0x30), *(arg3 + 0x18), false) __tailcall
