// 函数: _Z19UI2EditorClearStateb
// 地址: 0x103c8f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg1.d & 1) == 0)
    if (*(gUI2Editor + 0x704c) s>= 1)
        int64_t i = 0
        
        do
            void* x0_9 = UI2GetIndex(zx.q(*(gUI2Editor + (i << 2) + 0x604c)))
            int64_t* x22_2 = *(x0_9 + 0x1688)
            int64_t* x8_7 = *x22_2
            
            if (x8_7 == 0)
                if (x22_2[1].d == 0x15)
                    XString::GetString()
                    XTrace("Unpreloaded sound %s")
                
                AssetCatalogLoadAsset(x22_2, false, true)
                x8_7 = *x22_2
            
            AttribMap* x22_1 = **x8_7 + sx.q(*(x0_9 + 0x1690)) * 0x18
            XString::operator=(x0_9 + 0x17e0)
            AttribMapRemoveTag(*gUI2AttribTable, x22_1, 0x6f)
            i += 1
        while (i s< sx.q(*(gUI2Editor + 0x704c)))
else if (*(gUI2Editor + 0x6000) s>= 1)
    int64_t i_1 = 0
    int64_t (* const x28_1)() = gUI2Editor
    
    do
        void* fp_1 = *x28_1
        int64_t* x21_2 = *(fp_1 + 0x1688)
        int64_t* x8_1 = *x21_2
        
        if (x8_1 == 0)
            if (x21_2[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            AssetCatalogLoadAsset(x21_2, false, true)
            x8_1 = *x21_2
        
        AttribMap* x21_1 = **x8_1 + sx.q(*(fp_1 + 0x1690)) * 0x18
        XString::operator=(fp_1 + 0x17e0)
        AttribMapRemoveTag(*gUI2AttribTable, x21_1, 0x6f)
        i_1 += 1
        x28_1 += 0x18
    while (i_1 s< sx.q(*(gUI2Editor + 0x6000)))

return UI2CreateUndoCheckpoint(false) __tailcall
