// 函数: sub_6d11b0
// 地址: 0x6d11b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_6d1370(arg1)
int32_t* ecx = *eax
int32_t var_14
char const* const var_10_1
char* ecx_1

if (ecx[1] == 0x20)
    void* ebx_2 = arg2 * 0xe0 + *sub_5af880(ecx)
    eax = sub_6cde00(eax, arg2)
    
    if (*ebx_2 == 2)
        if (*eax == 0)
            int32_t* edi_1 = *(eax + 0x60)
            
            if (edi_1 == 0)
                edi_1 = *(ebx_2 + 0x88)
            
            int32_t ecx_3 = *(eax + 4)
            
            if (ecx_3 != 0)
                if (*(sub_6985c0(ecx_3) + 4) != edi_1)
                    sub_698a30(*(eax + 4))
                    *(eax + 4) = sub_6987e0(edi_1)
            else if (edi_1 != 0)
                int32_t result = sub_6987e0(edi_1)
                *(eax + 4) = result
                return result
            
            return *(eax + 4)
        
        var_10_1 = "FabUIState"
        var_14 = 0x768
        ecx_1 = "elState.asset == NULL"
    else
        var_10_1 = "FabUIState"
        var_14 = 0x767
        ecx_1 = "el.type == FAB_UI"
else
    var_10_1 = "FabDefGet"
    var_14 = 0xeb
    ecx_1 = "ptr->assetType == ASSET_TYPE_FAB"

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\FabDef.cpp", var_14, var_10_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
