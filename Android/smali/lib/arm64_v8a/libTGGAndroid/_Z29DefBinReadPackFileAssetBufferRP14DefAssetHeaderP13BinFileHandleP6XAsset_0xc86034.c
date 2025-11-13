// 函数: _Z29DefBinReadPackFileAssetBufferRP14DefAssetHeaderP13BinFileHandleP6XAsset
// 地址: 0xc86034
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
DefMap* x0_1 = DefMapFromAssetType(zx.q(*(arg3 + 8)))
int32_t x23_1

if (*(arg3 + 0x18) == 0)
    int32_t x0_10 = HalGetFileSize(arg2)
    
    if (x0_10 u< 0xc)
        goto label_c861e4
    
    int32_t var_110
    int32_t var_10c
    int32_t var_108
    
    if ((HalRead(arg2, 0xc, &var_110) & 1) == 0 || var_110 != 0x5850434b || var_10c != 7
            || x0_10 s< var_108 * 0xa8 || var_108 != 1)
        goto label_c861e4
    
    int32_t var_100
    
    if ((HalRead(arg2, 0xa8, &var_100) & 1) == 0)
        goto label_c861e4
    
    int32_t var_fc
    char const* const x19_1
    
    if (var_fc != *(x0_1 + 0x28))
        x19_1 = "Can't load pack asset because version doesn't match '%s'"
    label_c86220:
        XString::operator char const*()
        XTrace(x19_1)
        goto label_c861e4
    
    void* x0_16 = AssetTypeGetInfo(zx.q(var_100))
    int32_t var_f8
    
    if ((zx.d(*(x0_16 + 0x2c)) & 1) == 0 && var_f8 != *(x0_16 + 0x28))
        x19_1 = "Can't load pack asset because hash doesn't match '%s'"
        goto label_c86220
    
    int64_t var_f4
    *(arg3 + 0x18) = var_f4
    int32_t var_ec
    x23_1 = var_ec
    *(arg3 + 0x20) = x23_1
    
    if (x23_1 == 0)
        x23_1 = *(arg3 + 0x1c)
else
    x23_1 = *(arg3 + 0x20)
    
    if (x23_1 == 0)
        x23_1 = *(arg3 + 0x1c)

void** x0_3 = XMalloc(x23_1 + 0x20)

if ((HalReadAtOffset(arg2, *(arg3 + 0x18), x23_1, &x0_3[4]) & 1) == 0)
label_c861e0:
    XFree(x0_3)
label_c861e4:
    
    if (*(x25 + 0x28) == x8)
        return 0
else
    if ((DefTypeIsBuiltIn(x0_1) & 1) == 0)
        if (*(x0_1 + 0x14) s> x23_1)
            goto label_c861e0
        
        if ((DefBinReadFixupField(&x0_3[4], &x0_3[4], x0_1, nullptr, x23_1) & 1) == 0)
            goto label_c861e0
    
    *arg1 = x0_3
    *x0_3 = &x0_3[4]
    *(*arg1 + 0x10) = 1
    *(*arg1 + 0x18) = x0_1
    *(*arg1 + 8) = 0
    
    if (*(x25 + 0x28) == x8)
        return 1

__stack_chk_fail()
noreturn
