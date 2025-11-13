// 函数: _Z14PlaceMountainsRK9MapParamsR7MapDataR5Bin2D14TerrainElementRK18DistributionParams
// 地址: 0xc1a96c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int64_t x26 = sx.q(arg4) - 1
int32_t var_100bc

if (*(x26 * 0x1a0 + &data_11568a8) == 0)
    var_100bc = 0
else
    int32_t x8_33
    
    if (*(x26 * 0x1a0 + &data_11568c0) == 0)
        x8_33 = 1
    else if (*(x26 * 0x1a0 + &data_11568d8) == 0)
        x8_33 = 2
    else if (*(x26 * 0x1a0 + &data_11568f0) == 0)
        x8_33 = 3
    else if (*(x26 * 0x1a0 + &data_1156908) == 0)
        x8_33 = 4
    else if (*(x26 * 0x1a0 + &data_1156920) == 0)
        x8_33 = 5
    else if (*(x26 * 0x1a0 + &data_1156938) == 0)
        x8_33 = 6
    else if (*(x26 * 0x1a0 + 0x1156950) == 0)
        x8_33 = 7
    else if (*(x26 * 0x1a0 + 0x1156968) == 0)
        x8_33 = 8
    else if (*(x26 * 0x1a0 + 0x1156980) == 0)
        x8_33 = 9
    else if (*(x26 * 0x1a0 + 0x1156998) == 0)
        x8_33 = 0xa
    else if (*(x26 * 0x1a0 + 0x11569b0) == 0)
        x8_33 = 0xb
    else if (*(x26 * 0x1a0 + 0x11569c8) == 0)
        x8_33 = 0xc
    else if (*(x26 * 0x1a0 + 0x11569e0) == 0)
        x8_33 = 0xd
    else if (*(x26 * 0x1a0 + 0x11569f8) == 0)
        x8_33 = 0xe
    else if (*(x26 * 0x1a0 + 0x1156a10) != 0)
        x8_33 = 0x10
    else
        x8_33 = 0xf
    
    var_100bc = x8_33

int32_t x9 = *(arg1 + 0xc)
int32_t x8_35 = *arg5
int32_t x10

if (x8_35 s< 0)
    x10 = x8_35 + 1
else
    x10 = x8_35

int32_t x8_36

if (x9 == 5)
    x8_36 = x10 s>> 1
else
    x8_36 = x8_35

int32_t x10_3

if (x8_36 s< 0)
    x10_3 = x8_36 + 3
else
    x10_3 = x8_36

int32_t x8_37

if (x9 == 6)
    x8_37 = x10_3 s>> 2
else
    x8_37 = x8_36

if (x8_37 s< 1)
    return 

int32_t x27_1 = 0
v9.d = fconvert.s(1f)

do
    int32_t fp_1
    
    if (x27_1 != (var_100bc == 0 ? 1 : 0))
        fp_1 = x27_1 u% var_100bc
    else
        fp_1 = 0
    
    int64_t v0
    v0.d = *(&data_1156890 + x26 * 0x1a0 + muls.dp.d(fp_1, 0x18) + 0x2c)
    void* __offset(MapData, 0x18) x26_1 = arg2 + 0x18
    
    if (v0.d f== 0f)
        v10.d = v9.d
    else
        v10.d = v0.d
    
    v0.d = float.s(0x3ca3d70a) / *(arg5 + 4)
    int64_t i = 0
    v8.d = v0.d f* v10.d
    int64_t var_10080
    
    do
        float v2 = *(x26_1 - 8)
        float v1 = *(x26_1 - 4)
        float var_10088 = v2
        float var_10084_1 = v1
        v11.d = *x26_1
        
        if (v11.d f<= 0f)
            v0.d = float.s(0xc97423f0)
        else
            v0.d = float.s(0x3f79999a)
            bool cond:4_1 = v1 f> v0.d
            v0.d = float.s(0xc97423f0)
            
            if (not(cond:4_1) && not(v2 < float.s(0x3ccccccd)) && not(v2 > float.s(0x3ffccccd))
                    && not(v1 < float.s(0x3ccccccd)))
                arg1, v0 = Bin2DQuery(arg3, &var_10088, 0, v8.d)
                v0.d = v11.d f* v11.d
                
                if ((arg1.d & 1) != 0)
                    v0.d = float.s(0xc97423f0)
                else
                    v0.d = v0.d
        
        *(&var_10080 + i) = v0.d
        i += 4
        x26_1 += 0xc
    while (i != 0x10000)
    
    int32_t x22_1 = 0
    
    for (int64_t i_1 = 1; i_1 != 0x4000; i_1 += 1)
        v0.d = *(&var_10080 + (i_1 << 2))
        
        if (v0.d f> *(&var_10080 + (sx.q(x22_1) << 2)))
            x22_1 = i_1.d
    
    if (x22_1 == 0xffffffff)
        break
    
    arg1, v0 = RandomUnit(arg2)
    
    if (not(v0.d f> *(x26 * 0x1a0 + 0x11568a4)))
        int64_t x8_48 = sx.q(*(arg2 + 0x175fc8))
        *(arg2 + 0x175fc8) = x8_48.d + 1
        *(arg2 + x8_48 * 0xc + 0x16ffc8) = x22_1
        *(arg2 + x8_48 * 0xc + 0x16ffcc) = arg4
        *(arg2 + x8_48 * 0xc + 0x16ffd0) = fp_1
        var_10080 = *(arg2 + muls.dp.d(x22_1, 0xc) + 0x10)
        v0.d = v10.d f* float.s(0x3ca3d70a)
        arg1, v0 = Bin2DAdd(arg3, &var_10080, 3, v0.d)
    
    x27_1 += 1
while (x27_1 != x8_37)
