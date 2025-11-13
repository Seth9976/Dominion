// 函数: _Z25MayaDefCompressVertexListP9DefFlanimP19DefMayaFlanimVertexP19DefFlanimVertexList
// 地址: 0xf67980
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefFlanimVertexList* x19 = arg3
int64_t result

for (int64_t i = 0; i != 8; )
    if (i u> 3)
        if (((i.d | 2) & 0x7ffffffe) != 6)
            pthread_kill(pthread_self(), 6)
            char* x0_9
            float* x1_6
            XString* x2_5
            x0_9, x1_6, x2_5 = XNoReturn()
            return FlanimParseActionName(x0_9, x1_6, x2_5) __tailcall
        
        int32_t x23_2 = *(arg2 + 8)
        int32_t x0_5 = FlanimCompressGetSizeConstantInt(arg1, arg2, i.d)
        
        if (x0_5 s>= x23_2 << 2)
            result = FlanimCompressAllInt(arg1, arg2, x19, i.d)
        else
            result = FlanimCompressConstantInt(arg1, arg2, x19, i.d, x0_5)
    else
        int32_t x23_1 = *(arg2 + 8)
        int32_t x0_2 = FlanimCompressGetSizeConstantVec2(arg2, i.d)
        
        if (x0_2 s>= x23_1 << 3)
            result = FlanimCompressAllVec2(arg2, x19, i.d)
        else
            result = FlanimCompressConstantVec2(arg2, x19, i.d, x0_2)
    
    i += 1
    x19 += 0x10

return result
