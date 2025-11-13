// 函数: sub_73eb30
// 地址: 0x73eb30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = data_147df90
char const* const var_18
int32_t var_14
char const* const var_10
int32_t eax
char* ecx_1

if (ecx[1] == 0x20)
    eax = sub_5af880(ecx)
    int32_t ecx_2 = data_147ef94
    
    if (ecx_2 s> 0)
        int32_t i = 0
        
        if (ecx_2 s> 0)
            void* edx_1 = &data_15003f0
            
            do
                int32_t ecx_3 = (&data_147df94)[i] * 0xe0
                edx_1 += 0x24
                i += 1
                void* ecx_4 = ecx_3 + *eax
                *(edx_1 + 0x8fdc) = *(ecx_4 + 0x10)
                *(edx_1 + 0x8fec) = *(ecx_4 + 0x20)
                *(edx_1 + 0x8ffc) = *(ecx_4 + 0x30)
                *(edx_1 - 0x24) = *(ecx_4 + 0x10)
                *(edx_1 - 0x14) = *(ecx_4 + 0x20)
                *(edx_1 - 4) = *(ecx_4 + 0x30)
            while (i s< data_147ef94)
        
        return sub_73e8e0()
    
    var_10 = "SetDragTranslateOrigins"
    var_14 = 0x1d7
    var_18 = "C:\x\ax2017\Engine\Editor\FabEditor.cpp"
    ecx_1 = "gFab.s.activeSetCount > 0"
else
    var_10 = "FabDefGet"
    var_14 = 0xeb
    var_18 = "C:\x\ax2017\Engine\FabDef.cpp"
    ecx_1 = "ptr->assetType == ASSET_TYPE_FAB"

sub_63b870(eax, &data_801800, ecx_1, var_18, var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
