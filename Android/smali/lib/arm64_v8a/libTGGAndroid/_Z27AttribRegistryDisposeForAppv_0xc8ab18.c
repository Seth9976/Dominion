// 函数: _Z27AttribRegistryDisposeForAppv
// 地址: 0xc8ab18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gAttribTableLookupCount s< 1)
    return 

int64_t i = 0

do
    void* x22_1 = *(gAttribTableFastLookupArray + (i << 3))
    XFree(*(x22_1 + 0x18))
    *(x22_1 + 0x18) = 0
    i += 1
while (i s< sx.q(*gAttribTableLookupCount))
