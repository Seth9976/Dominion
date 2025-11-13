// 函数: _Z14IsBoneAncestorP22DefStructureImportDataP16DefStructureBonei
// 地址: 0xc7c714
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = *(arg2 + 0x6c)

if (i == 0xffffffff)
    return 0

int32_t x8_1

do
    x8_1 = i == arg3 ? 1 : 0
    
    if (i == arg3)
        break
    
    i = *(*(arg1 + 0x18) + muls.dp.d(i, 0xd8) + 0x6c)
while (i != 0xffffffff)

return zx.q(x8_1)
