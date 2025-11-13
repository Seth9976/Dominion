// 函数: _Z19sTextureImportToQoiP23DefTextureXMLImportSpecP20DefTextureImportDataP9ImageSpecPKc
// 地址: 0xfd9318
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = *(arg3 + 8)
int32_t x8_1 = *(arg3 + 0xc)
*(arg2 + 0x10) = 1
*(arg2 + 4) = x8_1
*(arg2 + 0x3c) = 1
*(arg2 + 0x48) = XCalloc(0x10)
*(arg2 + 0x14) = 0xb
*(arg2 + 0x18) = *(arg3 + 0x14)
*(arg2 + 0x1c) = *(arg1 + 0x10)
sub_fd93b0(arg3)
DefTextureImage* x1_1 = *(arg2 + 0x48)
*x1_1 = 0
QoiWriteImageSpecToBits(arg3, x1_1)
XFree(*arg3)
*arg3 = 0
return 1
