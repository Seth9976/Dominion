// 函数: _Z18MaterialStateTracePKcP13MaterialStatePPK14MaterialParamsi
// 地址: 0xf7c428
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = XTrace("---------------Material Bind: %s -------------")

if (arg4 s>= 1)
    int64_t i = 0
    
    do
        result = XTrace("  Material Params %d")
        int32_t* x23_1 = arg3[i]
        
        if (*x23_1 s>= 1)
            int64_t x24_1 = 0
            int64_t j = 0
            
            do
                result = MaterialTagTrace(*(x23_1 + 8) + x24_1)
                j += 1
                x24_1 += 0x10
            while (j s< sx.q(*x23_1))
        
        i += 1
    while (i != zx.q(arg4))

return result
