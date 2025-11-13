// 函数: sub_5a91a0
// 地址: 0x5a91a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int32_t edx
ecx, edx = __chkstk(0x4074)
int32_t __saved_ebp
uint32_t result = __security_cookie ^ &__saved_ebp
uint32_t result_1 = result
void* edx_1 = ecx
int32_t ebx = 0
void* var_401c = edx_1

if (*(edx_1 + 0x175fc8) s> 0)
    void var_400c
    void* var_4014_1 = &var_400c
    void* edi_1 = edx_1 + 0x16ffd0
    
    while (true)
        int32_t ecx_1 = *(edi_1 - 4)
        int32_t eax_2 = *(edi_1 - 8) * 3
        void* edx_2 = (ecx_1 - 1) * 0x11c
        float xmm1_2 = *(edx_1 + (eax_2 << 2) + 0x14) * 1024f
        float var_4034 = *(edx_1 + (eax_2 << 2) + 0x10) * 1024f
        float var_4030_1 = xmm1_2
        int32_t var_18_3
        char const* const var_14_3
        char* ecx_13
        
        if (*(edx_2 + 0xb4a620) != ecx_1)
            var_14_3 = "TerrainElementDefGet"
            var_18_3 = 0x9b0
            ecx_13 = "TERRAIN_ELEMENT_DEFS[idx].terrain == element"
        else
            int32_t ecx_2 = *edi_1
            
            if (ecx_2 s>= *(edx_2 + 0xb4a738))
                var_14_3 = "TerrainElementDefImage"
                var_18_3 = 0x9b9
                ecx_13 = "seed < def.numImages"
            else
                float var_4010_1 = 0.568181813f
                float xmm1_3 = *(edx_2 + (ecx_2 + 2) * 0x10 + 0xb4a620)
                int64_t xmm0_3 = (*(edx_2 + ecx_2 * 0x10 + &data_b4a638)).q
                xmm1_3 f- 0
                int32_t eax_5
                eax_5:1.b = (xmm1_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_3, 0f) ? 1 : 0) << 2
                    | (xmm1_3 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    var_4010_1 = xmm1_3 * 0.568181813f
                
                int32_t* esi_1 = xmm0_3.d
                *esi_1
                float eax_6
                float edx_3
                eax_6, edx_3 = sub_5a0e40()
                float var_4074[0x4]
                float* var_14_1 = &var_4074
                float var_4028_1 = edx_3 * var_4010_1
                int128_t xmm0_8 = data_893580
                float var_402c = eax_6 * var_4010_1
                int128_t var_4064 = xmm0_8
                float* eax_8 = sub_5af7f0(&var_4074, &var_402c, &var_4034, var_14_1)
                int32_t var_18_1 = edx
                int32_t* edx_5 = *esi_1
                float* var_1c_1 = &var_4034
                int128_t var_4054 = *eax_8
                result = __87except(eax_8, edx_5, &var_4054, var_1c_1)
                int32_t* ecx_7 = xmm0_3:4.d
                
                if (ecx_7 != 0)
                    result = sub_682a60(&var_4064, &var_4054, *ecx_7, &var_4064, &data_bf23ac, 
                        data_171d8e4)
                
                edx_1 = var_401c
                ebx += 1
                edi_1 += 0xc
                var_4014_1 += 8
                
                if (ebx s>= *(edx_1 + 0x175fc8))
                    break
                
                continue
        
        sub_63b870(ecx_1 - 1, &data_801800, ecx_13, "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp", 
            var_18_3, var_14_3)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

CookieCheckFunction(result)
return result
