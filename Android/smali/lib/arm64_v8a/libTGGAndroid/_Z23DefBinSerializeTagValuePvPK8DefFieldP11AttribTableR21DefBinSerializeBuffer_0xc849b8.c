// 函数: _Z23DefBinSerializeTagValuePvPK8DefFieldP11AttribTableR21DefBinSerializeBuffer
// 地址: 0xc849b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x23 = *DefinitionGetFieldDataAux(arg1, arg2)
DefMap* x0_2 = AttribTagExists(arg3, x23)

if ((x0_2.d & 1) != 0)
    x0_2 = AttribTagGetDefMap(arg3, x23)
    int32_t x23_1 = *(x0_2 + 0x18)
    char* x20_1
    
    if (x23_1 != 0xf)
        DefMap* x20_2 = x0_2
        x0_2 = DefTypeIsDeepStructure(x0_2)
        
        if ((x0_2.d & 1) != 0)
            if (x23_1 == 8)
                int64_t x8_4 = sx.q(*arg2)
                
                if ((zx.d(*(arg2 + 0x50)) & 0x10) == 0)
                    x20_1 = *(arg1 + x8_4)
                else
                    x20_1 = &data_793a18
                
                if (zx.d(*(arg4 + 0x10)) != 0)
                    goto label_c84a7c
                
                *(*arg4 + sx.q(*(arg4 + 8)) + x8_4) = *(arg4 + 0xc)
                goto label_c84b7c
            
            DefTypeIsBuiltIn(x20_2)
            int64_t x9_4 = *arg4
            uint32_t x12_1 = zx.d(*(arg4 + 0x10))
            uint64_t x10_2 = zx.q(*arg2)
            int64_t x8_9 = sx.q(*(arg4 + 8))
            int32_t x11_4 = (*(arg4 + 0xc) + 3) & 0xfffffffc
            *(arg4 + 0xc) = x11_4
            
            if (x12_1 == 0)
                *(x9_4 + x8_9 + x10_2) = x11_4
            
            void* x21_3 = *DefinitionGetFieldData(arg1, arg2)
            int32_t x0_13 = DefinitionGetSize(x20_2)
            
            if (zx.d(*(arg4 + 0x10)) == 0)
                memcpy(*arg4 + sx.q(*(arg4 + 0xc)), x21_3, sx.q(x0_13))
            
            int32_t x23_3 = *(arg4 + 8)
            int32_t x8_13 = *(arg4 + 0xc)
            *(arg4 + 8) = x8_13
            *(arg4 + 0xc) = x8_13 + x0_13
            x0_2 = DefBinSerializeBlock(x21_3, x20_2, nullptr, arg4)
            *(arg4 + 8) = x23_3
    else
        int64_t x21_1 = sx.q(*arg2)
        
        if (*(arg1 + x21_1) != 0)
            void* x22_1 = *arg4
            int64_t x23_2 = sx.q(*(arg4 + 8))
            x20_1 = XString::operator char const*()
            size_t x0_7
            
            if (zx.d(*(arg4 + 0x10)) != 0)
            label_c84a7c:
                x0_7 = strlen(x20_1)
                *(arg4 + 0xc) += x0_7.d + 1
                return x0_7
            
            *(x22_1 + x23_2 + x21_1) = *(arg4 + 0xc)
        label_c84b7c:
            int32_t x22_3 = zx.d(*(arg4 + 0x10)) == 0 ? 1 : 0
            x0_7 = strlen(x20_1)
            int32_t x21_2 = x0_7.d + 1
            
            if (x22_3 != 0)
                x0_7 = memcpy(*arg4 + sx.q(*(arg4 + 0xc)), x20_1, sx.q(x21_2))
            
            *(arg4 + 0xc) += x21_2
            return x0_7

return x0_2
