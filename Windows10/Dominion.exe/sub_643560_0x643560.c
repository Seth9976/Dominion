// 函数: sub_643560
// 地址: 0x643560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg1
void* var_20 = esi
char const* const var_38_1
int32_t var_34
char const* const var_30
int32_t result
char* ecx

if (arg2[1] == 4)
    void* ebx_1 = sub_5af880(arg2)
    void* var_8_1 = ebx_1
    result = (*(*data_147b070 + 0x2c))(*(esi + 0x40))
    
    if (result.b != 0)
    label_64367d:
        
        if (*(esi + 0x28) s<= 0)
            return result
        
        result = (*(*data_147b070 + 0x38))(*(esi + 0x44))
        
        if (result.b != 0)
            return result
        
        int32_t ecx_9 = *(esi + 0x2c)
        result = *(esi + 0x28) * 2
        
        if (ecx_9 != result)
            var_30 = "BindInstanceBuffersMesh"
            var_34 = 0x177
            ecx = "MeshUsesDefIndex16(mesh)"
            var_38_1 = "C:\x\ax2017\Engine\Draw3d.cpp"
        else
            uint32_t eax_14 = *(ebx_1 + 0x54) * ecx_9
            int32_t eax_15 = sub_687730(eax_14)
            result = *(ebx_1 + 0x54)
            int32_t ebx_2 = *(esi + 0x14)
            
            if (result * ebx_2 s<= 0xffff)
                int32_t i = 0
                
                if (result s> 0)
                    do
                        int32_t eax_16 = *(esi + 0x28)
                        int32_t edx_4 = 0
                        
                        if (eax_16 s> 0)
                            do
                                int32_t ecx_15
                                ecx_15.w = *(*(esi + 0x30) + (edx_4 << 1))
                                ecx_15.w += ebx_2.w * i.w
                                int32_t eax_18 = eax_16 * i + edx_4
                                edx_4 += 1
                                *(eax_15 + (eax_18 << 1)) = ecx_15.w
                                esi = var_20
                                eax_16 = *(esi + 0x28)
                            while (edx_4 s< eax_16)
                            
                            ebx_2 = *(esi + 0x14)
                        
                        i += 1
                    while (i s< *(var_8_1 + 0x54))
                
                result = (*(*data_147b070 + 0x34))(eax_15, eax_14, 0, 0, *(esi + 0x40))
                *(esi + 0x44) = result
                
                if (eax_15 != 0)
                    return _aligned_free(eax_15)
                
                return result
            
            var_30 = "BindInstanceBuffersMesh"
            var_34 = 0x17c
            ecx = "mesh.vertexCount * shaderDef->instanceCount <= 0xFFFF"
            var_38_1 = "C:\x\ax2017\Engine\Draw3d.cpp"
    else
        if (*(esi + 0x10) == 4)
            int128_t* eax_1 = *(esi + 0x20)
            int32_t eax_4 = *(esi + 0x14) * 0x30
            uint32_t ecx_4 = *(ebx_1 + 0x54) * eax_4
            void* edi_1 = sub_687730(ecx_4)
            int32_t i_1 = 0
            
            if (*(var_8_1 + 0x54) s> 0)
                int32_t ecx_5 = eax_4
                void* eax_7 = edi_1
                void* edx_2 = var_8_1
                void* var_10_1 = eax_7
                
                do
                    int32_t j = 0
                    
                    if (*(esi + 0x14) s> 0)
                        int128_t* edx_3 = eax_1
                        void* ecx_6 = eax_7
                        
                        do
                            int128_t xmm0_1 = *edx_3
                            j += 1
                            edx_3 += 0x2c
                            ecx_6 += 0x30
                            *(ecx_6 - 0x30) = xmm0_1
                            *(ecx_6 - 0x20) = *(edx_3 - 0x1c)
                            *(ecx_6 - 0x10) = *(edx_3 - 0xc)
                            *(ecx_6 - 8) = *(edx_3 - 4)
                            *(ecx_6 - 4) = i_1
                        while (j s< *(esi + 0x14))
                        
                        eax_7 = var_10_1
                        ecx_5 = eax_4
                        edx_2 = var_8_1
                    
                    i_1 += 1
                    eax_7 += ecx_5
                    var_10_1 = eax_7
                while (i_1 s< *(edx_2 + 0x54))
            
            result = (*(*data_147b070 + 0x28))(edi_1, ecx_4, 0xc, 0)
            *(esi + 0x40) = result
            
            if (edi_1 != 0)
                result = _aligned_free(edi_1)
            
            ebx_1 = var_8_1
            goto label_64367d
        
        var_30 = "BindInstanceBuffersMesh"
        var_34 = 0x15e
        ecx = "mesh.vertexFormat == VERTEX_FORMAT_POS_NORM_COL_TEX"
        var_38_1 = "C:\x\ax2017\Engine\Draw3d.cpp"
else
    var_30 = "ShaderGetDef"
    var_34 = 0x8a
    var_38_1 = "C:\x\ax2017\Engine\Shader.cpp"
    ecx = "assetPtr->assetType == ASSET_TYPE_SHADER"

sub_63b870(result, &data_801800, ecx, var_38_1, var_34, var_30)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
