// 函数: _Z27PreloadTextureAllocatorInitP6XAssetS0_S0_
// 地址: 0xb4de80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x9 = *arg2

if (x9 == 0)
    if (*(arg2 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg2, false, true)
    x9 = *arg2

int32_t* x9_1 = **x9
int64_t* x8_2 = *arg3
uint64_t x23 = zx.q(*x9_1)
uint64_t x22_2 = zx.q(x9_1[1])

if (x8_2 == 0)
    if (*(arg3 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg3, false, true)
    x8_2 = *arg3

int32_t* x9_2 = **x8_2
int64_t* x8_5 = *arg1
uint64_t x24 = zx.q(*x9_2)
uint64_t x21_1 = zx.q(x9_2[1])
int64_t* entry_x8
int64_t x20_1
int32_t* x8_7

if (x8_5 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8_7 = ***arg1
    x20_1 = *(x8_7 + 0x28)
    
    if (x20_1 != 0)
        goto label_b4df58
else
    x8_7 = **x8_5
    x20_1 = *(x8_7 + 0x28)
    
    if (x20_1 != 0)
    label_b4df58:
        int32_t x9_3 = x8_7[0xd]
        int32_t x10_1 = x8_7[0xe]
        int32_t var_60 = x9_3
        int32_t var_5c_1 = x10_1
        int32_t var_58_1 = *x8_7 + x9_3
        int32_t var_54_1 = x8_7[1] + x10_1
        RectIWidth(&var_60)
        RectIHeight(&var_60)
        *(entry_x8 + 8) = var_60.o
        int64_t x0_9 = RectISize(&var_60)
        entry_x8[3] = zx.q(x0_9.d s/ x23.d) | zx.q((x0_9 u>> 0x20).d s/ x22_2.d) << 0x20
        entry_x8[4] = x22_2 << 0x20 | x23
        arg1 = RectISize(&var_60)
        entry_x8[5] = zx.q(arg1.d s/ x24.d) | zx.q((arg1 u>> 0x20).d s/ x21_1.d) << 0x20
        entry_x8[6] = x21_1 << 0x20 | x24
        *(entry_x8 + 0x838) = zx.o(0)
        entry_x8[0x109].b = 0
*entry_x8 = x20_1
