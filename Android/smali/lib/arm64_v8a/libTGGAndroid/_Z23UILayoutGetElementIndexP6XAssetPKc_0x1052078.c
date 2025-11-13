// 函数: _Z23UILayoutGetElementIndexP6XAssetPKc
// 地址: 0x1052078
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x21
int64_t var_18 = entry_x21
int64_t* x8 = *arg1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

int64_t* x8_2 = *x8
int64_t x22 = sx.q(x8_2[1].d)

if (x22.d s>= 1)
    entry_x21 = 0
    int64_t* x23_1 = *x8_2 + 8
    
    do
        if (strcmp(*x23_1, arg2) == 0)
            return zx.q(entry_x21.d)
        
        entry_x21 += 1
        x23_1 = &x23_1[0x2f]
    while (entry_x21 s< x22)

XString::GetString()
XTraceAndLog("couldn't find element %s in %s")
pthread_kill(pthread_self(), 6)
XNoReturn()
return zx.q(entry_x21.d)
