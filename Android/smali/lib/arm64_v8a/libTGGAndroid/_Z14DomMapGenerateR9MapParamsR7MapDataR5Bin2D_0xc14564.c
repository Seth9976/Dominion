// 函数: _Z14DomMapGenerateR9MapParamsR7MapDataR5Bin2D
// 地址: 0xc14564
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

memset(arg2, 0, 0x215fe8)
int64_t* i_3 = *(arg3 + 8)

if (i_3 != 0)
    int64_t* i
    
    do
        i = *i_3
        XFree(i_3)
        i_3 = i
    while (i != 0)

uint64_t x22_1 = zx.q(*(arg3 + 0x20))
*(arg3 + 0x14) = 0
*arg3 = 0
*(arg3 + 8) = 0
*(arg3 + 0x20) = 0

if (x22_1.d s>= 1)
    memset(*(arg3 + 0x18), 0, x22_1 << 3)
    *(arg3 + 0x20) += x22_1.d
else if ((x22_1.d & 0x80000000) != 0)
    *(arg3 + 0x20) = x22_1.d

int64_t x0_3
int64_t x1
x0_3, x1 = RandomPCGSet(zx.q(*arg1), 0)
*arg2 = x0_3
*(arg2 + 8) = x1
GenerateMesh(arg2, arg2 + 0x10)
GetHeightmapPattern(arg2, zx.q(*(arg1 + 0xc)))
HeightmapPattern var_218
GenerateHeightmap(arg2, &var_218, arg2 + 0x10, arg2)
MapData& var_48

for (int64_t i_1 = 0; i_1 != 0x30000; i_1 += 0xc)
    void* x8_2 = arg2 + i_1
    MapData* v0
    v0.d = *(x8_2 + 0x18)
    
    if (not(v0.d f> 0f))
        var_48 = *(x8_2 + 0x10)
        v0.d = float.s(0x3c23d70a)
        Bin2DAdd(arg3, &var_48, 1, v0.d)

PlaceCities(arg1, arg2, arg3)
GenerateRivers(arg2)
int64_t x3_1 = sx.q(*(arg1 + 0x18))
int32_t x9_1 = *((x3_1 - 1) * 0x1a0 + 0x1156894)

if (x9_1 == 0)
    PlaceTrees(arg1, arg2, arg3, x3_1, (x3_1 - 1) * 0x1a0 + 0x1156898)
label_c146f8:
    int64_t x3_2 = sx.q(*(arg1 + 0x1c))
    int32_t x9_3 = *((x3_2 - 1) * 0x1a0 + 0x1156894)
    
    if (x9_3 == 1)
        PlaceMountains(arg1, arg2, arg3, x3_2, (x3_2 - 1) * 0x1a0 + 0x1156898)
    label_c14754:
        int64_t x3_3 = sx.q(*(arg1 + 0x20))
        int32_t x9_5 = *((x3_3 - 1) * 0x1a0 + 0x1156894)
        
        if (x9_5 == 1)
            PlaceMountains(arg1, arg2, arg3, x3_3, (x3_3 - 1) * 0x1a0 + 0x1156898)
        label_c147b8:
            int64_t i_4 = sx.q(*(arg2 + 0x175fc8))
            int64_t x8_13 = i_4 * 0xc
            int32_t* x22_3 = arg2 + 0x16ffc8 + x8_13
            var_48 = arg2
            
            if (x8_13 s>= 0x601)
                int64_t i_2 = i_4
                
                do
                    void* x0_17 = operator new(i_2 * 0xc, std::nothrow)
                    
                    if (x0_17 != 0)
                        sub_c223a0(arg2 + 0x16ffc8, x22_3, &var_48, i_4, x0_17, i_2)
                        return operator delete(x0_17)
                    
                    i_2 u>>= 1
                while (i_2 != 0)
            
            return sub_c223a0(arg2 + 0x16ffc8, x22_3, &var_48, i_4, nullptr, 0)
        
        if (x9_5 == 0)
            PlaceTrees(arg1, arg2, arg3, x3_3, (x3_3 - 1) * 0x1a0 + 0x1156898)
            goto label_c147b8
    else if (x9_3 == 0)
        PlaceTrees(arg1, arg2, arg3, x3_2, (x3_2 - 1) * 0x1a0 + 0x1156898)
        goto label_c14754
else if (x9_1 == 1)
    PlaceMountains(arg1, arg2, arg3, x3_1, (x3_1 - 1) * 0x1a0 + 0x1156898)
    goto label_c146f8

pthread_kill(pthread_self(), 6)
XNoReturn()
return DomMapProcessQueue() __tailcall
