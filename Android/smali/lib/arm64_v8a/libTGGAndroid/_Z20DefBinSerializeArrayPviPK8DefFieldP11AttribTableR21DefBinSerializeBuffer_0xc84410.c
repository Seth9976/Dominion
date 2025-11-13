// 函数: _Z20DefBinSerializeArrayPviPK8DefFieldP11AttribTableR21DefBinSerializeBuffer
// 地址: 0xc84410
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = arg1
int32_t i_1 = arg2
DefMap* result = DefTypeIsDeepStructure(*(arg3 + 0x30))
DefMap* x8_1 = *(arg3 + 0x30)

if ((result.d & 1) != 0 || *(x8_1 + 0x18) == 0xf)
    result = DefinitionGetSize(x8_1)
    
    if (i_1 s>= 1)
        int32_t x24_1 = result.d
        int32_t i
        
        do
            result = *(arg3 + 0x30)
            int32_t x8_4 = *(result + 0x18)
            char* x25_1
            
            if (x8_4 == 8)
                if ((zx.d(*(arg3 + 0x50)) & 0x10) == 0)
                    x25_1 = *x23
                else
                    x25_1 = &data_793a18
                
                if (zx.d(*(arg5 + 0x10)) == 0)
                    *(*arg5 + sx.q(*(arg5 + 8))) = *(arg5 + 0xc)
                label_c84530:
                    uint32_t fp_2 = zx.d(*(arg5 + 0x10))
                    result = strlen(x25_1)
                    int32_t x28_2 = result.d + 1
                    
                    if (fp_2 == 0)
                        result = memcpy(*arg5 + sx.q(*(arg5 + 0xc)), x25_1, sx.q(x28_2))
                    
                    *(arg5 + 0xc) += x28_2
                else
                label_c84514:
                    result = strlen(x25_1)
                    *(arg5 + 0xc) += result.d + 1
            else if (x8_4 != 0xf)
                DefTypeIsBuiltIn(result)
                result = DefBinSerializeBlock(x23, *(arg3 + 0x30), arg4, arg5)
            else if (*x23 != 0)
                int32_t* x28_1 = *arg5
                int64_t fp_1 = sx.q(*(arg5 + 8))
                x25_1 = XString::operator char const*()
                
                if (zx.d(*(arg5 + 0x10)) != 0)
                    goto label_c84514
                
                *(x28_1 + fp_1) = *(arg5 + 0xc)
                goto label_c84530
            i = i_1
            i_1 -= 1
            x23 += sx.q(x24_1)
            *(arg5 + 8) += x24_1
        while (i != 1)

return result
