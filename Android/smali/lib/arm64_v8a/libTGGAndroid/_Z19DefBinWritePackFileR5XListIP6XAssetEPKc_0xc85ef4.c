// 函数: _Z19DefBinWritePackFileR5XListIP6XAssetEPKc
// 地址: 0xc85ef4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XList<XAsset*>* x0_1
char* x1
x0_1, x1 = PackFileIsZip(arg2)

if ((x0_1.d & 1) == 0)
    return DefBinWriteItemsToPackFile(arg2, arg1, true) __tailcall

void* x0_4
DefMap* x1_3
BinFileHandle* x2_1
int32_t x3_1
int32_t x4_1
x0_4, x1_3, x2_1, x3_1, x4_1 = DefBinWriteZipPackFile(x0_1, x1)
return DefBinReadPackFileAssetData(x0_4, x1_3, x2_1, x3_1, x4_1) __tailcall
