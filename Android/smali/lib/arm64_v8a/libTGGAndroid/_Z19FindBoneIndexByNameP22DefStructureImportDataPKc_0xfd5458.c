// 函数: _Z19FindBoneIndexByNameP22DefStructureImportDataPKc
// 地址: 0xfd5458
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = sx.q(*(arg1 + 0x10))

if (x21.d s>= 1)
    int64_t x19_1 = 0
    int64_t* x22_1 = *(arg1 + 0x18) + 0x78
    
    do
        if (strcmp(*x22_1, arg2) == 0)
            return zx.q(x19_1.d)
        
        x19_1 += 1
        x22_1 = &x22_1[0x1b]
    while (x19_1 s< x21)

XTrace("Can't find bone %s")
return zx.q(0xffffffff.d)
