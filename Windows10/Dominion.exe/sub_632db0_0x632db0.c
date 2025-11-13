// 函数: sub_632db0
// 地址: 0x632db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *(arg1 + 0xe0)

if (esi != 0)
    while (true)
        uint32_t eax_1 = zx.d(esi.w)
        
        if (eax_1 u< data_b809e4)
            void* edi_2 = eax_1 * 0x1c30 + data_b809e0
            
            if (*(edi_2 + 0x1c28) == esi)
                esi = *(edi_2 + 0x244)
                sub_5cd880(edi_2, arg1)
                sub_5cb5a0(edi_2)
                
                if (esi == 0)
                    break
                
                continue
        
        sub_63b870(eax_1, &data_801800, "DataArrayTryToGet(id) != NULL", 
            "C:\x\ax2017\Engine\DataArray.h", 0x6d, "DataArray<struct DomGfx>::DataArrayGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

*(arg1 + 0xe0) = 0
