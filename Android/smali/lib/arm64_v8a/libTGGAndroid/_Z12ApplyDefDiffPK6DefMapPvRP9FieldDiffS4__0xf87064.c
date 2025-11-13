// 函数: _Z12ApplyDefDiffPK6DefMapPvRP9FieldDiffS4_
// 地址: 0xf87064
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FieldDiff* x26 = *arg3

if (x26 == arg4)
    return 

while (true)
    *arg3 = x26 + 8
    DefField* x23_1 = *(arg1 + 8) + sx.q(*x26) * 0x68
    
    if ((DefTypeIsBuiltIn(*(x23_1 + 0x18)) & 1) == 0)
        ApplyDefDiff(*(x23_1 + 0x18), DefinitionGetFieldData(arg2, x23_1), arg3, 
            *arg3 + (sx.q(*(x26 + 4)) << 3))
        x26 = *arg3
        
        if (x26 == arg4)
            break
    else
        memcpy(DefinitionGetFieldData(arg2, x23_1), x26 + 4, sx.q(*(*(x23_1 + 0x18) + 0x14)))
        x26 = *arg3
        
        if (x26 == arg4)
            break
