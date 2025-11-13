// 函数: spAnimationStateData_setMix
// 地址: 0xfacf18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = arg1[2]

if (x20 == 0)
label_facf68:
    int64_t* x0 =
        _spCalloc(1, 0x18, "..\..\ExternalCode\spine-c\src\spine\AnimationStateData.c", 0x3d)
    *x0 = arg2
    x20 = x0
    x0[2] = arg1[2]
    arg1[2] = x0
label_facf94:
    arg1 = _spCalloc(1, 0x18, "..\..\ExternalCode\spine-c\src\spine\AnimationStateData.c", 0x29)
    *arg1 = arg3
    arg1[1].d = arg4
    arg1[2] = x20[1]
    x20[1] = arg1
else
    while (*x20 != arg2)
        x20 = x20[2]
        
        if (x20 == 0)
            goto label_facf68
    
    int64_t* x8_4 = x20[1]
    
    if (x8_4 == 0)
        goto label_facf94
    
    while (*x8_4 != arg3)
        x8_4 = x8_4[2]
        
        if (x8_4 == 0)
            goto label_facf94
    
    x8_4[1].d = arg4
