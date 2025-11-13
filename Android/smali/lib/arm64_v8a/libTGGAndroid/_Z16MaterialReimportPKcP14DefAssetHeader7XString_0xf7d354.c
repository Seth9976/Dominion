// 函数: _Z16MaterialReimportPKcP14DefAssetHeader7XString
// 地址: 0xf7d354
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = *arg2
char x0_1 = AttribMapGetBool(*gMaterialAttribTable, *(*(x19 + 8) + 8) + 8, 1)
void* x8_2 = *(x19 + 8)
*(x19 + 0x10) = x0_1 & 1
*(x19 + 0x11) = AttribMapGetBool(*gMaterialAttribTable, *(x8_2 + 8) + 8, 0) & 1
return 1
