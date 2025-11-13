// 函数: _Z13UndoAvailableRK3UI2i
// 地址: 0x1036430
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 - 0x64 u>= 0x12 || (0x3e805 u>> (arg2 - 0x64) & 1) == 0)
    void* x0_1 = TryGetEditorOverride(arg1)
    
    if (x0_1 != 0)
        return AttribMapTagExists(x0_1 + 0x18, arg2) __tailcall
    
    uint32_t x8_3
    
    if (arg2 == 0x76)
        x8_3 = zx.d(*XString::operator char const*())
    
    if (arg2 != 0x76 || x8_3 != 0)
        int64_t* x21 = *(arg1 + 0x1688)
        int64_t* x8_4 = *x21
        
        if (x8_4 == 0)
            if (x21[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            AssetCatalogLoadAsset(x21, false, true)
            x8_4 = *x21
        
        return AttribMapTagExists(**x8_4 + sx.q(*(arg1 + 0x1690)) * 0x18, arg2) __tailcall

return 0
