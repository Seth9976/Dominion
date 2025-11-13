// 函数: sub_6433d0
// 地址: 0x6433d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 1
int32_t var_8 = arg1
int128_t* esi = arg2

if (data_147ab9c s> 1)
    result = data_147ab9c

int32_t ebx = 0

if (result s<= 0)
    return result

void* edi = (data_147ab98 << 2) + &data_1476b90
int32_t var_e4
int32_t eax_2
char* ecx

while (true)
    eax_2 = *edi
    
    if (eax_2 s< 0 || eax_2 s> data_e76b40)
        char const* const var_e0_5 = "Draw3DGetInstanceMatrices"
        var_e4 = 0x138
        ecx = "itemIndex >= 0 && itemIndex <= gDraw3DData.renderItemCount"
        break
    
    eax_2 *= 0x180
    
    if (*(eax_2 + 0xcf6b40) != 0)
        char const* const var_e0_4 = "Draw3DGetInstanceMatrices"
        var_e4 = 0x13b
        ecx = "renderItem.renderType == RENDER_ITEM_MESH"
        break
    
    int128_t xmm0_1 = *(eax_2 + 0xcf6b48)
    int128_t xmm1_1 = *(eax_2 + 0xcf6b58)
    int128_t xmm2_1 = *(eax_2 + 0xcf6b68)
    int128_t xmm3_1 = *(eax_2 + 0xcf6b78)
    int128_t var_4c = xmm0_1
    int128_t var_3c_1 = xmm1_1
    int128_t var_2c_1 = xmm2_1
    int128_t var_1c_1 = xmm3_1
    
    if (arg1 != 0x60)
        float var_cc[0x10]
        float* eax_4 = sub_642ae0(&var_cc, &var_4c, &data_cf6744, &var_cc)
        arg1 = var_8
        xmm0_1 = *eax_4
        xmm1_1 = *(eax_4 + 0x10)
        xmm2_1 = *(eax_4 + 0x20)
        xmm3_1 = *(eax_4 + 0x30)
        int128_t var_8c = xmm0_1
        int128_t var_7c_1 = xmm1_1
        int128_t var_6c_1 = xmm2_1
        int128_t var_5c_1 = xmm3_1
        
        if (arg1 != 0x61)
            eax_2 = sub_642ae0(&var_cc, &var_8c, &data_cf67c4, &var_cc)
            arg1 = var_8
            xmm0_1 = *eax_2
            xmm1_1 = *(eax_2 + 0x10)
            xmm2_1 = *(eax_2 + 0x20)
            xmm3_1 = *(eax_2 + 0x30)
            
            if (arg1 != 0x62)
                char const* const var_e0_3 = "Draw3DGetInstanceMatrices"
                var_e4 = 0x14f
                ecx = "materialParam == MATERIAL_MATRIX_WORLD_VIEW_PROJ_INSTANCE"
                break
    
    *esi = xmm0_1
    ebx += 1
    edi += 4
    esi[1] = xmm1_1
    esi[2] = xmm2_1
    esi[3] = xmm3_1
    esi = &esi[4]
    
    if (ebx s>= result)
        return result
    
    continue

sub_63b870(eax_2, &data_801800, ecx, "C:\x\ax2017\Engine\Draw3d.cpp", var_e4, 
    "Draw3DGetInstanceMatrices")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
