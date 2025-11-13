// 函数: _Z17SkuGetEntitlementPKc12PlatformType
// 地址: 0x9af96c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = SkuGetDLC(arg1, arg2)

if (x0.d != 0)
    return DomDLCGrantsEntitlement(x0) __tailcall

XTraceAndLog("Unknown DLC for sku %s")
return 0
