// 函数: _Z24UI2MergeRecFromSublayoutbR3UI2P6XAssetRK16UI2StateBindingsRi18UI2AttribTreeIndex
// 地址: 0x101dda4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg3
int32_t x23 = arg6

if (x8 == 0)
    if (*(arg3 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg3, false, true)
    x8 = *arg3

int64_t* x25 = *x8

if (x25[1].d == 0)
    pthread_kill(pthread_self(), 6)
    return TextGetLineHeight(XNoReturn()) __tailcall

uint64_t result = zx.q(*(arg2 + 0x167c))
*(arg2 + 0x1688) = arg3
*(arg2 + 0x1690) = x23
int64_t x26

if (result.d == 0)
    x26 = sx.q(x23)
    result = AttribMapGetInt(*gUI2AttribTable, *x25 + muls.dp.d(x23, 0x18), 0x66)
    *(arg2 + 0x167c) = result.d
else
    x26 = sx.q(x23)

int32_t x9_2 = *(*x25 + x26 * 0x18 + 0x10)
int32_t x8_9

if (x9_2 s<= 0)
    x8_9 = *arg5
label_101df54:
    *arg5 = x8_9 + x9_2
    return result

int32_t x25_1 = 0
UI2* x1_2

if (result.d == 2)
    do
        int32_t x8_6 = *(arg2 + 0x1974)
        
        if (x8_6 == 0)
            void* x0_5 = UI2Alloc(arg2)
            x8_6 = *(x0_5 + 0x19a0)
            *(x0_5 + 5) = 1
            *(arg2 + 0x1974) = x8_6
        
        x1_2 = *gUI2 + mulu.dp.d(x8_6 & 0xffff, 0x19a8)
    label_101df08:
        *(x1_2 + 0x17d8) = 1
        int32_t var_64 = 0
        result = UI2MergeRecFromSublayout(arg1 & 1, x1_2, arg3, arg4, &var_64, zx.q(x23 + 1))
        int32_t x9_4 = var_64
        x8_9 = *arg5 + x9_4
        *arg5 = x8_9
        
        if (x9_2 - 1 == x25_1)
            goto label_101df54
        
        x25_1 += 1
        x23 = x23 + 1 + x9_4
    while (*(arg2 + 0x167c) == 2)

x1_2 = UI2GetOrAllocChild(arg2, x25_1)
goto label_101df08
