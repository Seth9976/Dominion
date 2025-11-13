// 函数: sub_682290
// 地址: 0x682290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edx = data_147abe4
char const* const var_18
int32_t var_14
char const* const var_10_1
void* eax
char* ecx_1

if (*(edx + 0x1d) == 0)
    *(edx + 0x1d) = 1
    int32_t* edi_1 = nullptr
    
    while (true)
        if ((*(*data_147b070 + 0x2c))(*(edi_1 + edx)) == 0)
            *(data_147abe4 + edi_1) = (*(*data_147b070 + 0x28))(0, 0x20000, 1, 1)
        
        edi_1 = &edi_1[1]
        
        if (edi_1 s>= 0x10)
            break
        
        edx = data_147abe4
    
    if ((*(*data_147b070 + 0x38))(*(data_147abe4 + 0x14)) != 0)
    label_68239d:
        void* result = data_147abe4
        
        if (*(result + 0x1c) == 0)
            *(result + 0x1c) = 1
            sub_681b40(sub_69f030("sys\Sprite.material", 5))
            result = data_147abe4
        
        int32_t var_14_1
        char* ecx_9
        
        if (*(result + 0x18) == 0)
            if (*(result + 0x3c) == 0)
                return result
            
            char const* const var_10_6 = "SpriteDrawBegin"
            var_14_1 = 0x2f6
            ecx_9 = "gpSpriteAppData->pLockedVerts == 0"
        else
            char const* const var_10_5 = "SpriteDrawBegin"
            var_14_1 = 0x2f5
            ecx_9 = "gpSpriteAppData->numBufferSprites == 0"
        
        sub_63b870(result, &data_801800, ecx_9, "C:\x\ax2017\Engine\Sprite.cpp", var_14_1, 
            "SpriteDrawBegin")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax = _aligned_malloc(0x3000, 0x10)
    
    if (eax != 0)
        int32_t i = 0
        int16_t* esi_2 = eax + 4
        
        do
            int16_t edx_2 = (i << 2).w
            i += 1
            esi_2[-2] = edx_2
            *esi_2 = edx_2 + 2
            esi_2[1] = edx_2 + 2
            esi_2[-1] = edx_2 + 1
            esi_2 = &esi_2[6]
            esi_2[-4] = edx_2 + 1
            esi_2[-3] = edx_2 + 3
        while (i s< 0x400)
        
        *(data_147abe4 + 0x14) = (*(*data_147b070 + 0x34))(eax, 0x3000, 0, 0, 0)
        _aligned_free(eax)
        goto label_68239d
    
    var_10_1 = "XMalloc"
    var_14 = 0x57
    var_18 = "C:\x\ax2017\Engine\xMemory.cpp"
    ecx_1 = "pBuffer"
else
    var_10_1 = "SpriteDrawBegin"
    var_14 = 0x2ef
    var_18 = "C:\x\ax2017\Engine\Sprite.cpp"
    ecx_1 = "!gpSpriteAppData->spritesDrawing"

sub_63b870(eax, &data_801800, ecx_1, var_18, var_14, var_10_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
