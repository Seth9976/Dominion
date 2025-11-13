// 函数: _Z13LoadingUpdate9UI2Handle
// 地址: 0x9c7bf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
UI2StateDecl* x1

if ((ExtraTallAspectRatio() & 1) != 0)
    x1 = UIS_EXTRA_TALL_ASPECT_RATIO
else
    x1 = UIS_EXTRA_WIDE_ASPECT_RATIO

UI2SetState(zx.q(x19), x1, 0xffffffff, 0)
int32_t x8 = *(gLoadingScreen + 0x1c)

if (x8 == 1)
    LoadSome()
    x8 = 2
    *(gLoadingScreen + 0x1c) = x8
else if (x8 == 0)
    if ((GameSpecific_GetAssetsToLoad(gLoadingScreen) & 1) == 0)
        void* i_1 = AssetCatalogGetFirstIter()
        void* i = i_1
        
        if (i_1 != 0)
            do
                void* x0_5 = AssetCatalogGetNextIter(&i)
                
                if (*(x0_5 + 8) != 4)
                    void** x0_6 = XPooledCalloc(0x18)
                    *x0_6 = x0_5
                    x0_6[1] = 0
                    void* x8_4 = *(gLoadingScreen + 8)
                    x0_6[2] = x8_4
                    void*** x8_5
                    
                    if (x8_4 == 0)
                        x8_5 = gLoadingScreen
                    else
                        x8_5 = x8_4 + 8
                    
                    *x8_5 = x0_6
                    int32_t x8_6 = *(gLoadingScreen + 0x10)
                    *(gLoadingScreen + 8) = x0_6
                    *(gLoadingScreen + 0x10) = x8_6 + 1
            while (i != 0)
    
    *(gLoadingScreen + 0x18) = *(gLoadingScreen + 0x10)
    x8 = 1
    *(gLoadingScreen + 0x1c) = x8

int32_t x9_2 = *(gLoadingScreen + 0x18)
float v0

if (x9_2 == 0)
    v0 = 0f
else
    v0 = fconvert.s(1f) - float.s(*(gLoadingScreen + 0x10)) / float.s(x9_2)

if (x8 == 3)
    v0 = fconvert.s(1f)

return UI2SetStateFractional(zx.q(x19), &data_11cff98, 0xffffffff, v0)
