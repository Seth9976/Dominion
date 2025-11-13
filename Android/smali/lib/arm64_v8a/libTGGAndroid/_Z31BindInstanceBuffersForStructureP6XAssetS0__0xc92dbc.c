// 函数: _Z31BindInstanceBuffersForStructureP6XAssetS0_
// 地址: 0xc92dbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = ShaderGetDef(arg2)

if (result[0xa].d == 1)
    result = StructureDefGet(arg1)
    int32_t* x8_1 = *result
    
    if (*x8_1 s>= 1)
        int64_t* result_1 = result
        int64_t x21_1 = 0
        int64_t i = 0
        
        do
            result = BindInstanceBuffersMesh(*(x8_1 + 8) + x21_1, arg2)
            x8_1 = *result_1
            i += 1
            x21_1 += 0x150
        while (i s< sx.q(*x8_1))

return result
