// 函数: _Z10RectEditor17EditorScreenStyle
// 地址: 0x102cd60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d u> 3)
    pthread_kill(pthread_self(), 6)
    return RectEditorSafe(XNoReturn()) __tailcall

int128_t v3
v3.d = float.s(0x44e3a000)
int128_t v2
v2.d = float.s(0x454a6000)
int128_t v0
v0.d = 0f
int128_t v1
v1.d = 0f
int32_t x8_4
int32_t x9_1

switch (arg1.d)
    case 0
        int64_t* x19_1 = *(gUI2Editor + 0x6008)
        int64_t* x8_1 = *x19_1
        
        if (x8_1 == 0)
            if (x19_1[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            arg1, v0, v1, v2, v3 = AssetCatalogLoadAsset(x19_1, false, true)
            x8_1 = *x19_1
        
        void* x8_3 = *x8_1
        v2.d = *(x8_3 + 0x10)
        v3.d = *(x8_3 + 0x14)
        v0.d = *V20
        v1.d = *(V20 + 4)
        return 
    case 1
        x8_4 = 0x45000000
        x9_1 = 0x452aa000
    label_102ce30:
        v0.d = 0f
        v3.d = float.s(x8_4)
        v2.d = float.s(x9_1)
        v1.d = 0f
        return 
    case 2
        return 
    case 3
        x8_4 = 0x448ca000
        x9_1 = 0x45184000
        goto label_102ce30
