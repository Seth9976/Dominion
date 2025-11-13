// 函数: spAnimationStateData_setMixByName
// 地址: 0xface28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = spSkeletonData_findAnimation(*arg1)

if (result != 0)
    int64_t* i = result
    result = spSkeletonData_findAnimation(*arg1, arg3)
    
    if (result != 0)
        int64_t* x20_1 = arg1[2]
        int64_t* i_1 = result
        
        if (x20_1 == 0)
        label_face98:
            int64_t* x0_2 = _spCalloc(1, 0x18, 
                "..\..\ExternalCode\spine-c\src\spine\AnimationStateData.c", 0x3d)
            *x0_2 = i
            x20_1 = x0_2
            x0_2[2] = arg1[2]
            arg1[2] = x0_2
        label_facec4:
            result = _spCalloc(1, 0x18, 
                "..\..\ExternalCode\spine-c\src\spine\AnimationStateData.c", 0x29)
            *result = i_1
            result[1].d = arg4
            result[2] = x20_1[1]
            x20_1[1] = result
        else
            while (*x20_1 != i)
                x20_1 = x20_1[2]
                
                if (x20_1 == 0)
                    goto label_face98
            
            int64_t* x8_4 = x20_1[1]
            
            if (x8_4 == 0)
                goto label_facec4
            
            while (*x8_4 != i_1)
                x8_4 = x8_4[2]
                
                if (x8_4 == 0)
                    goto label_facec4
            
            x8_4[1].d = arg4

return result
