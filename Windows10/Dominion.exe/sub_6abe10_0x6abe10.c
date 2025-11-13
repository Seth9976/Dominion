// 函数: sub_6abe10
// 地址: 0x6abe10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t ebx
int32_t var_2c = ebx
int32_t esi
int32_t var_30 = esi
char* edi
char* var_34 = edi
char const* const var_40
int32_t var_3c_1
char const* const var_38
char* ecx

if (*(arg3 + 0x10) == 0)
    *arg2 = arg4[1]
    arg2[1] = arg4[2]
    arg2[4] = 1
    arg2[0xf] = 1
    int128_t* eax_2
    int32_t ecx_1
    eax_2, ecx_1 = sub_687730(0x10)
    var_38 = arg5
    *eax_2 = zx.o(0)
    arg2[0x12] = eax_2
    arg2[5] = 0xb
    arg2[6] = arg4[4]
    int32_t eax_4 = *(arg3 + 0x10)
    arg2[7] = eax_4
    sub_6aa120(eax_4, arg4, ecx_1)
    char* esi_2 = arg2[0x12]
    *esi_2 = 0
    arg1 = arg4[4] - 1
    
    if (arg1 u<= 9)
        arg1 = zx.d(lookup_table_6abfc0[arg1])
        int32_t var_14
        char ecx_2
        char const* const* esp_2
        
        switch (arg1)
            case 0
                ecx_2 = 4
            label_6abf41:
                var_14 = arg4[1]
                int32_t eax_14 = arg4[2]
                int16_t var_c
                var_c.b = ecx_2
                void* ecx_8 = *arg4
                var_38 = esi_2
                esp_2 = &var_38
                int32_t var_10_1 = eax_14
                var_c:1.b = 1
                *(esi_2 + 8) = sub_72ec40(eax_14, &var_14, ecx_8, var_38)
                goto label_6abf5c
            case 1
                uint128_t xmm0_1 = *arg4
                int32_t var_18_1 = 2
                uint128_t var_28 = xmm0_1
                int32_t xmm0_2 = _mm_bsrli_si128(xmm0_1, 4)
                int32_t eax_6 = sub_6a9570(xmm0_2, 2)
                int32_t edx_1 = var_28:8.d
                var_38 = 2
                var_28:0xc.d = eax_6
                var_28.d = sub_687730(sub_6a9660(eax_6, edx_1, xmm0_2, var_38))
                sub_6a9de0(arg4, &var_28)
                void* ecx_7 = var_28.d
                var_14 = arg4[1]
                int32_t eax_10 = arg4[2]
                int32_t var_10 = eax_10
                int16_t var_c_1 = 0x104
                *(esi_2 + 8) = sub_72ec40(eax_10, &var_14, ecx_7, esi_2)
                void* esp_1 = &var_34
                char* eax_12 = var_28.d
                
                if (eax_12 != 0)
                    var_38 = eax_12
                    _aligned_free(var_38)
                    esp_2 = &var_34
                label_6abf5c:
                    esp_1 = &esp_2[1]
                
                int32_t result = *arg4
                
                if (result != 0)
                    *(esp_1 - 4) = result
                    _aligned_free()
                    esp_1 += 4
                
                *arg4 = 0
                result.b = 1
                *esp_1
                *(esp_1 + 4)
                *(esp_1 + 8)
                return result
            case 2
                ecx_2 = 3
                goto label_6abf41
            case 3
                ecx_2 = 1
                goto label_6abf41
    
    var_38 = "QoiWriteImageSpecToBits"
    var_3c_1 = 0xae
    var_40 = "C:\x\ax2017\Engine\stb_image_resize.cpp"
    ecx = "Halt"
else
    var_38 = "sTextureImportToQoi"
    var_3c_1 = 0x569
    var_40 = "C:\x\ax2017\Engine\TextureImport.cpp"
    ecx = "pImportSpec->textureType == TEXTURE_IMAGE"

sub_63b870(arg1, &data_801800, ecx, var_40, var_3c_1, var_38)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
